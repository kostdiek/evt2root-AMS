#include<stdio.h>
void multidraw1vPos(){
TCanvas *c1= new TCanvas("c1", "c1", 800, 600);
TH2F *hist1 = new TH2F("hist1", "hist1", 1024, 0, 4096, 1024, 0, 4096);
TFile *file1 = TFile::Open("run761.root");
TFile *file2 = TFile::Open("run762.root");
TFile *file3 = TFile::Open("run763.root");
TFile *file4 = TFile::Open("run764.root");
TFile *file5 = TFile::Open("run765.root");
TFile *file6 = TFile::Open("run766.root");


file1->cd();
evtTree->Draw("dE1:Pos_X>>h1(1024, 0, 4096, 1024, 0, 4096)", "", "colz");
hist1->Add(h1);

file2->cd();
evtTree->Draw("dE1:Pos_X>>h2(1024, 0, 4096, 1024, 0, 4096)", "", "colz");
hist1->Add(h2);

file3->cd();
evtTree->Draw("dE1:Pos_X>>h3(1024, 0, 4096, 1024, 0, 4096)", "", "colz");
hist1->Add(h3);

file4->cd();
evtTree->Draw("dE1:Pos_X>>h4(1024, 0, 4096, 1024, 0, 4096)", "", "colz");
hist1->Add(h4);

file5->cd();
evtTree->Draw("dE1:Pos_X>>h5(1024, 0, 4096, 1024, 0, 4096)", "", "colz");
hist1->Add(h5);

file6->cd();
evtTree->Draw("dE1:Pos_X>>h6(1024, 0, 4096, 1024, 0, 4096)", "", "colz");
hist1->Add(h6);

gStyle->SetStatX(.9);
gStyle->SetStatY(.9);
gStyle->SetTitleX(0.5);
gStyle->SetTitleAlign(23);
hist1->Draw("colz");
hist1->GetXaxis()->SetTitle("Position (channels)");
hist1->GetXaxis()->CenterTitle();
hist1->GetYaxis()->SetTitle("Energy Loss in dE1 (channels)");
hist1->GetYaxis()->CenterTitle();
hist1->SetTitle("Energy Loss in dE1 vs Position");



}
