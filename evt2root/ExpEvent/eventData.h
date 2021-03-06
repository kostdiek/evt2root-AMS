#ifndef EVENTDATA_H
#define EVENTDATA_H

#include "TObject.h"

///Traditional data acquisiton setup at Univ. of Notre Dame 2013
/**This is a multipurpose setup used at ND for data acquistion. It consists
 * of a ADC in slot ## and a TDC in slot ##
 */ 
class eventData : public TObject
{
	private:
		//int tdc[32];
		//int adc[32];
		int si;
		int dE1;
		int dE2;
		int dE3;
		int dE4;
		int LL;
		int LR;
		int RL;
		int RR;
		int LLs;
		int LRs;
		int RLs;
		int RRs;
		int LAnode;
		int RAnode;
		int RealTime;
		int LiveTime;
		int PUR;
		int Pos_X;
		
		

	public:
		///Default Constructor.
		eventData();
		///Reset the current values.
		void Reset();
		///Record the value from the specified location.
		void SetValue(int crate, int slot, int ch, int value);
		void Calibrate();
		


	ClassDef(eventData,2);
};

#endif


