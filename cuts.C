#include<stdio.h>
void cuts(){
//de1 cuts
TCutG* iron_de1lg_1;
TFile* iron_1lg_1=new TFile("iron_de1lg_1.root");
iron_de1lg_1=(TCutG*)iron_1lg_1->Get("iron_de1lg_1");

TCutG* iron_de1sm_1;
TFile* iron_1sm_1=new TFile("iron_de1sm_2.root");
iron_de1sm_1=(TCutG*)iron_1sm_1->Get("iron_de1sm_1");

TCutG* nickel_de1lg_1;
TFile* nickel_1lg_1=new TFile("nickel_de1lg_1.root");
nickel_de1lg_1=(TCutG*)nickel_1lg_1->Get("nickel_de1lg_1");

TCutG* nickel_de1sm_1;
TFile* nickel_1sm_1=new TFile("nickel_de1sm_1.root");
nickel_de1sm_1=(TCutG*)nickel_1sm_1->Get("nickel_de1sm_1");
//de3 cuts
TCutG* iron_de3lg_1;
TFile* iron_3lg_1=new TFile("iron_de3lg_1.root");
iron_de3lg_1=(TCutG*)iron_3lg_1->Get("iron_de3lg_1");

TCutG* iron_de3sm_1;
TFile* iron_3sm_1=new TFile("iron_de3sm_1.root");
iron_de3sm_1=(TCutG*)iron_3sm_1->Get("iron_de3sm_1");

TCutG* nickel_de3lg_1;
TFile* nickel_3lg_1=new TFile("nickel_de3lg_1.root");
nickel_de3lg_1=(TCutG*)nickel_3lg_1->Get("nickel_de3lg_1");

TCutG* nickel_de3sm_1;
TFile* nickel_3sm_1=new TFile("nickel_de3sm_1.root");
nickel_de3sm_1=(TCutG*)nickel_3sm_1->Get("nickel_de3sm_1");
//de12v3 cuts
TCutG* iron_de12v3lg_1;
TFile* iron_12v3lg_1=new TFile("iron_de12v3lg_1.root");
iron_de12v3lg_1=(TCutG*)iron_12v3lg_1->Get("iron_de12v3lg_1");

TCutG* iron_de12v3sm_1;
TFile* iron_12v3sm_1=new TFile("iron_de12v3sm_1.root");
iron_de12v3sm_1=(TCutG*)iron_12v3sm_1->Get("iron_de12v3sm_1");

TCutG* nickel_de12v3lg_1;
TFile* nickel_12v3lg_1=new TFile("nickel_de12v3lg_1.root");
nickel_de12v3lg_1=(TCutG*)nickel_12v3lg_1->Get("nickel_de12v3lg_1");

TCutG* nickel_de12v3sm_1;
TFile* nickel_12v3sm_1=new TFile("nickel_de12v3sm_1.root");
nickel_de12v3sm_1=(TCutG*)nickel_12v3sm_1->Get("nickel_de12v3sm_1");


}
