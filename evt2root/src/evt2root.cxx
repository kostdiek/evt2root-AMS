/** \file
 * Converts evt binary files into ROOT files containing \c TTrees 
 * containing the event data and scaler data.
 */

#include "nsclBuffer.h"
#include "nsclScalerBuffer.h"
#include "nsclRunBuffer.h"
#include "nsclEventBuffer.h"
#include "TTree.h"
#include "TFile.h"
#include "TParameter.h"
//#include "TObjString.h"

int main (int argc, char *argv[])
{
	if (argc != 3) {
		fprintf(stderr,"Usage: %s [input.evt] [output.root]\n",argv[0]);
		return 1;
	}

	nsclBuffer *buffer = new nsclBuffer(argv[1]);
	nsclScalerBuffer *scalerBuffer = new nsclScalerBuffer();
	nsclRunBuffer *runBuffer = new nsclRunBuffer();
	nsclEventBuffer *eventBuffer = new nsclEventBuffer();
	eventScaler *scaler = new eventScaler();
	eventData *data = new eventData();

	
	TFile *file = new TFile(argv[2],"RECREATE");
	TTree *evtTree = new TTree("evtTree","Events");
	TTree *scalerTree = new TTree("scalerTree","Scalers");
	scalerTree->Branch("scaler","eventScaler",&scaler);
	evtTree->Branch("event","eventData",&data);

	int cnt=0;
	while (buffer->GetNextBuffer() == 0)
	{
		printf("Buffer: %d\r",cnt);

		if (buffer->GetBufferType() == BUFFER_TYPE_DATA) {
			for (int i=0;i<buffer->GetNumOfEvents();i++) {
				eventBuffer->ReadEvent(buffer,data);
				evtTree->Fill();
			}
		}
		else if (buffer->GetBufferType() == BUFFER_TYPE_SCALERS) {
			scalerBuffer->ReadScalers(buffer,scaler);
			scalerTree->Fill();
		}
		else if (buffer->GetBufferType() == BUFFER_TYPE_RUNBEGIN) {
			runBuffer->ReadRunBegin(buffer);
			printf("Run %d - %s\n",buffer->GetRunNumber(),runBuffer->GetRunTitle().c_str());
			//TObjString *runTitle = new TObjString (runBuffer->GetRunTitle().c_str());
			//evtTree->GetUserInfo()->Add(runTitle);
			evtTree->SetTitle(runBuffer->GetRunTitle().c_str());
			TParameter<int>("run",buffer->GetRunNumber()).Write();
			TParameter<time_t>("runStartTime",runBuffer->GetRunStartTime()).Write();
			//delete runTitle;
		}
		else if (buffer->GetBufferType() == BUFFER_TYPE_RUNEND) {
			runBuffer->ReadRunEnd(buffer);
			TParameter<time_t>("runEndTime",runBuffer->GetRunEndTime()).Write();
			TParameter<int>("runTimeElapsed",runBuffer->GetElapsedRunTime()).Write();
			printf("Run Ended. Elapsed run time: %u s\n",runBuffer->GetElapsedRunTime());
			break;
		}
		//else 
		//	printf("Event Type: %d\n",buffer->GetBufferType());
		cnt++;
	}

	//scalerTree->Print();
	//evtTree->Print();
	file->Write();
	file->Close();

	delete buffer;
	return 0;
}
