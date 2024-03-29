#define TriggerPrimitivesTree_jetrate_cxx
#include "TriggerPrimitivesTree_jetrate.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TString.h>
#include <iostream>

//#include "FindRegionJet.C"

TH1D* TriggerPrimitivesTree_jetrate::Loop(int total_events, 
				       bool cut_noise_events)
{
  const int NBINS = 300;
  const int MAX_EN = 600;

  if (fChain == 0) return(0);
  
  Long64_t nentries = fChain->GetEntriesFast();
  
  TH1D *max_jet_energy;
  TH1D *efficiency_curve;
  //TH2I *max_jet_location;

  max_jet_energy = new TH1D("max_jet_energy",
			    "Maximum jet energy for each event",
			    NBINS,0,MAX_EN);
  
  // max_jet_location = new TH2I("max_jet_location","Location of max jet for each event",
  // 			      22,0,22,18,0,18);
  

  int evts = 0;
  bool break_early = total_events != -1;
  
  for (Long64_t jentry=0; jentry<nentries;jentry++) {
    Long64_t ientry = LoadTree(jentry);

    if (ientry < 0) break;
    
    fhlt->GetEntry(jentry);
    fhiinfo->GetEntry(jentry);

    if(cut_noise_events)
    if( !(
	  !(fhlt->L1Tech_BSC_halo_beam2_inner_v0 ||
	    fhlt->L1Tech_BSC_halo_beam2_outer_v0 ||
	    fhlt->L1Tech_BSC_halo_beam1_inner_v0 ||
	    fhlt->L1Tech_BSC_halo_beam1_outer_v0 )
	  && fhiinfo->hiNtracks>0
	  && fhiinfo->hiHFplus>3
	  && fhiinfo->hiHFminus>3
	  )
      )
      continue;

    evts++;
    if(break_early && (evts > total_events)) break;

    fChain->GetEntry(jentry);
    fjet->GetEntry(jentry);
    float_t realJetPt;
    if (fjet->nref == 0) realJetPt = 0;
    else realJetPt = fjet->jtpt[0];

    
    max_jet_energy->Fill(realJetPt);
    //max_jet_location->Fill(head[0].eta, head[0].phi);
    //max_jet_location->Fill(head[0].eta, head[0].phi, head[0].et);

  }
  
  efficiency_curve = new TH1D("efficiency_curve","Fraction of passing events versus threshold",
			      NBINS,0,MAX_EN);
  double total_integral = max_jet_energy->Integral();

  for(int i = 0; i < NBINS; i++)
  {
    double j = (double)i*(double)MAX_EN/(double)NBINS;
    double integral = max_jet_energy->Integral(i, NBINS);
    efficiency_curve->Fill(j, (double)integral/total_integral);      
  }

  //TCanvas *c1 = new TCanvas();
  max_jet_energy->SetTitle("max_jet_energy");
  max_jet_energy->SetXTitle("Jet pT");
  max_jet_energy->SetYTitle("Counts");

  // max_jet_location->SetXTitle("Eta index");
  // max_jet_location->SetYTitle("Phi index");
  // max_jet_location->Draw("Lego2");

  //TCanvas *c2 = new TCanvas();
  efficiency_curve->SetTitle("Accept Rate Curve");
  efficiency_curve->SetXTitle("icPu5Calo Jet Threshold (GeV)");
  efficiency_curve->SetYTitle("Fraction of passing events");

  return(efficiency_curve);
}
