#include<stdio.h>
void multidraw12v3(){
TCanvas *c1= new TCanvas("c1", "c1", 800, 600);
TH2F *hist1 = new TH2F("hist1", "hist1", 1024, 0, 4096, 1024, 0, 4096);
TFile *file1 = TFile::Open("run761.root");
TFile *file2 = TFile::Open("run762.root");
TFile *file3 = TFile::Open("run763.root");
TFile *file4 = TFile::Open("run764.root");
TFile *file5 = TFile::Open("run765.root");
TFile *file6 = TFile::Open("run766.root");

file1->cd();
evtTree->Draw("dE1+dE2:dE3>>h1(1024, 0, 4096, 1024, 0, 4096)", "iron_de1sm_1 && iron_de3sm_1 && iron_de12v3sm_1", "colz");
hist1->Add(h1);

file2->cd();
evtTree->Draw("dE1+dE2:dE3>>h2(1024, 0, 4096, 1024, 0, 4096)", "iron_de1sm_1 && iron_de3sm_1 && iron_de12v3sm_1", "colz");
hist1->Add(h2);

file3->cd();
evtTree->Draw("dE1+dE2:dE3>>h3(1024, 0, 4096, 1024, 0, 4096)", "iron_de1sm_1 && iron_de3sm_1 && iron_de12v3sm_1", "colz");
hist1->Add(h3);

file4->cd();
evtTree->Draw("dE1+dE2:dE3>>h4(1024, 0, 4096, 1024, 0, 4096)", "iron_de1sm_1 && iron_de3sm_1 && iron_de12v3sm_1", "colz");
hist1->Add(h4);

file5->cd();
evtTree->Draw("dE1+dE2:dE3>>h5(1024, 0, 4096, 1024, 0, 4096)", "iron_de1sm_1 && iron_de3sm_1 && iron_de12v3sm_1", "colz");
hist1->Add(h5);

file6->cd();
evtTree->Draw("dE1+dE2:dE3>>h6(1024, 0, 4096, 1024, 0, 4096)", "iron_de1sm_1 && iron_de3sm_1 && iron_de12v3sm_1", "colz");
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
