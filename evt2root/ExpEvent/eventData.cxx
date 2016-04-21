#include "eventData.h"

ClassImp(eventData);

eventData::eventData()
{
	Reset();
}
void eventData::Reset()
{
	/*for (int i=0;i<32;i++) {
		tdc[i] = 0;	
		adc[i] = 0;	
	}*/
	si=0;
	dE1=0;
	dE2=0;
	dE3=0;
	dE4=0;
	LL=0;
	LR=0;
	RL=0;
	RR=0;
	LLs=0;
	LRs=0;
	RLs=0;
	RRs=0;
	LAnode=0;
	RAnode=0;
	RealTime=0;
	LiveTime=0;
	PUR=0;
	Pos_X=0;
		

}
void eventData::SetValue(int crate, int slot, int ch, int value)
{
	if (crate==0) {
		/*if (ch>=0 && ch<32) {
			if (slot==12) tdc[ch] = value;
			else if (slot==14) adc[ch] = value;
		}*/
		if (slot ==14) {
			if (ch==0) si=value;
			else if (ch==2) dE1=value;
			else if (ch==4) dE2=value;
			else if (ch==6) dE3=value;
			else if (ch==8) dE4=value;
		}
		else if (slot==12){
			if (ch==0) LL=value;
			else if (ch==1) LR=value;
			else if (ch==4) RL=value;
			else if (ch==5) RR=value;		
		}
		else if (slot==31){
			if (ch==0) LLs=value;
			else if (ch==1) LRs=value;
			else if (ch==4) RLs=value;
			else if (ch==5) RRs=value;
			else if (ch==6) LAnode=value;
			else if (ch==7) RAnode=value;
			else if (ch==8) RealTime=value;
			else if (ch==9) LiveTime=value; 
		}	
		else if (slot==31){
			if (ch==0) PUR=value;
		}
}
}

void eventData::Calibrate()
{
	
	/*
	xL= 1000 + ((LLs-LRs)/2);
	if (xL>0) Pos_X= xL;
		
	xR= 1000 + ((RLs-RRs)/2);
	if (xR>0) Pos_X=1305 +xR;
	*/

	if (LL != 0 && LR !=0) Pos_X =1000 + ((LL-LR)/2);
	else if (RR != 0 && RL != 0) Pos_X=1305 + (1000+((RL-RR)/2));

	
		

}








