{
//=========Macro generated from canvas: c1/c1
//=========  (Sat Feb 16 03:23:52 2013) by ROOT version5.27/06b
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,700,500);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   c1->Range(-43.58975,-0.22,212.8205,1.246667);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(0);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.17);
   c1->SetRightMargin(0.05);
   c1->SetBottomMargin(0.15);
   c1->SetFrameLineColor(0);
   c1->SetFrameBorderMode(0);
   c1->SetFrameLineColor(0);
   c1->SetFrameBorderMode(0);
   
   TH1D *hEmpty__1 = new TH1D("hEmpty__1","Stage-2 system.",40,0,200);
   hEmpty__1->SetMinimum(0);
   hEmpty__1->SetMaximum(1.1);
   hEmpty__1->SetDirectory(0);
   hEmpty__1->SetFillColor(1);
   hEmpty__1->SetFillStyle(0);
   hEmpty__1->SetLineStyle(0);
   hEmpty__1->SetMarkerStyle(20);
   hEmpty__1->GetXaxis()->SetTitle("HLT Jet Pt (GeV)");
   hEmpty__1->GetXaxis()->SetLabelFont(42);
   hEmpty__1->GetXaxis()->SetLabelOffset(0.01);
   hEmpty__1->GetXaxis()->SetLabelSize(0.045);
   hEmpty__1->GetXaxis()->SetTitleSize(0.055);
   hEmpty__1->GetXaxis()->SetTitleFont(42);
   hEmpty__1->GetYaxis()->SetTitle("Fraction Accepted");
   hEmpty__1->GetYaxis()->SetLabelFont(42);
   hEmpty__1->GetYaxis()->SetLabelOffset(0.01);
   hEmpty__1->GetYaxis()->SetLabelSize(0.045);
   hEmpty__1->GetYaxis()->SetTitleSize(0.055);
   hEmpty__1->GetYaxis()->SetTitleFont(42);
   hEmpty__1->GetZaxis()->SetLabelFont(42);
   hEmpty__1->GetZaxis()->SetLabelSize(0.045);
   hEmpty__1->GetZaxis()->SetTitleFont(42);
   hEmpty__1->Draw("");
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(37);
   grae->SetName("h1");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   grae->SetPoint(0,17.5,0);
   grae->SetPointError(0,2.5,2.5,0,0.4369725);
   grae->SetPoint(1,22.5,0.00209205);
   grae->SetPointError(1,2.5,2.5,0.001529249,0.003125856);
   grae->SetPoint(2,27.5,0.003275109);
   grae->SetPointError(2,2.5,2.5,0.0005917216,0.0006726038);
   grae->SetPoint(3,32.5,0.00360622);
   grae->SetPointError(3,2.5,2.5,0.0002826931,0.0002982263);
   grae->SetPoint(4,37.5,0.01231432);
   grae->SetPointError(4,2.5,2.5,0.0003789958,0.0003868317);
   grae->SetPoint(5,42.5,0.04392619);
   grae->SetPointError(5,2.5,2.5,0.0006473829,0.0006535093);
   grae->SetPoint(6,47.5,0.09822507);
   grae->SetPointError(6,2.5,2.5,0.001036881,0.001043425);
   grae->SetPoint(7,52.5,0.1843144);
   grae->SetPointError(7,2.5,2.5,0.001768512,0.001777305);
   grae->SetPoint(8,57.5,0.3154732);
   grae->SetPointError(8,2.5,2.5,0.003131663,0.003142869);
   grae->SetPoint(9,62.5,0.4898168);
   grae->SetPointError(9,2.5,2.5,0.005334293,0.005335829);
   grae->SetPoint(10,67.5,0.7065527);
   grae->SetPointError(10,2.5,2.5,0.007727912,0.007649385);
   grae->SetPoint(11,72.5,0.8467153);
   grae->SetPointError(11,2.5,2.5,0.00943607,0.009129173);
   grae->SetPoint(12,77.5,0.9265928);
   grae->SetPointError(12,2.5,2.5,0.01010923,0.009320566);
   grae->SetPoint(13,82.5,0.976247);
   grae->SetPointError(13,2.5,2.5,0.008248559,0.006722937);
   grae->SetPoint(14,87.5,0.9863481);
   grae->SetPointError(14,2.5,2.5,0.008085911,0.005800739);
   grae->SetPoint(15,92.5,0.9980392);
   grae->SetPointError(15,2.5,2.5,0.002930672,0.001433426);
   grae->SetPoint(16,97.5,0.9954218);
   grae->SetPointError(16,2.5,2.5,0.00197448,0.001532903);
   grae->SetPoint(17,102.5,0.9958188);
   grae->SetPointError(17,2.5,2.5,0.001971079,0.001498525);
   grae->SetPoint(18,107.5,0.9991111);
   grae->SetPointError(18,2.5,2.5,0.001332091,0.0006502961);
   grae->SetPoint(19,112.5,0.9975787);
   grae->SetPointError(19,2.5,2.5,0.002238463,0.001373726);
   grae->SetPoint(20,117.5,0.9969278);
   grae->SetPointError(20,2.5,2.5,0.002837329,0.001742362);
   grae->SetPoint(21,122.5,0.9958159);
   grae->SetPointError(21,2.5,2.5,0.003857556,0.002371464);
   grae->SetPoint(22,127.5,0.9946809);
   grae->SetPointError(22,2.5,2.5,0.00489538,0.003012834);
   grae->SetPoint(23,132.5,0.9962264);
   grae->SetPointError(23,2.5,2.5,0.005615018,0.002755242);
   grae->SetPoint(24,137.5,0.9909091);
   grae->SetPointError(24,2.5,2.5,0.008317758,0.005138129);
   grae->SetPoint(25,142.5,1);
   grae->SetPointError(25,2.5,2.5,0.006190777,0);
   grae->SetPoint(26,147.5,0.9929078);
   grae->SetPointError(26,2.5,2.5,0.01046726,0.005166505);
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
   grae->SetPoint(32,177.5,0.9756098);
   grae->SetPointError(32,2.5,2.5,0.03450945,0.01755622);
   grae->SetPoint(33,182.5,1);
   grae->SetPointError(33,2.5,2.5,0.0283128,0);
   grae->SetPoint(34,187.5,1);
   grae->SetPointError(34,2.5,2.5,0.02902813,0);
   grae->SetPoint(35,192.5,1);
   grae->SetPointError(35,2.5,2.5,0.04322466,0);
   grae->SetPoint(36,197.5,1);
   grae->SetPointError(36,2.5,2.5,0.0586742,0);
   
   TH1F *Graph1 = new TH1F("Graph1","",100,0,218.5);
   Graph1->SetMinimum(0);
   Graph1->SetMaximum(1.1);
   Graph1->SetDirectory(0);
   Graph1->SetStats(0);
   Graph1->SetFillColor(1);
   Graph1->SetFillStyle(0);
   Graph1->SetLineStyle(0);
   Graph1->SetMarkerStyle(20);
   Graph1->GetXaxis()->SetLabelFont(42);
   Graph1->GetXaxis()->SetLabelOffset(0.01);
   Graph1->GetXaxis()->SetLabelSize(0.045);
   Graph1->GetXaxis()->SetTitleSize(0.055);
   Graph1->GetXaxis()->SetTitleFont(42);
   Graph1->GetYaxis()->SetLabelFont(42);
   Graph1->GetYaxis()->SetLabelOffset(0.01);
   Graph1->GetYaxis()->SetLabelSize(0.045);
   Graph1->GetYaxis()->SetTitleSize(0.055);
   Graph1->GetYaxis()->SetTitleFont(42);
   Graph1->GetZaxis()->SetLabelFont(42);
   Graph1->GetZaxis()->SetLabelSize(0.045);
   Graph1->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph1);
   
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
   grae->SetPoint(2,12.5,0.0001850101);
   grae->SetPointError(2,2.5,2.5,3.347211e-05,3.807086e-05);
   grae->SetPoint(3,17.5,0.0002829145);
   grae->SetPointError(3,2.5,2.5,4.656632e-05,5.231268e-05);
   grae->SetPoint(4,22.5,0.000380032);
   grae->SetPointError(4,2.5,2.5,9.326755e-05,0.0001115743);
   grae->SetPoint(5,27.5,0.0004442223);
   grae->SetPointError(5,2.5,2.5,0.0001404375,0.000178188);
   grae->SetPoint(6,32.5,0.0002618487);
   grae->SetPointError(6,2.5,2.5,0.0001487421,0.0002428892);
   grae->SetPoint(7,37.5,0);
   grae->SetPointError(7,2.5,2.5,0,0.0004830009);
   grae->SetPoint(8,42.5,0);
   grae->SetPointError(8,2.5,2.5,0,0.00125479);
   grae->SetPoint(9,47.5,0.002604167);
   grae->SetPointError(9,2.5,2.5,0.00190293,0.003886129);
   grae->SetPoint(10,52.5,0.005181347);
   grae->SetPointError(10,2.5,2.5,0.003779452,0.00768307);
   grae->SetPoint(11,57.5,0.09734513);
   grae->SetPointError(11,2.5,2.5,0.0254953,0.03022561);
   grae->SetPoint(12,62.5,0.4126984);
   grae->SetPointError(12,2.5,2.5,0.06021571,0.06201481);
   grae->SetPoint(13,67.5,0.6216216);
   grae->SetPointError(13,2.5,2.5,0.0798546,0.07566595);
   grae->SetPoint(14,72.5,0.8181818);
   grae->SetPointError(14,2.5,2.5,0.08892864,0.07073939);
   grae->SetPoint(15,77.5,0.9473684);
   grae->SetPointError(15,2.5,2.5,0.06958997,0.03713847);
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
   
   TH1F *Graph2 = new TH1F("Graph2","",100,0,220);
   Graph2->SetMinimum(0);
   Graph2->SetMaximum(1.1);
   Graph2->SetDirectory(0);
   Graph2->SetStats(0);
   Graph2->SetFillColor(1);
   Graph2->SetFillStyle(0);
   Graph2->SetLineStyle(0);
   Graph2->SetMarkerStyle(20);
   Graph2->GetXaxis()->SetLabelFont(42);
   Graph2->GetXaxis()->SetLabelOffset(0.01);
   Graph2->GetXaxis()->SetLabelSize(0.045);
   Graph2->GetXaxis()->SetTitleSize(0.055);
   Graph2->GetXaxis()->SetTitleFont(42);
   Graph2->GetYaxis()->SetLabelFont(42);
   Graph2->GetYaxis()->SetLabelOffset(0.01);
   Graph2->GetYaxis()->SetLabelSize(0.045);
   Graph2->GetYaxis()->SetTitleSize(0.055);
   Graph2->GetYaxis()->SetTitleFont(42);
   Graph2->GetZaxis()->SetLabelFont(42);
   Graph2->GetZaxis()->SetLabelSize(0.045);
   Graph2->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph2);
   
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
   grae->SetPoint(2,27.5,0.001334304);
   grae->SetPointError(2,2.5,2.5,0.0003653841,0.0004472617);
   grae->SetPoint(3,32.5,0.001498689);
   grae->SetPointError(3,2.5,2.5,0.0001798248,0.0001954464);
   grae->SetPoint(4,37.5,0.001938031);
   grae->SetPointError(4,2.5,2.5,0.0001487847,0.0001567975);
   grae->SetPoint(5,42.5,0.002314023);
   grae->SetPointError(5,2.5,2.5,0.0001492306,0.0001559194);
   grae->SetPoint(6,47.5,0.003464471);
   grae->SetPointError(6,2.5,2.5,0.0002013855,0.0002094762);
   grae->SetPoint(7,52.5,0.003800297);
   grae->SetPointError(7,2.5,2.5,0.0002745837,0.0002884272);
   grae->SetPoint(8,57.5,0.004461237);
   grae->SetPointError(8,2.5,2.5,0.0004353381,0.0004654991);
   grae->SetPoint(9,62.5,0.005802708);
   grae->SetPointError(9,2.5,2.5,0.0007747085,0.0008499851);
   grae->SetPoint(10,67.5,0.009401709);
   grae->SetPointError(10,2.5,2.5,0.001541161,0.001728523);
   grae->SetPoint(11,72.5,0.03118779);
   grae->SetPointError(11,2.5,2.5,0.004279193,0.004695263);
   grae->SetPoint(12,77.5,0.1135734);
   grae->SetPointError(12,2.5,2.5,0.01145358,0.01216726);
   grae->SetPoint(13,82.5,0.2755344);
   grae->SetPointError(13,2.5,2.5,0.02138852,0.02209756);
   grae->SetPoint(14,87.5,0.5494881);
   grae->SetPointError(14,2.5,2.5,0.0290992,0.02887508);
   grae->SetPoint(15,92.5,0.7529412);
   grae->SetPointError(15,2.5,2.5,0.01940897,0.0187489);
   grae->SetPoint(16,97.5,0.8744277);
   grae->SetPointError(16,2.5,2.5,0.008640722,0.008314011);
   grae->SetPoint(17,102.5,0.9324042);
   grae->SetPointError(17,2.5,2.5,0.00683417,0.00643187);
   grae->SetPoint(18,107.5,0.9777778);
   grae->SetPointError(18,2.5,2.5,0.00469667,0.0041273);
   grae->SetPoint(19,112.5,0.9854722);
   grae->SetPointError(19,2.5,2.5,0.004594295,0.003801608);
   grae->SetPoint(20,117.5,0.9907834);
   grae->SetPointError(20,2.5,2.5,0.004324628,0.003295499);
   grae->SetPoint(21,122.5,0.9895397);
   grae->SetPointError(21,2.5,2.5,0.005449729,0.004046306);
   grae->SetPoint(22,127.5,0.9946809);
   grae->SetPointError(22,2.5,2.5,0.00489538,0.003012834);
   grae->SetPoint(23,132.5,0.9924528);
   grae->SetPointError(23,2.5,2.5,0.006921891,0.004269382);
   grae->SetPoint(24,137.5,0.9909091);
   grae->SetPointError(24,2.5,2.5,0.008317758,0.005138129);
   grae->SetPoint(25,142.5,0.9891304);
   grae->SetPointError(25,2.5,2.5,0.0099177,0.006137167);
   grae->SetPoint(26,147.5,0.9858156);
   grae->SetPointError(26,2.5,2.5,0.01287577,0.00799359);
   grae->SetPoint(27,152.5,0.9754098);
   grae->SetPointError(27,2.5,2.5,0.01708991,0.01171497);
   grae->SetPoint(28,157.5,0.9879518);
   grae->SetPointError(28,2.5,2.5,0.01756698,0.008746915);
   grae->SetPoint(29,162.5,0.9705882);
   grae->SetPointError(29,2.5,2.5,0.02607414,0.01643017);
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
   
   TH1F *Graph3 = new TH1F("Graph3","",100,0,218.5);
   Graph3->SetMinimum(0);
   Graph3->SetMaximum(1.1);
   Graph3->SetDirectory(0);
   Graph3->SetStats(0);
   Graph3->SetFillColor(1);
   Graph3->SetFillStyle(0);
   Graph3->SetLineStyle(0);
   Graph3->SetMarkerStyle(20);
   Graph3->GetXaxis()->SetLabelFont(42);
   Graph3->GetXaxis()->SetLabelOffset(0.01);
   Graph3->GetXaxis()->SetLabelSize(0.045);
   Graph3->GetXaxis()->SetTitleSize(0.055);
   Graph3->GetXaxis()->SetTitleFont(42);
   Graph3->GetYaxis()->SetLabelFont(42);
   Graph3->GetYaxis()->SetLabelOffset(0.01);
   Graph3->GetYaxis()->SetLabelSize(0.045);
   Graph3->GetYaxis()->SetTitleSize(0.055);
   Graph3->GetYaxis()->SetTitleFont(42);
   Graph3->GetZaxis()->SetLabelFont(42);
   Graph3->GetZaxis()->SetLabelSize(0.045);
   Graph3->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph3);
   
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
   grae->SetPoint(2,12.5,0.0001507489);
   grae->SetPointError(2,2.5,2.5,3.001814e-05,3.462326e-05);
   grae->SetPoint(3,17.5,0.000154317);
   grae->SetPointError(3,2.5,2.5,3.373341e-05,3.950384e-05);
   grae->SetPoint(4,22.5,0.0002985966);
   grae->SetPointError(4,2.5,2.5,8.180494e-05,0.0001001699);
   grae->SetPoint(5,27.5,0.0001110556);
   grae->SetPointError(5,2.5,2.5,6.309024e-05,0.0001030385);
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
   grae->SetPoint(18,92.5,0.6842105);
   grae->SetPointError(18,2.5,2.5,0.1077741,0.09589488);
   grae->SetPoint(19,97.5,0.6607143);
   grae->SetPointError(19,2.5,2.5,0.06412137,0.06040472);
   grae->SetPoint(20,102.5,0.9295775);
   grae->SetPointError(20,2.5,2.5,0.03453278,0.02645919);
   grae->SetPoint(21,107.5,0.9642857);
   grae->SetPointError(21,2.5,2.5,0.03135299,0.01987815);
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
   
   TH1F *Graph4 = new TH1F("Graph4","",100,0,220);
   Graph4->SetMinimum(0);
   Graph4->SetMaximum(1.1);
   Graph4->SetDirectory(0);
   Graph4->SetStats(0);
   Graph4->SetFillColor(1);
   Graph4->SetFillStyle(0);
   Graph4->SetLineStyle(0);
   Graph4->SetMarkerStyle(20);
   Graph4->GetXaxis()->SetLabelFont(42);
   Graph4->GetXaxis()->SetLabelOffset(0.01);
   Graph4->GetXaxis()->SetLabelSize(0.045);
   Graph4->GetXaxis()->SetTitleSize(0.055);
   Graph4->GetXaxis()->SetTitleFont(42);
   Graph4->GetYaxis()->SetLabelFont(42);
   Graph4->GetYaxis()->SetLabelOffset(0.01);
   Graph4->GetYaxis()->SetLabelSize(0.045);
   Graph4->GetYaxis()->SetTitleSize(0.055);
   Graph4->GetYaxis()->SetTitleFont(42);
   Graph4->GetZaxis()->SetLabelFont(42);
   Graph4->GetZaxis()->SetLabelSize(0.045);
   Graph4->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph4);
   
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
   
//    TPaveText *pt = new TPaveText(0.01,0.9390678,0.2685057,0.995,"blNDC");
//    pt->SetName("title");
//    pt->SetBorderSize(0);
//    TText *text = pt->AddText("Stage-2 system.");
//    pt->Draw();
//    c1->Modified();
//    c1->cd();
//    c1->SetSelected(c1);
}
