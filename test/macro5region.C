#include "TH1.h"
#include "TriggerPrimitivesTree_jetcurve.h"
#include "TFile.h"
#include "TCanvas.h"
#include "TStyle.h"
#include "TLegend.h"
#include "TLatex.h"
#include "TString.h"
#include <TGraphAsymmErrors.h>

#include "TriggerPrimitivesTree_jetcurve.C"

void macro5region(int total_events = -1)
{
  TriggerPrimitivesTree_jetcurve *min =
    new TriggerPrimitivesTree_jetcurve(new TFile("/mnt/hadoop/cms/store/user/luck/L1_fullmerge/HIMinbias_and_Jet95_L1info_forest.root"));
    //new TriggerPrimitivesTree_jetcurve(new TFile("minbias_v3.root"));

  bool phi_subtract[] = {false, false, false, false,
			 true,  true,  true,  true};

  //const int total_events = -1;

  TGraphAsymmErrors* h_min[8]; 
  TCanvas *plot[4];
  TLegend *leg[4];
  //TString title[8];
  int thresholds[] = {60, 60, 100, 100, 60, 60 ,100, 100};

  int minbin[] = {0, 20, 0, 20, 0, 20,0, 20,};
  int maxbin[] = {11, 40, 11, 40, 11, 40,11, 40,};
  
  int threshold;
  for(int i = 0; i < 8; i++)
  {
    h_min[i] = (TGraphAsymmErrors*)min->Loop(total_events, thresholds[i],
				phi_subtract[i], minbin[i], maxbin[i])->Clone();
    // if(phi_subtract[i])
    //   title[i] = "Stage-1 system. Threshold " + thresholds[i] + " GeV";
    // else
    //   title[i] = "Current system. Threshold " + thresholds[i] + " GeV";
    //h_min[i]->SetTitle(title[i]);
  }

  TH1D *hEmpty = new TH1D("hEmpty","",40,0,200);
  hEmpty->SetYTitle("Fraction Accepted");
  hEmpty->SetXTitle("HLT Jet Pt (GeV)");
  hEmpty->SetMinimum(0);
  hEmpty->SetMaximum(1.1);

  plot[0] = new TCanvas("c1");
  plot[0]->cd();
  hEmpty->SetTitle("Current system.");
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
  plot[0]->SaveAs("jetto_current.C");
  plot[0]->SaveAs("jetto_current.pdf");


  // plot[1] = new TCanvas("c2");
  // plot[1]->cd();
  // hEmpty->SetTitle("Current system. Threshold 100 GeV");
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
  // plot[1]->SaveAs("jetto_current_thresh_100.C");
  // plot[1]->SaveAs("jetto_current_thresh_100.gif");
  
  plot[2] = new TCanvas("c3");
  plot[2]->cd();
  hEmpty->SetTitle("Stage-1 system.");
  hEmpty->DrawCopy();
  h_min[4]->Draw("p E same");
  h_min[5]->SetMarkerStyle(25);
  h_min[5]->Draw("p E same");
  h_min[6]->SetMarkerColor(kRed);
  h_min[6]->SetLineColor(kRed);
  h_min[6]->Draw("p E same");
  h_min[7]->SetMarkerColor(kRed);
  h_min[7]->SetLineColor(kRed);  
  h_min[7]->SetMarkerStyle(25);
  h_min[7]->Draw("p E same");
 
  leg[2] = new TLegend(0.6,0.2,0.9,0.4);
  leg[2]->SetFillColor(0);
  leg[2]->AddEntry(h_min[4], "60GeV Thresh. 0 to 30\% Centrality","p");
  leg[2]->AddEntry(h_min[5], "60GeV Thresh. 50 to 100\% Centrality","p");
  leg[2]->AddEntry(h_min[6], "100GeV Thresh. 0 to 30\% Centrality","p");
  leg[2]->AddEntry(h_min[7], "100GeV Thresh. 50 to 100\% Centrality","p");
  leg[2]->Draw();
  plot[2]->Update();
  plot[2]->SaveAs("jetto_2015.C");
  plot[2]->SaveAs("jetto_2015.pdf");
  
  // plot[3] = new TCanvas("c4");
  // plot[3]->cd();
  // hEmpty->SetTitle("Stage-1 system. Threshold 100 GeV");
  // hEmpty->DrawCopy();
  // h_min[6]->Draw("p E same");
  // h_min[7]->SetMarkerStyle(25);
  // h_min[7]->Draw("p E same");
  // leg[3] = new TLegend(0.6,0.2,0.9,0.4);
  // leg[3]->SetFillColor(0);
  // leg[3]->AddEntry(h_min[6], "Centrality 0 to 30\%","p");
  // leg[3]->AddEntry(h_min[7], "Centrality 50 to 100\%","p");
  // leg[3]->Draw();
  // plot[3]->Update(); 
  // plot[3]->SaveAs("jetto_2015_thresh_100.C");
  // plot[3]->SaveAs("jetto_2015_thresh_100.gif");
}
