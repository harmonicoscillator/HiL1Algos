#include "TChain.h"
#include "TTree.h"
#include "TDirectory.h"
#include "TFile.h"
#include "TH1D.h"
#include "TCanvas.h"
#include "TString.h"

TH1D* JetTurnOnCurve(const char *directory = "")
{
  //TFile *file0 = new TFile("/mnt/hadoop/cms/store/user/icali/HIMinBiasUPC/HIMinBiasUPC_Skim_HLT_HIMinBiasHfOrBSC_L1UEmulatorv1/98febc859c9b3771d1d4e30c0ee9c954/L1Tree_100_1_IEV.root");

  TChain *l1chain = new TChain("L1ExtraUpgradeTree","l1chain");

  //TTree *l1tree = (TTree*)((TDirectory*)file0->Get("l1ExtraUpgradeTreeProducer"))->Get("L1ExtraUpgradeTree");
  if(directory == "")
    directory = "/mnt/hadoop/cms/store/user/icali/HIMinBiasUPC/HIMinBiasUPC_Skim_HLT_HIMinBiasHfOrBSC_L1UEmulatorv1/98febc859c9b3771d1d4e30c0ee9c954/";

  TString name;
  name += directory;
  //name += "*.root/l1ExtraUpgradeTreeProducer/L1ExtraUpgradeTree";
  name+= "*.root/l1ExtraTreeProducer/L1ExtraTree";
  
  l1chain->Add(name);
  //l1chain->Add("/mnt/hadoop/cms/store/user/icali/HIMinBiasUPC/HIMinBiasUPC_Skim_HLT_HIMinBiasHfOrBSC_L1UEmulatorv1/98febc859c9b3771d1d4e30c0ee9c954/*.root/l1NtupleProducer/L1Tree");

  //TChain *jetchain = new TChain("t","jetchain");
  //jetchain->Add("/mnt/hadoop/cms/store/user/luck/HiMinbias_L1_tracks_forest/HiMinbias_L1_track_forest_all.root/icPu5JetAnalyzer/t");

  //l1chain->AddFriend(jetchain);

  const int NBINS = 300;
  const int MAX_EN = 600;
  TH1D *max_jet_energy = new TH1D("max_jet_energy",
			    "Maximum jet energy for each event",
			    NBINS,0,MAX_EN);
  
  //l1chain->Project("max_jet_energy","jetEt[0]");
  l1chain->Project("max_jet_energy","L1Extra.cenJetEt[0]");
  //l1chain->Project("max_jet_energy","GCT.CJetRnk","GCT.CJetRnk>0");

  // TCanvas *c1 = new TCanvas();
  // max_jet_energy->SetXTitle("L1ExtraUpgrade jetEt[0] GeV");
  // max_jet_energy->SetYTitle("Counts");
  // max_jet_energy->Draw();
  
  TH1D *efficiency_curve = new TH1D("efficiency_curve",
			      "Fraction of passing events versus threshold",
			      NBINS,0,MAX_EN);
  double total_integral = max_jet_energy->Integral();

  for(int i = 0; i < NBINS; i++)
  {
    double j = (double)i*(double)MAX_EN/(double)NBINS;
    double integral = max_jet_energy->Integral(i, NBINS);
    efficiency_curve->Fill(j, (double)integral/total_integral);      
  }

  // TCanvas *c2 = new TCanvas();
  // efficiency_curve->SetXTitle("L1ExtraUpgrade jetEt[0] GeV");
  // efficiency_curve->SetYTitle("Accept Fraction");
  // efficiency_curve->Draw();

  return(efficiency_curve);
}
