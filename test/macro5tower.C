#include "TH1.h"
#include "TriggerPrimitivesTree_jetcurvetower.h"
#include "TFile.h"
#include "TCanvas.h"
#include "TStyle.h"
#include "TLegend.h"
#include "TLatex.h"
#include "TGraphAsymmErrors.h"

#include "TriggerPrimitivesTree_jetcurvetower.C"

void macro5tower(int total_events = -1)
{
  TriggerPrimitivesTree_jetcurvetower *min =
    new TriggerPrimitivesTree_jetcurvetower(new TFile("/mnt/hadoop/cms/store/user/luck/L1_fullmerge/HIMinbias_and_Jet95_L1info_forest.root"));
    //new TriggerPrimitivesTree_jetcurvetower(new TFile("minbias_v3.root"));
    //new TriggerPrimitivesTree_jetcurvetower(new TFile("/export/d00/scratch/dgulhan/mergedforest/minbiasL1/HiForest_minbias_newv4.root"));
  //const int total_events = -1;

  TGraphAsymmErrors* h_min[4]; 
  TCanvas *plot[2];
  TLegend *leg[2];
  //stringstream title[4];
  int thresholds[] = {60, 60, 100, 100};

  int minbin[] = {0, 20, 0, 20};
  int maxbin[] = {11, 40, 11, 40};
  
  int threshold;
  for(int i = 0; i < 4; i++)
  {
    h_min[i] = (TGraphAsymmErrors*)min->Loop(total_events, thresholds[i],
				true, minbin[i], maxbin[i])->Clone();
    // title[i] << "Stage-2 system. Threshold " << thresholds[i] << " GeV";
    // h_min[i]->SetTitle(title[i].str().c_str());
  }

  TH1D *hEmpty = new TH1D("hEmpty","",40,0,200);
  hEmpty->SetYTitle("Fraction Accepted");
  hEmpty->SetXTitle("HLT Jet Pt (GeV)");
  hEmpty->SetMinimum(0);
  hEmpty->SetMaximum(1.1);


  plot[0] = new TCanvas();
  hEmpty->SetTitle("Stage-2 system.");
  hEmpty->DrawCopy();
  h_min[0]->Draw("p E same");
  h_min[1]->SetMarkerStyle(25);
  h_min[1]->Draw("p E same");
  h_min[2]->SetMarkerColor(kRed);
  h_min[2]->SetLineColor(kRed);
  h_min[2]->Draw("p E same");
  h_min[3]->SetMarkerColor(kRed);
  h_min[3]->SetLineColor(kRed);  
  h_min[3]->SetMarkerStyle(25);
  h_min[3]->Draw("p E same");
  leg[0] = new TLegend(0.6,0.2,0.95,0.45);
  leg[0]->SetFillColor(0);
  leg[0]->AddEntry(h_min[0], "60GeV Thresh. 0 to 30\% Centrality","p");
  leg[0]->AddEntry(h_min[1], "60GeV Thresh. 50 to 100\% Centrality","p");
  leg[0]->AddEntry(h_min[2], "100GeV Thresh. 0 to 30\% Centrality","p");
  leg[0]->AddEntry(h_min[3], "100GeV Thresh. 50 to 100\% Centrality","p");
  leg[0]->Draw();
  plot[0]->Update();
  plot[0]->SaveAs("jetto_slhc.C");
  plot[0]->SaveAs("jetto_slhc.pdf");
  
  // plot[1] = new TCanvas();
  // hEmpty->SetTitle("Stage-2 system. Threshold 100 GeV");
  // hEmpty->DrawCopy();
  // h_min[2]->Draw("p E same");
  // h_min[3]->SetMarkerStyle(25);
  // h_min[3]->Draw("p E same");
  // leg[1] = new TLegend(0.6,0.2,0.9,0.4);
  // leg[1]->SetFillColor(0);
  // leg[1]->AddEntry(h_min[2], "Centrality 0 to 30\%","p");
  // leg[1]->AddEntry(h_min[3], "Centrality 50 to 100\%","p");
  // leg[1]->Draw();
  // plot[1]->Update();
  // plot[1]->SaveAs("jetto_slhc_thresh_100.C");
  // plot[1]->SaveAs("jetto_slhc_thresh_100.gif");
}
