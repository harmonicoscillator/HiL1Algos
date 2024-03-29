{
//=========Macro generated from canvas: c3/
//=========  (Fri Feb 15 23:04:54 2013) by ROOT version5.27/06b
   TCanvas *c3 = new TCanvas("c3", "",0,0,700,500);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   c3->Range(-43.58975,-0.22,212.8205,1.246667);
   c3->SetFillColor(0);
   c3->SetBorderMode(0);
   c3->SetBorderSize(0);
   c3->SetTickx(1);
   c3->SetTicky(1);
   c3->SetLeftMargin(0.17);
   c3->SetRightMargin(0.05);
   c3->SetBottomMargin(0.15);
   c3->SetFrameLineColor(0);
   c3->SetFrameBorderMode(0);
   c3->SetFrameLineColor(0);
   c3->SetFrameBorderMode(0);
   
   TH1D *hEmpty__2 = new TH1D("hEmpty__2","Stage-1 system.",40,0,200);
   hEmpty__2->SetMinimum(0);
   hEmpty__2->SetMaximum(1.1);
   hEmpty__2->SetDirectory(0);
   hEmpty__2->SetFillColor(1);
   hEmpty__2->SetFillStyle(0);
   hEmpty__2->SetLineStyle(0);
   hEmpty__2->SetMarkerStyle(20);
   hEmpty__2->GetXaxis()->SetTitle("HLT Jet Pt (GeV)");
   hEmpty__2->GetXaxis()->SetLabelFont(42);
   hEmpty__2->GetXaxis()->SetLabelOffset(0.01);
   hEmpty__2->GetXaxis()->SetLabelSize(0.045);
   hEmpty__2->GetXaxis()->SetTitleSize(0.055);
   hEmpty__2->GetXaxis()->SetTitleFont(42);
   hEmpty__2->GetYaxis()->SetTitle("Fraction Accepted");
   hEmpty__2->GetYaxis()->SetLabelFont(42);
   hEmpty__2->GetYaxis()->SetLabelOffset(0.01);
   hEmpty__2->GetYaxis()->SetLabelSize(0.045);
   hEmpty__2->GetYaxis()->SetTitleSize(0.055);
   hEmpty__2->GetYaxis()->SetTitleFont(42);
   hEmpty__2->GetZaxis()->SetLabelFont(42);
   hEmpty__2->GetZaxis()->SetLabelSize(0.045);
   hEmpty__2->GetZaxis()->SetTitleFont(42);
   hEmpty__2->Draw("");
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(37);
   grae->SetName("h1");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   grae->SetPoint(0,17.5,0);
   grae->SetPointError(0,2.5,2.5,0,0.4369725);
   grae->SetPoint(1,22.5,0.0041841);
   grae->SetPointError(1,2.5,2.5,0.002371464,0.003857556);
   grae->SetPoint(2,27.5,0.01164483);
   grae->SetPointError(2,2.5,2.5,0.001143897,0.001223088);
   grae->SetPoint(3,32.5,0.04339172);
   grae->SetPointError(3,2.5,2.5,0.0009794311,0.0009937066);
   grae->SetPoint(4,37.5,0.1293546);
   grae->SetPointError(4,2.5,2.5,0.001162103,0.001168054);
   grae->SetPoint(5,42.5,0.2749562);
   grae->SetPointError(5,2.5,2.5,0.001415606,0.001418647);
   grae->SetPoint(6,47.5,0.4190424);
   grae->SetPointError(6,2.5,2.5,0.001723717,0.00172505);
   grae->SetPoint(7,52.5,0.542816);
   grae->SetPointError(7,2.5,2.5,0.00227839,0.002277198);
   grae->SetPoint(8,57.5,0.6625848);
   grae->SetPointError(8,2.5,2.5,0.003197047,0.003187169);
   grae->SetPoint(9,62.5,0.7665263);
   grae->SetPointError(9,2.5,2.5,0.004535166,0.004494687);
   grae->SetPoint(10,67.5,0.8683761);
   grae->SetPointError(10,2.5,2.5,0.005779403,0.005639332);
   grae->SetPoint(11,72.5,0.9508958);
   grae->SetPointError(11,2.5,2.5,0.005773207,0.005373523);
   grae->SetPoint(12,77.5,0.9709141);
   grae->SetPointError(12,2.5,2.5,0.006716974,0.005842491);
   grae->SetPoint(13,82.5,0.9928741);
   grae->SetPointError(13,2.5,2.5,0.005061619,0.003425823);
   grae->SetPoint(14,87.5,1);
   grae->SetPointError(14,2.5,2.5,0.00390004,0);
   grae->SetPoint(15,92.5,1);
   grae->SetPointError(15,2.5,2.5,0.00224572,0);
   grae->SetPoint(16,97.5,0.9980379);
   grae->SetPointError(16,2.5,2.5,0.001402673,0.0009457959);
   grae->SetPoint(17,102.5,0.9972125);
   grae->SetPointError(17,2.5,2.5,0.001670643,0.001190723);
   grae->SetPoint(18,107.5,1);
   grae->SetPointError(18,2.5,2.5,0.001019776,0);
   grae->SetPoint(19,112.5,1);
   grae->SetPointError(19,2.5,2.5,0.001388218,0);
   grae->SetPoint(20,117.5,0.9984639);
   grae->SetPointError(20,2.5,2.5,0.002298325,0.001123287);
   grae->SetPoint(21,122.5,0.9958159);
   grae->SetPointError(21,2.5,2.5,0.003857556,0.002371464);
   grae->SetPoint(22,127.5,0.9973404);
   grae->SetPointError(22,2.5,2.5,0.00396827,0.001943344);
   grae->SetPoint(23,132.5,0.9962264);
   grae->SetPointError(23,2.5,2.5,0.005615018,0.002755242);
   grae->SetPoint(24,137.5,0.9909091);
   grae->SetPointError(24,2.5,2.5,0.008317758,0.005138129);
   grae->SetPoint(25,142.5,1);
   grae->SetPointError(25,2.5,2.5,0.006190777,0);
   grae->SetPoint(26,147.5,1);
   grae->SetPointError(26,2.5,2.5,0.008057877,0);
   grae->SetPoint(27,152.5,1);
   grae->SetPointError(27,2.5,2.5,0.009296788,0);
   grae->SetPoint(28,157.5,0.9879518);
   grae->SetPointError(28,2.5,2.5,0.01756698,0.008746915);
   grae->SetPoint(29,162.5,1);
   grae->SetPointError(29,2.5,2.5,0.0165122,0);
   grae->SetPoint(30,167.5,1);
   grae->SetPointError(30,2.5,2.5,0.01896541,0);
   grae->SetPoint(31,172.5,1);
   grae->SetPointError(31,2.5,2.5,0.01865742,0);
   grae->SetPoint(32,177.5,1);
   grae->SetPointError(32,2.5,2.5,0.02698293,0);
   grae->SetPoint(33,182.5,1);
   grae->SetPointError(33,2.5,2.5,0.0283128,0);
   grae->SetPoint(34,187.5,1);
   grae->SetPointError(34,2.5,2.5,0.02902813,0);
   grae->SetPoint(35,192.5,1);
   grae->SetPointError(35,2.5,2.5,0.04322466,0);
   grae->SetPoint(36,197.5,1);
   grae->SetPointError(36,2.5,2.5,0.0586742,0);
   
   TH1F *Graph5 = new TH1F("Graph5","",100,0,218.5);
   Graph5->SetMinimum(0);
   Graph5->SetMaximum(1.1);
   Graph5->SetDirectory(0);
   Graph5->SetStats(0);
   Graph5->SetFillColor(1);
   Graph5->SetFillStyle(0);
   Graph5->SetLineStyle(0);
   Graph5->SetMarkerStyle(20);
   Graph5->GetXaxis()->SetLabelFont(42);
   Graph5->GetXaxis()->SetLabelOffset(0.01);
   Graph5->GetXaxis()->SetLabelSize(0.045);
   Graph5->GetXaxis()->SetTitleSize(0.055);
   Graph5->GetXaxis()->SetTitleFont(42);
   Graph5->GetYaxis()->SetLabelFont(42);
   Graph5->GetYaxis()->SetLabelOffset(0.01);
   Graph5->GetYaxis()->SetLabelSize(0.045);
   Graph5->GetYaxis()->SetTitleSize(0.055);
   Graph5->GetYaxis()->SetTitleFont(42);
   Graph5->GetZaxis()->SetLabelFont(42);
   Graph5->GetZaxis()->SetLabelSize(0.045);
   Graph5->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph5);
   
   grae->Draw("p e ");
   
   grae = new TGraphAsymmErrors(40);
   grae->SetName("h2");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(25);
   grae->SetPoint(0,2.5,4.395282e-05);
   grae->SetPointError(0,2.5,2.5,2.120804e-05,3.149671e-05);
   grae->SetPoint(1,7.5,6.931688e-06);
   grae->SetPointError(1,2.5,2.5,5.074131e-06,1.041053e-05);
   grae->SetPoint(2,12.5,0.0001781578);
   grae->SetPointError(2,2.5,2.5,3.280861e-05,3.740836e-05);
   grae->SetPoint(3,17.5,0.0002914877);
   grae->SetPointError(3,2.5,2.5,4.730485e-05,5.305076e-05);
   grae->SetPoint(4,22.5,0.0004071772);
   grae->SetPointError(4,2.5,2.5,9.681189e-05,0.0001151042);
   grae->SetPoint(5,27.5,0.0004442223);
   grae->SetPointError(5,2.5,2.5,0.0001404375,0.000178188);
   grae->SetPoint(6,32.5,0.0001309243);
   grae->SetPointError(6,2.5,2.5,9.583165e-05,0.0001965711);
   grae->SetPoint(7,37.5,0);
   grae->SetPointError(7,2.5,2.5,0,0.0004830009);
   grae->SetPoint(8,42.5,0.002188184);
   grae->SetPointError(8,2.5,2.5,0.001241629,0.002023676);
   grae->SetPoint(9,47.5,0.002604167);
   grae->SetPointError(9,2.5,2.5,0.00190293,0.003886129);
   grae->SetPoint(10,52.5,0.02072539);
   grae->SetPointError(10,2.5,2.5,0.008775642,0.01218094);
   grae->SetPoint(11,57.5,0.05309735);
   grae->SetPointError(11,2.5,2.5,0.01859583,0.02390729);
   grae->SetPoint(12,62.5,0.2698413);
   grae->SetPointError(12,2.5,2.5,0.05281654,0.05757079);
   grae->SetPoint(13,67.5,0.5945946);
   grae->SetPointError(13,2.5,2.5,0.08032439,0.07706798);
   grae->SetPoint(14,72.5,0.7727273);
   grae->SetPointError(14,2.5,2.5,0.09403953,0.07856144);
   grae->SetPoint(15,77.5,1);
   grae->SetPointError(15,2.5,2.5,0.05582399,0);
   grae->SetPoint(16,82.5,1);
   grae->SetPointError(16,2.5,2.5,0.0586742,0);
   grae->SetPoint(17,87.5,1);
   grae->SetPointError(17,2.5,2.5,0.08458096,0);
   grae->SetPoint(18,92.5,1);
   grae->SetPointError(18,2.5,2.5,0.05582399,0);
   grae->SetPoint(19,97.5,1);
   grae->SetPointError(19,2.5,2.5,0.01995356,0);
   grae->SetPoint(20,102.5,1);
   grae->SetPointError(20,2.5,2.5,0.01582967,0);
   grae->SetPoint(21,107.5,1);
   grae->SetPointError(21,2.5,2.5,0.01995356,0);
   grae->SetPoint(22,112.5,1);
   grae->SetPointError(22,2.5,2.5,0.02144323,0);
   grae->SetPoint(23,117.5,1);
   grae->SetPointError(23,2.5,2.5,0.03229151,0);
   grae->SetPoint(24,122.5,1);
   grae->SetPointError(24,2.5,2.5,0.03421472,0);
   grae->SetPoint(25,127.5,1);
   grae->SetPointError(25,2.5,2.5,0.05088055,0);
   grae->SetPoint(26,132.5,1);
   grae->SetPointError(26,2.5,2.5,0.06183102,0);
   grae->SetPoint(27,137.5,1);
   grae->SetPointError(27,2.5,2.5,0.08458096,0);
   grae->SetPoint(28,142.5,1);
   grae->SetPointError(28,2.5,2.5,0.08458096,0);
   grae->SetPoint(29,147.5,1);
   grae->SetPointError(29,2.5,2.5,0.09129775,0);
   grae->SetPoint(30,152.5,1);
   grae->SetPointError(30,2.5,2.5,0.1085317,0);
   grae->SetPoint(31,157.5,1);
   grae->SetPointError(31,2.5,2.5,0.2052842,0);
   grae->SetPoint(32,162.5,1);
   grae->SetPointError(32,2.5,2.5,0.4369725,0);
   grae->SetPoint(33,167.5,1);
   grae->SetPointError(33,2.5,2.5,0.1742602,0);
   grae->SetPoint(34,172.5,1);
   grae->SetPointError(34,2.5,2.5,0.2052842,0);
   grae->SetPoint(35,177.5,1);
   grae->SetPointError(35,2.5,2.5,0.4369725,0);
   grae->SetPoint(36,182.5,1);
   grae->SetPointError(36,2.5,2.5,0.3181538,0);
   grae->SetPoint(37,187.5,1);
   grae->SetPointError(37,2.5,2.5,0.3181538,0);
   grae->SetPoint(38,192.5,1);
   grae->SetPointError(38,2.5,2.5,0.4369725,0);
   grae->SetPoint(39,197.5,1);
   grae->SetPointError(39,2.5,2.5,0.4369725,0);
   
   TH1F *Graph6 = new TH1F("Graph6","",100,0,220);
   Graph6->SetMinimum(0);
   Graph6->SetMaximum(1.1);
   Graph6->SetDirectory(0);
   Graph6->SetStats(0);
   Graph6->SetFillColor(1);
   Graph6->SetFillStyle(0);
   Graph6->SetLineStyle(0);
   Graph6->SetMarkerStyle(20);
   Graph6->GetXaxis()->SetLabelFont(42);
   Graph6->GetXaxis()->SetLabelOffset(0.01);
   Graph6->GetXaxis()->SetLabelSize(0.045);
   Graph6->GetXaxis()->SetTitleSize(0.055);
   Graph6->GetXaxis()->SetTitleFont(42);
   Graph6->GetYaxis()->SetLabelFont(42);
   Graph6->GetYaxis()->SetLabelOffset(0.01);
   Graph6->GetYaxis()->SetLabelSize(0.045);
   Graph6->GetYaxis()->SetTitleSize(0.055);
   Graph6->GetYaxis()->SetTitleFont(42);
   Graph6->GetZaxis()->SetLabelFont(42);
   Graph6->GetZaxis()->SetLabelSize(0.045);
   Graph6->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph6);
   
   grae->Draw("p e ");
   
   grae = new TGraphAsymmErrors(37);
   grae->SetName("h3");
   grae->SetTitle("");
   grae->SetFillColor(1);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetPoint(0,17.5,0);
   grae->SetPointError(0,2.5,2.5,0,0.4369725);
   grae->SetPoint(1,22.5,0.00209205);
   grae->SetPointError(1,2.5,2.5,0.001529249,0.003125856);
   grae->SetPoint(2,27.5,0.001091703);
   grae->SetPointError(2,2.5,2.5,0.0003273202,0.000409492);
   grae->SetPoint(3,32.5,0.001522106);
   grae->SetPointError(3,2.5,2.5,0.0001812785,0.0001968987);
   grae->SetPoint(4,37.5,0.002876953);
   grae->SetPointError(4,2.5,2.5,0.0001820329,0.0001900262);
   grae->SetPoint(5,42.5,0.006589935);
   grae->SetPointError(5,2.5,2.5,0.0002535306,0.0002601596);
   grae->SetPoint(6,47.5,0.01338213);
   grae->SetPointError(6,2.5,2.5,0.0003976531,0.0004055806);
   grae->SetPoint(7,52.5,0.01925205);
   grae->SetPointError(7,2.5,2.5,0.0006216591,0.0006350628);
   grae->SetPoint(8,57.5,0.02722265);
   grae->SetPointError(8,2.5,2.5,0.001084436,0.001113169);
   grae->SetPoint(9,62.5,0.03777449);
   grae->SetPointError(9,2.5,2.5,0.002000177,0.002070404);
   grae->SetPoint(10,67.5,0.05498575);
   grae->SetPointError(10,2.5,2.5,0.003766193,0.003935483);
   grae->SetPoint(11,72.5,0.1021898);
   grae->SetPointError(11,2.5,2.5,0.007630272,0.007982532);
   grae->SetPoint(12,77.5,0.1537396);
   grae->SetPointError(12,2.5,2.5,0.01310188,0.01374107);
   grae->SetPoint(13,82.5,0.304038);
   grae->SetPointError(13,2.5,2.5,0.02207505,0.02269398);
   grae->SetPoint(14,87.5,0.5426621);
   grae->SetPointError(14,2.5,2.5,0.02912043,0.02892723);
   grae->SetPoint(15,92.5,0.7431373);
   grae->SetPointError(15,2.5,2.5,0.01964339,0.01900892);
   grae->SetPoint(16,97.5,0.8482668);
   grae->SetPointError(16,2.5,2.5,0.009329246,0.009025417);
   grae->SetPoint(17,102.5,0.912892);
   grae->SetPointError(17,2.5,2.5,0.007640648,0.007256643);
   grae->SetPoint(18,107.5,0.9715556);
   grae->SetPointError(18,2.5,2.5,0.005251443,0.004690249);
   grae->SetPoint(19,112.5,0.9830508);
   grae->SetPointError(19,2.5,2.5,0.004916378,0.004129091);
   grae->SetPoint(20,117.5,0.9907834);
   grae->SetPointError(20,2.5,2.5,0.004324628,0.003295499);
   grae->SetPoint(21,122.5,0.9916318);
   grae->SetPointError(21,2.5,2.5,0.004985065,0.003564919);
   grae->SetPoint(22,127.5,0.9946809);
   grae->SetPointError(22,2.5,2.5,0.00489538,0.003012834);
   grae->SetPoint(23,132.5,0.9886792);
   grae->SetPointError(23,2.5,2.5,0.007999351,0.005430718);
   grae->SetPoint(24,137.5,0.9863636);
   grae->SetPointError(24,2.5,2.5,0.009607784,0.006533689);
   grae->SetPoint(25,142.5,0.9891304);
   grae->SetPointError(25,2.5,2.5,0.0099177,0.006137167);
   grae->SetPoint(26,147.5,0.9929078);
   grae->SetPointError(26,2.5,2.5,0.01046726,0.005166505);
   grae->SetPoint(27,152.5,0.9754098);
   grae->SetPointError(27,2.5,2.5,0.01708991,0.01171497);
   grae->SetPoint(28,157.5,0.9879518);
   grae->SetPointError(28,2.5,2.5,0.01756698,0.008746915);
   grae->SetPoint(29,162.5,1);
   grae->SetPointError(29,2.5,2.5,0.0165122,0);
   grae->SetPoint(30,167.5,1);
   grae->SetPointError(30,2.5,2.5,0.01896541,0);
   grae->SetPoint(31,172.5,0.9833333);
   grae->SetPointError(31,2.5,2.5,0.0240284,0.01206131);
   grae->SetPoint(32,177.5,0.9756098);
   grae->SetPointError(32,2.5,2.5,0.03450945,0.01755622);
   grae->SetPoint(33,182.5,1);
   grae->SetPointError(33,2.5,2.5,0.0283128,0);
   grae->SetPoint(34,187.5,1);
   grae->SetPointError(34,2.5,2.5,0.02902813,0);
   grae->SetPoint(35,192.5,1);
   grae->SetPointError(35,2.5,2.5,0.04322466,0);
   grae->SetPoint(36,197.5,0.9444444);
   grae->SetPointError(36,2.5,2.5,0.07294832,0.03912018);
   
   TH1F *Graph7 = new TH1F("Graph7","",100,0,218.5);
   Graph7->SetMinimum(0);
   Graph7->SetMaximum(1.1);
   Graph7->SetDirectory(0);
   Graph7->SetStats(0);
   Graph7->SetFillColor(1);
   Graph7->SetFillStyle(0);
   Graph7->SetLineStyle(0);
   Graph7->SetMarkerStyle(20);
   Graph7->GetXaxis()->SetLabelFont(42);
   Graph7->GetXaxis()->SetLabelOffset(0.01);
   Graph7->GetXaxis()->SetLabelSize(0.045);
   Graph7->GetXaxis()->SetTitleSize(0.055);
   Graph7->GetXaxis()->SetTitleFont(42);
   Graph7->GetYaxis()->SetLabelFont(42);
   Graph7->GetYaxis()->SetLabelOffset(0.01);
   Graph7->GetYaxis()->SetLabelSize(0.045);
   Graph7->GetYaxis()->SetTitleSize(0.055);
   Graph7->GetYaxis()->SetTitleFont(42);
   Graph7->GetZaxis()->SetLabelFont(42);
   Graph7->GetZaxis()->SetLabelSize(0.045);
   Graph7->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph7);
   
   grae->Draw("p e ");
   
   grae = new TGraphAsymmErrors(40);
   grae->SetName("h4");
   grae->SetTitle("");
   grae->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(25);
   grae->SetPoint(0,2.5,4.395282e-05);
   grae->SetPointError(0,2.5,2.5,2.120804e-05,3.149671e-05);
   grae->SetPoint(1,7.5,6.931688e-06);
   grae->SetPointError(1,2.5,2.5,5.074131e-06,1.041053e-05);
   grae->SetPoint(2,12.5,0.0001370445);
   grae->SetPointError(2,2.5,2.5,2.85284e-05,3.313638e-05);
   grae->SetPoint(3,17.5,0.000154317);
   grae->SetPointError(3,2.5,2.5,3.373341e-05,3.950384e-05);
   grae->SetPoint(4,22.5,0.0002714515);
   grae->SetPointError(4,2.5,2.5,7.764655e-05,9.603786e-05);
   grae->SetPoint(5,27.5,0.0001665834);
   grae->SetPointError(5,2.5,2.5,8.037444e-05,0.0001193559);
   grae->SetPoint(6,32.5,0);
   grae->SetPointError(6,2.5,2.5,0,0.0001503819);
   grae->SetPoint(7,37.5,0);
   grae->SetPointError(7,2.5,2.5,0,0.0004830009);
   grae->SetPoint(8,42.5,0);
   grae->SetPointError(8,2.5,2.5,0,0.00125479);
   grae->SetPoint(9,47.5,0);
   grae->SetPointError(9,2.5,2.5,0,0.002979587);
   grae->SetPoint(10,52.5,0);
   grae->SetPointError(10,2.5,2.5,0,0.005904425);
   grae->SetPoint(11,57.5,0);
   grae->SetPointError(11,2.5,2.5,0,0.01002705);
   grae->SetPoint(12,62.5,0);
   grae->SetPointError(12,2.5,2.5,0,0.01779068);
   grae->SetPoint(13,67.5,0);
   grae->SetPointError(13,2.5,2.5,0,0.02978054);
   grae->SetPoint(14,72.5,0);
   grae->SetPointError(14,2.5,2.5,0,0.04872316);
   grae->SetPoint(15,77.5,0);
   grae->SetPointError(15,2.5,2.5,0,0.05582399);
   grae->SetPoint(16,82.5,0);
   grae->SetPointError(16,2.5,2.5,0,0.0586742);
   grae->SetPoint(17,87.5,0.08333333);
   grae->SetPointError(17,2.5,2.5,0.05751889,0.1025138);
   grae->SetPoint(18,92.5,0.4210526);
   grae->SetPointError(18,2.5,2.5,0.1053052,0.1103742);
   grae->SetPoint(19,97.5,0.5535714);
   grae->SetPointError(19,2.5,2.5,0.06593909,0.06470163);
   grae->SetPoint(20,102.5,0.7605634);
   grae->SetPointError(20,2.5,2.5,0.05248992,0.0476961);
   grae->SetPoint(21,107.5,0.875);
   grae->SetPointError(21,2.5,2.5,0.04828773,0.03950205);
   grae->SetPoint(22,112.5,0.9423077);
   grae->SetPointError(22,2.5,2.5,0.03846014,0.02700804);
   grae->SetPoint(23,117.5,1);
   grae->SetPointError(23,2.5,2.5,0.03229151,0);
   grae->SetPoint(24,122.5,1);
   grae->SetPointError(24,2.5,2.5,0.03421472,0);
   grae->SetPoint(25,127.5,1);
   grae->SetPointError(25,2.5,2.5,0.05088055,0);
   grae->SetPoint(26,132.5,1);
   grae->SetPointError(26,2.5,2.5,0.06183102,0);
   grae->SetPoint(27,137.5,1);
   grae->SetPointError(27,2.5,2.5,0.08458096,0);
   grae->SetPoint(28,142.5,1);
   grae->SetPointError(28,2.5,2.5,0.08458096,0);
   grae->SetPoint(29,147.5,1);
   grae->SetPointError(29,2.5,2.5,0.09129775,0);
   grae->SetPoint(30,152.5,1);
   grae->SetPointError(30,2.5,2.5,0.1085317,0);
   grae->SetPoint(31,157.5,1);
   grae->SetPointError(31,2.5,2.5,0.2052842,0);
   grae->SetPoint(32,162.5,1);
   grae->SetPointError(32,2.5,2.5,0.4369725,0);
   grae->SetPoint(33,167.5,1);
   grae->SetPointError(33,2.5,2.5,0.1742602,0);
   grae->SetPoint(34,172.5,1);
   grae->SetPointError(34,2.5,2.5,0.2052842,0);
   grae->SetPoint(35,177.5,1);
   grae->SetPointError(35,2.5,2.5,0.4369725,0);
   grae->SetPoint(36,182.5,1);
   grae->SetPointError(36,2.5,2.5,0.3181538,0);
   grae->SetPoint(37,187.5,1);
   grae->SetPointError(37,2.5,2.5,0.3181538,0);
   grae->SetPoint(38,192.5,1);
   grae->SetPointError(38,2.5,2.5,0.4369725,0);
   grae->SetPoint(39,197.5,1);
   grae->SetPointError(39,2.5,2.5,0.4369725,0);
   
   TH1F *Graph8 = new TH1F("Graph8","",100,0,220);
   Graph8->SetMinimum(0);
   Graph8->SetMaximum(1.1);
   Graph8->SetDirectory(0);
   Graph8->SetStats(0);
   Graph8->SetFillColor(1);
   Graph8->SetFillStyle(0);
   Graph8->SetLineStyle(0);
   Graph8->SetMarkerStyle(20);
   Graph8->GetXaxis()->SetLabelFont(42);
   Graph8->GetXaxis()->SetLabelOffset(0.01);
   Graph8->GetXaxis()->SetLabelSize(0.045);
   Graph8->GetXaxis()->SetTitleSize(0.055);
   Graph8->GetXaxis()->SetTitleFont(42);
   Graph8->GetYaxis()->SetLabelFont(42);
   Graph8->GetYaxis()->SetLabelOffset(0.01);
   Graph8->GetYaxis()->SetLabelSize(0.045);
   Graph8->GetYaxis()->SetTitleSize(0.055);
   Graph8->GetYaxis()->SetTitleFont(42);
   Graph8->GetZaxis()->SetLabelFont(42);
   Graph8->GetZaxis()->SetLabelSize(0.045);
   Graph8->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph8);
   
   grae->Draw("p e ");
   
   TLegend *leg = new TLegend(0.6,0.2,0.95,0.45,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("h1","60GeV Thresh. 0 to 30% Centrality","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("h2","60GeV Thresh. 50 to 100% Centrality","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("h3","100GeV Thresh. 0 to 30% Centrality","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("h4","100GeV Thresh. 50 to 100% Centrality","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   // TPaveText *pt = new TPaveText(0.01,0.9390678,0.2685057,0.995,"blNDC");
   // pt->SetName("title");
   // pt->SetBorderSize(0);
   // TText *text = pt->AddText("Stage-1 system.");
   // pt->Draw();
   // c3->Modified();
   // c3->cd();
   // c3->SetSelected(c3);
}
