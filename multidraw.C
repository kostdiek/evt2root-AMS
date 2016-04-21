#include<stdio.h>
void multidraw(){
TCanvas *c1= new TCanvas("c1", "c1", 800, 600);
TH2F *hist1 = new TH2F("hist1", "hist1", 4096, 0, 4096, 4096, 0, 4096);
TFile *run749 = TFile::Open("run749.root");
TFile *run750 = TFile::Open("run750.root");
TFile *run751 = TFile::Open("run751.root");
TFile *run752 = TFile::Open("run752.root");
TFile *run753 = TFile::Open("run753.root");
TFile *run754 = TFile::Open("run754.root");

run749->cd();
evtTree->Draw("dE1+dE2:dE3>>h1(4096, 0, 4096, 4096, 0, 4096)", "iron_de1sm_1 && iron_de3sm_1 && iron_de12v3sm_1", "colz");
hist1->Add(h1);

run750->cd();
evtTree->Draw("dE1+dE2:dE3>>h2(4096, 0, 4096, 4096, 0, 4096)", "iron_de1sm_1 && iron_de3sm_1 && iron_de12v3sm_1", "colz");
hist1->Add(h2);

run751->cd();
evtTree->Draw("dE1+dE2:dE3>>h3(4096, 0, 4096, 4096, 0, 4096)", "iron_de1sm_1 && iron_de3sm_1 && iron_de12v3sm_1", "colz");
hist1->Add(h3);

run752->cd();
evtTree->Draw("dE1+dE2:dE3>>h4(4096, 0, 4096, 4096, 0, 4096)", "iron_de1sm_1 && iron_de3sm_1 && iron_de12v3sm_1", "colz");
hist1->Add(h4);

run753->cd();
evtTree->Draw("dE1+dE2:dE3>>h5(4096, 0, 4096, 4096, 0, 4096)", "iron_de1sm_1 && iron_de3sm_1 && iron_de12v3sm_1", "colz");
hist1->Add(h5);

run754->cd();
evtTree->Draw("dE1+dE2:dE3>>h6(4096, 0, 4096, 4096, 0, 4096)", "iron_de1sm_1 && iron_de3sm_1 && iron_de12v3sm_1", "colz");
hist1->Add(h6);

gStyle->SetStatX(.9);
gStyle->SetStatY(.9);
gStyle->SetTitleX(0.5);
gStyle->SetTitleAlign(23);
hist1->Draw("colz");
hist1->GetXaxis()->SetTitle("Energy Loss in dE3 (channels)");
hist1->GetXaxis()->CenterTitle();
hist1->GetYaxis()->SetTitle("Energy Loss in dE1 + dE2 (channels)");
hist1->GetYaxis()->CenterTitle();
hist1->SetTitle("Energy Loss in dE1 + dE2 vs Energy Loss in dE3");



}
