#include<stdio.h>
void plot(){


  run9020->cd();
  evtTree->Draw("dE1+dE2:dE3>>h1(4096, 0, 4096, 4096, 0, 4096)", "", "COLZ");
  TH2F *h1=(TH2F*)gDirectory->Get("h1");
  
  run9021->cd();
  evtTree->Draw("dE1+dE2:dE3>>h2(4096, 0, 4096, 4096, 0, 4096)", "", "COLZ");
  TH2F *h2=(TH2F*)gDirectory->Get("h2");
  h1->Add(h2);
  
  run9022->cd();
  evtTree->Draw("dE1+dE2:dE3>>h3(4096, 0, 4096, 4096, 0, 4096)", "", "COLZ");
  TH2F *h3=(TH2F*)gDirectory->Get("h3");
  h1->Add(h3);

  run9023->cd();
  evtTree->Draw("dE1+dE2:dE3>>h4(4096, 0, 4096, 4096, 0, 4096)", "", "COLZ");
  TH2F *h4=(TH2F*)gDirectory->Get("h4");
  h1->Add(h4);

  run9024->cd();
  evtTree->Draw("dE1+dE2:dE3>>h5(4096, 0, 4096, 4096, 0, 4096)", "", "COLZ");
  TH2F *h5=(TH2F*)gDirectory->Get("h5");
  h1->Add(h5);

  run9025->cd();
  evtTree->Draw("dE1+dE2:dE3>>h6(4096, 0, 4096, 4096, 0, 4096)", "f_1sm5 && f_3sm5 && f_12v3sm5", "COLZ");
  TH2F *h6=(TH2F*)gDirectory->Get("h6");
  h1->Add(h6);

  run9026->cd();
  evtTree->Draw("dE1+dE2:dE3>>h7(4096, 0, 4096, 4096, 0, 4096)", "f_1sm5 && f_3sm5 && f_12v3sm5", "COLZ");
  TH2F *h7=(TH2F*)gDirectory->Get("h7");
  h1->Add(h7);

  run9027->cd();
  evtTree->Draw("dE1+dE2:dE3>>h8(4096, 0, 4096, 4096, 0, 4096)", "f_1sm5 && f_3sm5 && f_12v3sm5", "COLZ");
  TH2F *h8=(TH2F*)gDirectory->Get("h8");
  h1->Add(h8);

  run9028->cd();
  evtTree->Draw("dE1+dE2:dE3>>h9(4096, 0, 4096, 4096, 0, 4096)", "f_1sm5 && f_3sm5 && f_12v3sm5", "COLZ");
  TH2F *h9=(TH2F*)gDirectory->Get("h9");
  h1->Add(h9);



  h1->Draw("COLZ");
  h1->GetXaxis()->SetTitle("Energy Loss in dE1 and dE2 (channels)");
  h1->GetYaxis()->SetTitle("Energy Loss in dE3 (channels)");
  h1->GetXaxis()->CenterTitle();
  h1->GetYaxis()->CenterTitle();   
  gPad->Update();
}
