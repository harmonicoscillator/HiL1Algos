#include "TH1.h"
#include "TFile.h"
#include "TCanvas.h"
#include "TStyle.h"
#include "TLegend.h"
#include "TLine.h"
//#include <sstream>
#include "TString.h"

#include "TriggerPrimitivesTree_towerjet.h"
#include "TriggerPrimitivesTree_towerjet.C"

#include "TriggerPrimitivesTree_alex.h"
#include "TriggerPrimitivesTree_alex.C"


using namespace std;

void macro4tower(int total_events = -1)
{
  //int total_events = 2000;
  //TFile *infile = TFile::Open("/mnt/hadoop/cms/store/user/luck/L1_fullmerge/forest_partialmerge_1.root");
  TFile *infile = TFile::Open("minbias_v3.root");
  TriggerPrimitivesTree_towerjet *towers =
    new TriggerPrimitivesTree_towerjet(infile);

  TCanvas* plot;

  TH1D* h_towers[2];

  TLegend* leg;

  h_towers[0] = (TH1D*)towers->Loop(total_events, 0, true, false, 0)->Clone();
  h_towers[1] = (TH1D*)towers->Loop(total_events, 0, true, false, 1)->Clone();

  TriggerPrimitivesTree_alex *regions =
    new TriggerPrimitivesTree_alex(infile);
  TH1D* h_regions[2];

  h_regions[0] = (TH1D*)regions->Loop(total_events, 0, false, false)->Clone();
  h_regions[1] = (TH1D*)regions->Loop(total_events, 0, true, false)->Clone();

  /************** Doga File *************************/
  // TH1D* hmb=new TH1D();
  // TFile *f1 = new TFile("/net/hisrv0001/home/dgulhan/L1Trigger/newEtHist_mb.root");
  // hmb = (TH1D*)f1->Get("LargestEt");

  // int nbins_doga = hmb->GetNbinsX();
  // int max_en_doga = hmb->GetXaxis()->GetXmax();
  // h_min[2] = new TH1D("efficiency_curve","Fraction of passing events versus threshold",
  // 			      nbins_doga,0,max_en_doga);
  // double total_integral = hmb->Integral();
  // for(int i = 0; i < nbins_doga; i++)
  // {
  //   double j = (double)i*(double)max_en_doga/(double)nbins_doga;
  //   double integral = hmb->Integral(i, nbins_doga);
  //   h_min[2]->Fill(j, (double)integral/total_integral);
  // }
  /*****************************************************/

  plot = new TCanvas();

  /******************************************************/
  // TLine *fivep_l[2];
  // for(int i = 0; i < 2; i++)
  // {
  //   double bin_contents;
  //   double fivep_p;
  //   int nbins = h_min[i]->GetNbinsX();
  //   double hist_max = h_min[i]->GetXaxis()->GetXmax();
  //   for(int j = 1; j < nbins; j++)
  //   {
  //     bin_contents = h_min[i]->GetBinContent(j);
  //     if(bin_contents <= 0.05)
  //     {
  //   	fivep_p = (double)j*hist_max/(double)nbins;
  //   	break;
  //     }
  //   }

  //   fivep_l[i] = new TLine(fivep_p, 0, fivep_p, 1);
  //   fivep_l[i]->SetLineWidth(3);
  //   fivep_l[i]->SetLineStyle(3);

  //   cout << "five_p " << fivep_p << endl;
  // }
  /***********************************************************/

  // h_towers[0]->SetTitle("Efficiency");
  // h_towers[0]->SetLineColor(kRed);
  // h_towers[0]->Draw("L");

  h_regions[0]->SetTitle("L1 Primitives Jets");
  h_regions[0]->SetXTitle("L1 Threshold (GeV)");
  h_regions[0]->SetYTitle("L1 Accept Fraction");
  h_regions[0]->Draw("L");

  h_towers[0]->SetLineColor(kRed);
  h_towers[0]->Draw("L,same");
  h_towers[1]->SetLineColor(90);
  h_towers[1]->Draw("L,same");


  // h_regions[0]->SetLineColor(kRed);

  h_regions[1]->SetLineColor(kBlue);
  h_regions[1]->Draw("L,same");


  // fivep_l[0]->SetLineColor(kRed);
  // fivep_l[0]->Draw("same");
  // fivep_l[1]->SetLineColor(kBlue);
  // fivep_l[1]->Draw("same");

  leg = new TLegend(0.5,0.5,0.8,0.8);

  leg->SetFillColor(0);

  //leg->AddEntry(h_towers[0],"nosub towers","l");
  leg->AddEntry(h_regions[0],"Current system","l");
  leg->AddEntry(h_regions[1],"Stage-1 system","l");
  leg->AddEntry(h_towers[0],"Stage-2 system","l");
  leg->AddEntry(h_towers[1],"width=3 towerjets","l");


  // leg->AddEntry(h_min[2],"Tower Level Phi-Ring Subtraction","l");
  // leg->AddEntry(fivep_l[0],"Current System 5%","l");
  // leg->AddEntry(fivep_l[1],"Phi-Ring Subtraction 5%","l");
  // leg->AddEntry(fivep_l[2],"Tower-LevelPhi-Ring Subtraction 5%","l");


  leg->Draw();

  plot->Update();

  //plot->SaveAs("efficiency_comparison_l1primitives.pdf");
  //plot->SaveAs("efficiency_comparison_l1primitives.gif");
}
