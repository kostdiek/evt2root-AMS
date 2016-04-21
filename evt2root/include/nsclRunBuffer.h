#ifndef NSCLRUNBUFFER_H
#define NSCLRUNBUFFER_H

#include <time.h>
#include "nsclBuffer.h"

class nsclRunBuffer
{
	private:
		std::string fRunTitle;
		time_t fRunStartTime; 
		time_t fRunEndTime; 
		unsigned int fElapsedRunTime;

		time_t GetTime(nsclBuffer *buffer, bool verbose = false);
		std::string GetTitle(nsclBuffer *buffer, bool verbose = false);
	public:
		///Default constructor.
		nsclRunBuffer();
		///Get Run Title
		std::string GetRunTitle();
		///Read the run start buffer.
		void ReadRunBegin(nsclBuffer *buffer,bool verbose=false);
		void ReadRunEnd(nsclBuffer *buffer,bool verbose=false);
		///Get run start time.
		time_t GetRunStartTime();
		time_t GetRunEndTime();
		unsigned int GetElapsedRunTime();
		void DumpRunBuffer(nsclBuffer *buffer);


};
#endif
