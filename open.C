#include<stdio.h>
void open(int i){
  f = new TFile(Form("run%i.root",i),"READ");
//  cout<<"Ni de1: " <<evtTree->Draw("dE1:Pos_X", "Ni1_sm", "COLZ")<<endl;
//  cout<<"Ni de3: " <<evtTree->Draw("dE3:Pos_X", "Ni3_sm", "COLZ")<<endl;
//  cout<<"Ni de1 && Ni de3: " <<evtTree->Draw("dE3:Pos_X", "nickel_de1sm_1 && nickel_de3sm_1", "COLZ")<<endl;
//  cout<<"Ni de1 && Ni de3 && Ni de12v3: " <<evtTree->Draw("dE1+dE2:dE3", "nickel_de1sm_1 && nickel_de3sm_1 && nickel_de12v3sm_1", "COLZ")<<endl;
//  cout<<"Fe de1: " <<evtTree->Draw("dE1:Pos_X","Fe1_sm", "COLZ")<<endl;
//  cout<<"Fe de3: " <<evtTree->Draw("dE3:Pos_X","Fe3_sm", "COLZ")<<endl;
  cout<<"Fe de1 && Fe de3: " <<evtTree->Draw("dE3:Pos_X","blah2 && blahde3", "COLZ")<<endl;
  cout<<"Fe de1 && Fe de3 && Fe de12v3: " <<evtTree->Draw("dE1+dE2: dE3", "blah2 && blahde3", "COLZ")<<endl;
}
