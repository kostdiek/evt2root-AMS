void draw(Char_t *histname, float min, float max)
{
  TH1F *hist1 = (TH1F *) gROOT->FindObject(histname);
  hist1->GetXaxis()->SetRangeUser(min, max);
  hist1->Draw("");
  c1->Update();

}

void draw2(Char_t *histname2, float xmin, float xmax, float ymin, float ymax)
{
  TH2F *hist2 = (TH2F *)gROOT->FindObject(histname2);
  hist2->GetXaxis()->SetRangeUser(xmin, xmax);
  hist2->GetYaxis()->SetRangeUser(ymin, ymax);
  hist2->Draw("colz");
  c1->Update();
}

void Thformat2(Char_t *histname2, float xmin, float xmax, float ymin, float ymax, TCanvas *c1)
{
  TH2F *hist2 = (TH2F *)gROOT->FindObject(histname2);
  hist2->GetXaxis()->SetRangeUser(xmin, xmax);
  hist2->GetYaxis()->SetRangeUser(ymin, ymax);
  //.x Th_small_run73;
  //.x Th_large_run73;
  gStyle->SetOptStat(1000211);
  c1->SetLogz();
  hist2->Draw("colz");
  c1->Update();
}
void print(TCanvas *can)
{
  if( can != 0 ) {

    can->cd();
    can->Update();
    char * name = can->GetName();
    can->Print(name".ps"); 
    gSystem->Exec("lpr -P f1-phaser " name".ps");
  } else 
    printf("TCanvas" name "does not exist. Nothing for printing.\n");
}

void printc1()
{
  if( c1 != 0 ) {

    c1->cd();
    c1->Update();
    c1->Print("c1.ps"); 
    gSystem->Exec("lpr -P f1-phaser c1.ps");
  } else 
    printf("TCanvas c1 does not exist. Nothing for printing.\n");
}

void draw_de3x()
{
TH2F *de3x= new TH2F("de3x","",4096,0,4095,4096,0,4095);

gStyle->SetOptStat(1000211);
de3x->GetXaxis()->SetRangeUser(2000,2400);
de3x->GetXaxis()->SetTitle("Position (ch)");
de3x->GetXaxis()->CenterTitle();
de3x->GetYaxis()->SetRangeUser(0,2200);
de3x->GetYaxis()->SetTitle("Energy (ch)");
de3x->GetYaxis()->CenterTitle();
c1->Update();
c1->SetLogz();
tree->Draw("de3:x>>de3x","","colz");
}

void draw_mycut(TH2F * histname)
{
TCutG* mycut;
TFile * f2= new TFile("mycut.root");
mycut = (TCutG*)f2->Get("mycut");
mycut->Draw();
float counts = mycut->IntegralHist(histname);
Printf( "total counts in mycut: %f", counts);
}

void draw_Thcut_run73(TH2F * histname)
{
TCutG* Thcut_run73;
TFile * f2= new TFile("Thcut_run73.root");
Thcut_run73 = (TCutG*)f2->Get("Thcut_run73");
Thcut_run73->Draw();
float counts = Thcut_run73->IntegralHist(histname);
Printf( "total counts in Thcut_run73: %f", counts);
}

void draw_ThEcut(TH2F * histname)
{
TCutG* ThEcut;
TFile * f2= new TFile("ThEcut.root");
ThEcut = (TCutG*)f2->Get("CUTG");
ThEcut->Draw();
float counts = ThEcut->IntegralHist(histname);
Printf( "total counts in ThEcut: %f", counts);
}

void draw_etotx()
{
TH2F *etotx= new TH2F("etotx","",4096,0,4095,4096,0,4095);

gStyle->SetOptStat(1000211);
etotx->GetXaxis()->SetRangeUser(2000,2400);
etotx->GetXaxis()->SetTitle("Position (ch)");
etotx->GetXaxis()->CenterTitle();
etotx->GetYaxis()->SetRangeUser(0,3200);
etotx->GetYaxis()->SetTitle("Total Energy (ch)");
etotx->GetYaxis()->CenterTitle();
c1->Update();
c1->SetLogz();
tree->Draw("Etot:x>>etotx","","colz");
}


