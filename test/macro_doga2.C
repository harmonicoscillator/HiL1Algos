macro_doga2()
{
  TH1D* hmb=new TH1D();
  TFile *f1 = new TFile("/net/hisrv0001/home/dgulhan/L1Trigger/newEtHist_mb.root");
  hmb = (TH1D*)f1->Get("LargestEt");

  nbins_doga = hmb->GetNbinsX();
  max_en_doga = hmb->GetXaxis()->GetXmax();
  efficiency_curve = new TH1D("efficiency_curve","Fraction of passing events versus threshold",
			      nbins_doga,0,max_en_doga);
  double total_integral = hmb->Integral();
  for(int i = 0; i < nbins_doga; i++)
  {
    double j = (double)i*(double)max_en_doga/(double)nbins_doga;
    double integral = hmb->Integral(i, nbins_doga);
    efficiency_curve->Fill(j, (double)integral/total_integral);      
  }

  efficiency_curve->Draw("L,same");  
}
