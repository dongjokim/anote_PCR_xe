{
//=========Macro generated from canvas: c1/c1
//=========  (Thu Apr 14 12:46:44 2011) by ROOT version5.28/00
   TCanvas *c1 = new TCanvas("c1", "c1",10,32,440,440);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTicky(1);
   c1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: mpad
   TPad *mpad = new TPad("mpad", "mpad",0.01,0.01,0.99,0.99);
   mpad->Draw();
   mpad->cd();
   mpad->Range(-6.375,-8.463415,31.125,1.292683);
   mpad->SetFillColor(0);
   mpad->SetBorderMode(0);
   mpad->SetBorderSize(0);
   mpad->SetLogy();
   mpad->SetTicky(1);
   mpad->SetLeftMargin(0.17);
   mpad->SetRightMargin(0.03);
   mpad->SetTopMargin(0.03);
   mpad->SetBottomMargin(0.15);
   mpad->SetFrameBorderMode(0);
   mpad->SetFrameBorderMode(0);
   
   TH2F *hfr = new TH2F("hfr"," ",10,0,30,10,1e-07,10);
   hfr->SetStats(0);
   hfr->SetMarkerSize(1.6);
   hfr->GetXaxis()->SetTitle("#hat{p}_{T}  [GeV/c]");
   hfr->GetXaxis()->CenterTitle(true);
   hfr->GetXaxis()->SetNdivisions(505);
   hfr->GetXaxis()->SetLabelFont(42);
   hfr->GetXaxis()->SetLabelOffset(0.01);
   hfr->GetXaxis()->SetLabelSize(0.05);
   hfr->GetXaxis()->SetTitleSize(0.06);
   hfr->GetXaxis()->SetTitleOffset(1.1);
   hfr->GetXaxis()->SetTitleFont(42);
   hfr->GetYaxis()->SetTitle("yield");
   hfr->GetYaxis()->CenterTitle(true);
   hfr->GetYaxis()->SetNdivisions(505);
   hfr->GetYaxis()->SetLabelFont(42);
   hfr->GetYaxis()->SetLabelOffset(0.001);
   hfr->GetYaxis()->SetLabelSize(0.05);
   hfr->GetYaxis()->SetTitleSize(0.06);
   hfr->GetYaxis()->SetTitleOffset(1.1);
   hfr->GetYaxis()->SetTitleFont(42);
   hfr->Draw("");
   
   TF1 *f3 = new TF1("*f3",0,10,0);
    //The original function :  had originally been created by:
    //TF1 *f3 = new TF1("f3",,0,10,0);
   f3->SetRange(0,10);
   f3->SetName("f3");
   f3->SetTitle("");
   f3->SetSavedPoint(0,0);
   f3->SetSavedPoint(1,1.928662e-11);
   f3->SetSavedPoint(2,5.756331e-08);
   f3->SetSavedPoint(3,6.285863e-06);
   f3->SetSavedPoint(4,0.0001354622);
   f3->SetSavedPoint(5,0.001100262);
   f3->SetSavedPoint(6,0.004718086);
   f3->SetSavedPoint(7,0.01306451);
   f3->SetSavedPoint(8,0.02659486);
   f3->SetSavedPoint(9,0.04343296);
   f3->SetSavedPoint(10,0.06046178);
   f3->SetSavedPoint(11,0.07488918);
   f3->SetSavedPoint(12,0.08511841);
   f3->SetSavedPoint(13,0.09078609);
   f3->SetSavedPoint(14,0.09236958);
   f3->SetSavedPoint(15,0.09074094);
   f3->SetSavedPoint(16,0.08684268);
   f3->SetSavedPoint(17,0.08151063);
   f3->SetSavedPoint(18,0.07540646);
   f3->SetSavedPoint(19,0.06901364);
   f3->SetSavedPoint(20,0.06266257);
   f3->SetSavedPoint(21,0.0565642);
   f3->SetSavedPoint(22,0.05084199);
   f3->SetSavedPoint(23,0.04555844);
   f3->SetSavedPoint(24,0.04073528);
   f3->SetSavedPoint(25,0.03636824);
   f3->SetSavedPoint(26,0.03243733);
   f3->SetSavedPoint(27,0.02891382);
   f3->SetSavedPoint(28,0.02576489);
   f3->SetSavedPoint(29,0.02295657);
   f3->SetSavedPoint(30,0.02045553);
   f3->SetSavedPoint(31,0.01823018);
   f3->SetSavedPoint(32,0.01625117);
   f3->SetSavedPoint(33,0.01449168);
   f3->SetSavedPoint(34,0.01292742);
   f3->SetSavedPoint(35,0.01153656);
   f3->SetSavedPoint(36,0.0102996);
   f3->SetSavedPoint(37,0.009199156);
   f3->SetSavedPoint(38,0.008219788);
   f3->SetSavedPoint(39,0.007347805);
   f3->SetSavedPoint(40,0.006571078);
   f3->SetSavedPoint(41,0.005878873);
   f3->SetSavedPoint(42,0.005261689);
   f3->SetSavedPoint(43,0.004711124);
   f3->SetSavedPoint(44,0.004219743);
   f3->SetSavedPoint(45,0.003780966);
   f3->SetSavedPoint(46,0.003388971);
   f3->SetSavedPoint(47,0.003038598);
   f3->SetSavedPoint(48,0.002725282);
   f3->SetSavedPoint(49,0.00244497);
   f3->SetSavedPoint(50,0.002194074);
   f3->SetSavedPoint(51,0.001969406);
   f3->SetSavedPoint(52,0.001768139);
   f3->SetSavedPoint(53,0.001587758);
   f3->SetSavedPoint(54,0.001426032);
   f3->SetSavedPoint(55,0.001280974);
   f3->SetSavedPoint(56,0.001150817);
   f3->SetSavedPoint(57,0.001033988);
   f3->SetSavedPoint(58,0.0009290854);
   f3->SetSavedPoint(59,0.0008348608);
   f3->SetSavedPoint(60,0.0007502);
   f3->SetSavedPoint(61,0.0006741092);
   f3->SetSavedPoint(62,0.0006057014);
   f3->SetSavedPoint(63,0.0005441839);
   f3->SetSavedPoint(64,0.0004888488);
   f3->SetSavedPoint(65,0.0004390629);
   f3->SetSavedPoint(66,0.0003942599);
   f3->SetSavedPoint(67,0.0003539328);
   f3->SetSavedPoint(68,0.0003176279);
   f3->SetSavedPoint(69,0.0002849386);
   f3->SetSavedPoint(70,0.0002555005);
   f3->SetSavedPoint(71,0.000228987);
   f3->SetSavedPoint(72,0.0002051049);
   f3->SetSavedPoint(73,0.0001835915);
   f3->SetSavedPoint(74,0.0001642104);
   f3->SetSavedPoint(75,0.0001467498);
   f3->SetSavedPoint(76,0.000131019);
   f3->SetSavedPoint(77,0.0001168469);
   f3->SetSavedPoint(78,0.0001040793);
   f3->SetSavedPoint(79,9.257788e-05);
   f3->SetSavedPoint(80,8.221785e-05);
   f3->SetSavedPoint(81,7.288699e-05);
   f3->SetSavedPoint(82,6.448423e-05);
   f3->SetSavedPoint(83,5.691851e-05);
   f3->SetSavedPoint(84,5.010772e-05);
   f3->SetSavedPoint(85,4.397785e-05);
   f3->SetSavedPoint(86,3.846212e-05);
   f3->SetSavedPoint(87,3.350024e-05);
   f3->SetSavedPoint(88,2.903776e-05);
   f3->SetSavedPoint(89,2.502546e-05);
   f3->SetSavedPoint(90,2.141877e-05);
   f3->SetSavedPoint(91,1.817731e-05);
   f3->SetSavedPoint(92,1.526438e-05);
   f3->SetSavedPoint(93,1.264651e-05);
   f3->SetSavedPoint(94,1.029298e-05);
   f3->SetSavedPoint(95,8.175284e-06);
   f3->SetSavedPoint(96,6.266434e-06);
   f3->SetSavedPoint(97,4.539724e-06);
   f3->SetSavedPoint(98,2.966075e-06);
   f3->SetSavedPoint(99,1.50506e-06);
   f3->SetSavedPoint(100,0);
   f3->SetSavedPoint(101,0);
   f3->SetSavedPoint(102,10);
   f3->SetFillColor(19);
   f3->SetFillStyle(0);
   f3->SetMarkerSize(1.6);
   f3->SetLineWidth(3);
   f3->Draw("same");
   
   TF1 *f3 = new TF1("*f3",0,15,0);
    //The original function :  had originally been created by:
    //TF1 *f3 = new TF1("f3",,0,15,0);
   f3->SetRange(0,15);
   f3->SetName("f3");
   f3->SetTitle("");
   f3->SetSavedPoint(0,0);
   f3->SetSavedPoint(1,1.128801e-12);
   f3->SetSavedPoint(2,3.369046e-09);
   f3->SetSavedPoint(3,3.678969e-07);
   f3->SetSavedPoint(4,7.928287e-06);
   f3->SetSavedPoint(5,6.439577e-05);
   f3->SetSavedPoint(6,0.0002761385);
   f3->SetSavedPoint(7,0.0007646355);
   f3->SetSavedPoint(8,0.001556535);
   f3->SetSavedPoint(9,0.00254203);
   f3->SetSavedPoint(10,0.003538687);
   f3->SetSavedPoint(11,0.004383089);
   f3->SetSavedPoint(12,0.004981782);
   f3->SetSavedPoint(13,0.005313498);
   f3->SetSavedPoint(14,0.005406176);
   f3->SetSavedPoint(15,0.005310855);
   f3->SetSavedPoint(16,0.005082699);
   f3->SetSavedPoint(17,0.004770627);
   f3->SetSavedPoint(18,0.004413364);
   f3->SetSavedPoint(19,0.004039207);
   f3->SetSavedPoint(20,0.003667494);
   f3->SetSavedPoint(21,0.00331057);
   f3->SetSavedPoint(22,0.002975663);
   f3->SetSavedPoint(23,0.002666429);
   f3->SetSavedPoint(24,0.002384141);
   f3->SetSavedPoint(25,0.002128548);
   f3->SetSavedPoint(26,0.001898481);
   f3->SetSavedPoint(27,0.001692258);
   f3->SetSavedPoint(28,0.001507959);
   f3->SetSavedPoint(29,0.001343594);
   f3->SetSavedPoint(30,0.001197215);
   f3->SetSavedPoint(31,0.00106697);
   f3->SetSavedPoint(32,0.0009511431);
   f3->SetSavedPoint(33,0.0008481642);
   f3->SetSavedPoint(34,0.0007566116);
   f3->SetSavedPoint(35,0.0006752081);
   f3->SetSavedPoint(36,0.0006028116);
   f3->SetSavedPoint(37,0.0005384051);
   f3->SetSavedPoint(38,0.000481085);
   f3->SetSavedPoint(39,0.0004300499);
   f3->SetSavedPoint(40,0.0003845899);
   f3->SetSavedPoint(41,0.0003440767);
   f3->SetSavedPoint(42,0.0003079544);
   f3->SetSavedPoint(43,0.0002757311);
   f3->SetSavedPoint(44,0.0002469717);
   f3->SetSavedPoint(45,0.0002212911);
   f3->SetSavedPoint(46,0.0001983485);
   f3->SetSavedPoint(47,0.0001778421);
   f3->SetSavedPoint(48,0.0001595044);
   f3->SetSavedPoint(49,0.0001430984);
   f3->SetSavedPoint(50,0.000128414);
   f3->SetSavedPoint(51,0.0001152648);
   f3->SetSavedPoint(52,0.000103485);
   f3->SetSavedPoint(53,9.292777e-05);
   f3->SetSavedPoint(54,8.34623e-05);
   f3->SetSavedPoint(55,7.497239e-05);
   f3->SetSavedPoint(56,6.735461e-05);
   f3->SetSavedPoint(57,6.051688e-05);
   f3->SetSavedPoint(58,5.43772e-05);
   f3->SetSavedPoint(59,4.886245e-05);
   f3->SetSavedPoint(60,4.390745e-05);
   f3->SetSavedPoint(61,3.945404e-05);
   f3->SetSavedPoint(62,3.545028e-05);
   f3->SetSavedPoint(63,3.184981e-05);
   f3->SetSavedPoint(64,2.861118e-05);
   f3->SetSavedPoint(65,2.569733e-05);
   f3->SetSavedPoint(66,2.307511e-05);
   f3->SetSavedPoint(67,2.071486e-05);
   f3->SetSavedPoint(68,1.859002e-05);
   f3->SetSavedPoint(69,1.667679e-05);
   f3->SetSavedPoint(70,1.495385e-05);
   f3->SetSavedPoint(71,1.340207e-05);
   f3->SetSavedPoint(72,1.200431e-05);
   f3->SetSavedPoint(73,1.074518e-05);
   f3->SetSavedPoint(74,9.610852e-06);
   f3->SetSavedPoint(75,8.588922e-06);
   f3->SetSavedPoint(76,7.668237e-06);
   f3->SetSavedPoint(77,6.838774e-06);
   f3->SetSavedPoint(78,6.09152e-06);
   f3->SetSavedPoint(79,5.418367e-06);
   f3->SetSavedPoint(80,4.812018e-06);
   f3->SetSavedPoint(81,4.265905e-06);
   f3->SetSavedPoint(82,3.774112e-06);
   f3->SetSavedPoint(83,3.331307e-06);
   f3->SetSavedPoint(84,2.932688e-06);
   f3->SetSavedPoint(85,2.573921e-06);
   f3->SetSavedPoint(86,2.251098e-06);
   f3->SetSavedPoint(87,1.960691e-06);
   f3->SetSavedPoint(88,1.699513e-06);
   f3->SetSavedPoint(89,1.464682e-06);
   f3->SetSavedPoint(90,1.253591e-06);
   f3->SetSavedPoint(91,1.063876e-06);
   f3->SetSavedPoint(92,8.933886e-07);
   f3->SetSavedPoint(93,7.401706e-07);
   f3->SetSavedPoint(94,6.024238e-07);
   f3->SetSavedPoint(95,4.784803e-07);
   f3->SetSavedPoint(96,3.667597e-07);
   f3->SetSavedPoint(97,2.656995e-07);
   f3->SetSavedPoint(98,1.735974e-07);
   f3->SetSavedPoint(99,8.808765e-08);
   f3->SetSavedPoint(100,0);
   f3->SetSavedPoint(101,0);
   f3->SetSavedPoint(102,15);
   f3->SetFillColor(19);
   f3->SetFillStyle(0);
   f3->SetMarkerSize(1.6);
   f3->SetLineWidth(3);
   f3->Draw("same");
   
   TF1 *f3 = new TF1("*f3",0,20,0);
    //The original function :  had originally been created by:
    //TF1 *f3 = new TF1("f3",,0,20,0);
   f3->SetRange(0,20);
   f3->SetName("f3");
   f3->SetTitle("");
   f3->SetSavedPoint(0,0);
   f3->SetSavedPoint(1,1.506767e-13);
   f3->SetSavedPoint(2,4.497134e-10);
   f3->SetSavedPoint(3,4.91083e-08);
   f3->SetSavedPoint(4,1.058299e-06);
   f3->SetSavedPoint(5,8.595798e-06);
   f3->SetSavedPoint(6,3.686005e-05);
   f3->SetSavedPoint(7,0.0001020665);
   f3->SetSavedPoint(8,0.0002077724);
   f3->SetSavedPoint(9,0.00033932);
   f3->SetSavedPoint(10,0.0004723576);
   f3->SetSavedPoint(11,0.0005850717);
   f3->SetSavedPoint(12,0.0006649876);
   f3->SetSavedPoint(13,0.0007092663);
   f3->SetSavedPoint(14,0.0007216374);
   f3->SetSavedPoint(15,0.0007089136);
   f3->SetSavedPoint(16,0.0006784584);
   f3->SetSavedPoint(17,0.0006368018);
   f3->SetSavedPoint(18,0.000589113);
   f3->SetSavedPoint(19,0.0005391691);
   f3->SetSavedPoint(20,0.0004895513);
   f3->SetSavedPoint(21,0.0004419078);
   f3->SetSavedPoint(22,0.0003972031);
   f3->SetSavedPoint(23,0.0003559253);
   f3->SetSavedPoint(24,0.0003182444);
   f3->SetSavedPoint(25,0.0002841269);
   f3->SetSavedPoint(26,0.0002534166);
   f3->SetSavedPoint(27,0.0002258892);
   f3->SetSavedPoint(28,0.0002012882);
   f3->SetSavedPoint(29,0.0001793482);
   f3->SetSavedPoint(30,0.0001598088);
   f3->SetSavedPoint(31,0.0001424233);
   f3->SetSavedPoint(32,0.0001269623);
   f3->SetSavedPoint(33,0.0001132163);
   f3->SetSavedPoint(34,0.0001009955);
   f3->SetSavedPoint(35,9.01294e-05);
   f3->SetSavedPoint(36,8.046564e-05);
   f3->SetSavedPoint(37,7.186841e-05);
   f3->SetSavedPoint(38,6.42171e-05);
   f3->SetSavedPoint(39,5.740473e-05);
   f3->SetSavedPoint(40,5.133655e-05);
   f3->SetSavedPoint(41,4.592869e-05);
   f3->SetSavedPoint(42,4.110695e-05);
   f3->SetSavedPoint(43,3.680566e-05);
   f3->SetSavedPoint(44,3.296674e-05);
   f3->SetSavedPoint(45,2.95388e-05);
   f3->SetSavedPoint(46,2.647633e-05);
   f3->SetSavedPoint(47,2.373905e-05);
   f3->SetSavedPoint(48,2.129126e-05);
   f3->SetSavedPoint(49,1.910133e-05);
   f3->SetSavedPoint(50,1.71412e-05);
   f3->SetSavedPoint(51,1.538599e-05);
   f3->SetSavedPoint(52,1.381358e-05);
   f3->SetSavedPoint(53,1.240436e-05);
   f3->SetSavedPoint(54,1.114087e-05);
   f3->SetSavedPoint(55,1.000761e-05);
   f3->SetSavedPoint(56,8.990755e-06);
   f3->SetSavedPoint(57,8.078029e-06);
   f3->SetSavedPoint(58,7.25848e-06);
   f3->SetSavedPoint(59,6.52235e-06);
   f3->SetSavedPoint(60,5.860937e-06);
   f3->SetSavedPoint(61,5.266478e-06);
   f3->SetSavedPoint(62,4.732042e-06);
   f3->SetSavedPoint(63,4.251437e-06);
   f3->SetSavedPoint(64,3.819131e-06);
   f3->SetSavedPoint(65,3.430179e-06);
   f3->SetSavedPoint(66,3.080155e-06);
   f3->SetSavedPoint(67,2.7651e-06);
   f3->SetSavedPoint(68,2.481468e-06);
   f3->SetSavedPoint(69,2.226082e-06);
   f3->SetSavedPoint(70,1.996097e-06);
   f3->SetSavedPoint(71,1.788961e-06);
   f3->SetSavedPoint(72,1.602382e-06);
   f3->SetSavedPoint(73,1.434308e-06);
   f3->SetSavedPoint(74,1.282894e-06);
   f3->SetSavedPoint(75,1.146483e-06);
   f3->SetSavedPoint(76,1.023586e-06);
   f3->SetSavedPoint(77,9.128662e-07);
   f3->SetSavedPoint(78,8.131198e-07);
   f3->SetSavedPoint(79,7.232647e-07);
   f3->SetSavedPoint(80,6.423269e-07);
   f3->SetSavedPoint(81,5.694296e-07);
   f3->SetSavedPoint(82,5.037831e-07);
   f3->SetSavedPoint(83,4.446758e-07);
   f3->SetSavedPoint(84,3.914666e-07);
   f3->SetSavedPoint(85,3.43577e-07);
   f3->SetSavedPoint(86,3.004853e-07);
   f3->SetSavedPoint(87,2.617206e-07);
   f3->SetSavedPoint(88,2.268575e-07);
   f3->SetSavedPoint(89,1.955114e-07);
   f3->SetSavedPoint(90,1.673342e-07);
   f3->SetSavedPoint(91,1.420103e-07);
   f3->SetSavedPoint(92,1.19253e-07);
   f3->SetSavedPoint(93,9.880085e-08);
   f3->SetSavedPoint(94,8.041387e-08);
   f3->SetSavedPoint(95,6.386941e-08);
   f3->SetSavedPoint(96,4.895652e-08);
   f3->SetSavedPoint(97,3.54666e-08);
   f3->SetSavedPoint(98,2.317246e-08);
   f3->SetSavedPoint(99,1.175828e-08);
   f3->SetSavedPoint(100,0);
   f3->SetSavedPoint(101,0);
   f3->SetSavedPoint(102,20);
   f3->SetFillColor(19);
   f3->SetFillStyle(0);
   f3->SetMarkerSize(1.6);
   f3->SetLineWidth(3);
   f3->Draw("same");
   
   TH1D *hid = new TH1D("hid","",30,0,30);
   hid->SetBinContent(11,0.1);
   hid->SetBinContent(16,0.00877915);
   hid->SetBinContent(21,0.0015625);
   hid->SetEntries(3);
   hid->SetStats(0);
   hid->SetFillColor(93);
   hid->SetMarkerSize(1.6);
   hid->Draw("same");
   TLatex *   tex = new TLatex(19.5808,0.01027562,"#frac{dP}{d#hat{p}_{T}}");
   tex->SetTextFont(42);
   tex->SetTextSize(0.07);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(2.622316,0.1009781,"#frac{dP}{dp_{T}}|_{#hat{p}_{T}}");
   tex->SetTextFont(42);
   tex->SetTextSize(0.07);
   tex->SetLineWidth(2);
   tex->Draw();
   mpad->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
