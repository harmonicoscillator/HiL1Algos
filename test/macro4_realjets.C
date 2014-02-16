#include "TH1.h"
#include "TriggerPrimitivesTree_alex.h"
#include "TriggerPrimitivesTree_jetrate.h"
#include "TFile.h"
#include "TCanvas.h"
#include "TStyle.h"
#include "TLegend.h"
#include "TLine.h"
//#include <sstream>
#include "TString.h"

#include "TriggerPrimitivesTree_jetrate.C"
#include "TriggerPrimitivesTree_alex.C"

using namespace std;

void macro4_realjets()
{  
  int total_events = -1;
  TriggerPrimitivesTree_jetrate *min_real =
    new TriggerPrimitivesTree_jetrate(new TFile("minbias_v3.root"));
  TriggerPrimitivesTree_jetrate *jet_real =
    new TriggerPrimitivesTree_jetrate(new TFile("jet.root"));
  TriggerPrimitivesTree_jetrate *cen_real =
    new TriggerPrimitivesTree_jetrate(new TFile("central.root"));

  TriggerPrimitivesTree_alex *min =
    new TriggerPrimitivesTree_alex(new TFile("minbias_v3.root"));
  TriggerPrimitivesTree_alex *jet =
    new TriggerPrimitivesTree_alex(new TFile("jet.root"));
  TriggerPrimitivesTree_alex *cen =
    new TriggerPrimitivesTree_alex(new TFile("central.root"));

  
  TCanvas* plot;
 
  TH1D* h[6];

  TLegend* leg;

  h[0] = (TH1D*)min->Loop(total_events, 0, true, false)->Clone();
  h[1] = (TH1D*)jet->Loop(total_events, 0, true, true)->Clone();
  h[2] = (TH1D*)cen->Loop(total_events, 0, true, true)->Clone();
  h[3] = (TH1D*)min_real->Loop(total_events, false)->Clone();
  h[4] = (TH1D*)jet_real->Loop(total_events, true)->Clone();
  h[5] = (TH1D*)cen_real->Loop(total_events, true)->Clone();

  plot = new TCanvas();

  h[0]->SetTitle("Rate");
  h[0]->SetXTitle("Jet Threshold");
  h[0]->Draw("L");

  h[1]->SetLineColor(kBlue);
  h[1]->Draw("L,same");

  h[2]->SetLineColor(kRed);
  h[2]->Draw("L,same");

  h[3]->SetLineColor(kBlack);
  h[3]->SetLineStyle(2);
  h[3]->Draw("L,same");

  h[4]->SetLineColor(kBlue);
  h[4]->SetLineStyle(2);
  h[4]->Draw("L,same");

  h[5]->SetLineColor(kRed);
  h[5]->SetLineStyle(2);
  h[5]->Draw("L,same");


  leg = new TLegend(0.7,0.6,0.95,0.8);
  //leg = new TLegend(0.4,0.3,0.6,0.5);

  leg->SetFillColor(0);

  leg->AddEntry(h[0],"L1 Minbias, bkg subtracted","l");
  leg->AddEntry(h[1],"L1 Jet95, bkg subtracted","l");
  leg->AddEntry(h[2],"L1 Central, bkg subtracted","l");
  leg->AddEntry(h[3],"icPu5 Minbias","l");
  leg->AddEntry(h[4],"icPu5 Jet95","l");
  leg->AddEntry(h[5],"icPu5 Central","l");


  leg->Draw();
 
  plot->Update();

  plot->SaveAs("jetrate_comparison.eps");
  plot->SaveAs("jetrate_comparison.png");
  plot->SaveAs("jetrate_comparison.pdf");
  plot->SaveAs("jetrate_comparison.C");
  
  // plot->SetLogy();
  // plot->Update();
  // plot->SaveAs("jetrate_comparison_nosub_log.eps");
  // plot->SaveAs("jetrate_comparison_nosub_log.png");
}  

