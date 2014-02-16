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

//#include "TriggerPrimitivesTree_jetrate.C"
#include "JetTurnOnCurve.C"
#include "TriggerPrimitivesTree_alex.C"

using namespace std;

void macro4_pp()
{  
  int total_events = 3000;
  // TriggerPrimitivesTree_jetrate *min_real =
  //   new TriggerPrimitivesTree_jetrate(new TFile("minbias_v3.root"));
  // TriggerPrimitivesTree_jetrate *jet_real =
  //   new TriggerPrimitivesTree_jetrate(new TFile("jet.root"));
  // TriggerPrimitivesTree_jetrate *cen_real =
  //   new TriggerPrimitivesTree_jetrate(new TFile("central.root"));

  TriggerPrimitivesTree_alex *min =
    new TriggerPrimitivesTree_alex(new TFile("minbias_v3.root"));
  TriggerPrimitivesTree_alex *jet =
    new TriggerPrimitivesTree_alex(new TFile("jet.root"));
  TriggerPrimitivesTree_alex *cen =
    new TriggerPrimitivesTree_alex(new TFile("central.root"));

  //stage1
  //TString minbias_ppalgo = "/mnt/hadoop/cms/store/user/icali/HIMinBiasUPC/HIMinBiasUPC_Skim_HLT_HIMinBiasHfOrBSC_L1UEmulatorv1/98febc859c9b3771d1d4e30c0ee9c954/";
  //TString jet95_ppalgo = "/mnt/hadoop/cms/store/user/icali/HIHighPt/HIHighPt_Ski_Jet95_L1UNtuple_v1/98febc859c9b3771d1d4e30c0ee9c954/";

  //stage2
  TString minbias_ppalgo = "/mnt/hadoop/cms/store/user/icali/HIMinBiasUPC/HIMinBiasUPC_Skim_HLT_HIMinBiasHfOrBSC_v2_Stage2_v1/d072eab83cd7a828f45b132ee7ce670d/";
  TString jet95_ppalgo = "/mnt/hadoop/cms/store/user/icali/HIHighPt/Skim_HLT_HIJet95_v3_L1UNtuple_Stage2_v1/98febc859c9b3771d1d4e30c0ee9c954/";

  
  TCanvas* plot;
 
  TH1D* h[8];

  TLegend* leg;

  h[0] = (TH1D*)min->Loop(total_events, 0, true, false)->Clone();
  h[1] = (TH1D*)jet->Loop(total_events, 0, true, true)->Clone();
  h[2] = (TH1D*)cen->Loop(total_events, 0, true, true)->Clone();
  
  h[3] = (TH1D*)JetTurnOnCurve(minbias_ppalgo)->Clone();
  h[4] = (TH1D*)JetTurnOnCurve(jet95_ppalgo)->Clone();
  
  h[5] = (TH1D*)min->Loop(total_events, 0, false, false)->Clone();
  h[6] = (TH1D*)jet->Loop(total_events, 0, false, true)->Clone();
  h[7] = (TH1D*)cen->Loop(total_events, 0, false, true)->Clone();

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

  h[5]->SetLineColor(kBlack);
  h[5]->SetLineStyle(3);
  h[5]->Draw("L,same");

  h[6]->SetLineColor(kBlue);
  h[6]->SetLineStyle(3);
  h[6]->Draw("L,same");

  h[7]->SetLineColor(kRed);
  h[7]->SetLineStyle(3);
  h[7]->Draw("L,same");

  leg = new TLegend(0.65,0.6,0.95,0.8);
  //leg = new TLegend(0.4,0.3,0.6,0.5);

  leg->SetFillColor(0);

  leg->AddEntry(h[0],"HI bkg subtracted Minbias","l");
  leg->AddEntry(h[1],"HI bkg subtracted Jet95","l");
  leg->AddEntry(h[2],"HI bkg subtracted Central","l");
  leg->AddEntry(h[3],"UCT2015 Minbias","l");
  leg->AddEntry(h[4],"UCT2015 Jet95","l");
  leg->AddEntry(h[5],"HI no subtraction Minbias","l");
  leg->AddEntry(h[6],"HI no subtraction Jet95","l");
  leg->AddEntry(h[7],"HI no subtraction Central","l");

  leg->Draw();
 
  plot->Update();

  // plot->SaveAs("rate_comp_uct2015_stage2.eps");
  // plot->SaveAs("rate_comp_uct2015_stage2.png");
  // plot->SaveAs("rate_comp_uct2015_stage2.C");
  // plot->SetLogy();

  // plot->Update();

  // plot->SaveAs("rate_comp_uct2015_stage2_log.eps");
  // plot->SaveAs("rate_comp_uct2015_stage2_log.png");
}  

