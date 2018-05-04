void gamma(){



    mc(1,1.6, 300, 100, 10, 0.9);
    gStyle->SetOptStat(0);gStyle->SetOptTitle(0);
    gStyle->SetMarkerSize(1.6);
    mpad->SetLogx(0);mpad->SetGridx(0);
    mpad->SetLogy(0);mpad->SetGridy(1);
    gPad->SetLeftMargin(0.17);
    hfr = new TH2F("hfr"," ", 10, 4., 10., 10, .0 , .8);
    hset( *hfr, "power law exp. n  ","#LTz_{inc} #GT");
    hfr->Draw();

    // Different def. of incomplete Gamma in ROOT and Mathematica see line 32
    fz = new TF1("fz", "( TMath::Gamma(x-1,[0])*TMath::Gamma(x-1) )/( TMath::Gamma(x-2,[0])*TMath::Gamma(x-2) )/[0]", 4, 10.0);
    fz->SetParameter(0, 8.5);

    leg = new TLegend(0.45,0.8,0.72,0.99," ","brNDC");
    leg->SetFillStyle(0);leg->SetBorderSize(0);leg->SetTextSize(0.04);
    
    TObject *fz1 = fz->DrawCopy("same"); // same
    leg->AddEntry(fz1, "quark","l");

    double lend = 0.0;
    double nPow = 6.06-1; //LHC
    l = new TLine(nPow, lend, nPow, fz->Eval(nPow)); l->SetLineStyle(2); l->Draw(); 
    double nPow = 6.43-1; //LHC
    l = new TLine(nPow, lend, nPow, fz->Eval(nPow)); l->SetLineStyle(2); l->Draw(); 
    double nPow = 6.82-1; //LHC
    l = new TLine(nPow, lend, nPow, fz->Eval(nPow)); l->SetLineStyle(2); l->Draw(); 
    double nPow = 8.2-1; //RHIC
    l = new TLine(nPow, lend, nPow, fz->Eval(nPow)); l->SetLineStyle(2); l->Draw(); 


    fz->SetParameter(0, 11.5);
    fz->SetLineStyle(2);
    fz->DrawClone("same"); // same
    leg->AddEntry(fz, "gluon","l");

    leg->Draw(); 

    tex = new TLatex(8.328717,0.42,"RHIC"); tex->Draw();
    tex = new TLatex(6.633819,0.42,"LHC");tex->Draw();

    pPrint("gamma");

    //f = new TF1("f", "TMath::Gamma(5.5)-TMath::Gamma(5.5, x)*TMath::Gamma(5.5)", 5, 50);f->Draw();


    mc(2,1.6);
    gStyle->SetOptStat(0);gStyle->SetOptTitle(0);
    gStyle->SetMarkerSize(1.6);
    mpad->SetLogx(0);mpad->SetGridx(0);
    mpad->SetLogy(0);mpad->SetGridy(0);
    gPad->SetLeftMargin(0.17);
    hfr = new TH2F("hfr"," ", 10, 0, 1, 10, 0, 2);
    hset( *hfr, "z","Probability D^{f}(z) z^{n-3}");
    hfr->Draw();
     
    fIntZexp = new TF1("fIntZexp", "[0]*pow(x,[1]-3)*exp(-[2]*x)", 0, 1);
    fIntZexp->SetParameters(1, 8.2, 10); //invariant slope and exp (q+g)/2 
    double norm = fIntZexp->Integral(0,1);
    fIntZexp->SetParameter(0, 1./norm);
    fIntZexp->Draw("same");

    fIntZKKP = new TF1("fIntZKKP", "[0]*pow(x,[1]-3)*pow(x,-[2])*pow(1-x,[3])*pow(1+x,-[4])", 0, 1);
    fIntZKKP->SetParameters(1.0, 8.2, 0.32, 0.72, 10.65); //invariant slope and (q+g)/2
    double norm = fIntZKKP->Integral(0,1);
    fIntZKKP->SetParameter(0, 1./norm);
    fIntZKKP->SetLineStyle(2);
    fIntZKKP->Draw("same");


}

