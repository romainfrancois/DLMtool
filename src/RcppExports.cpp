// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// bhnoneq_LL
double bhnoneq_LL(NumericVector stpar, NumericVector year, NumericVector Lbar, NumericVector ss, double Linf, double K, double Lc, int nbreaks);
RcppExport SEXP DLMtool_bhnoneq_LL(SEXP stparSEXP, SEXP yearSEXP, SEXP LbarSEXP, SEXP ssSEXP, SEXP LinfSEXP, SEXP KSEXP, SEXP LcSEXP, SEXP nbreaksSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type stpar(stparSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type year(yearSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Lbar(LbarSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ss(ssSEXP);
    Rcpp::traits::input_parameter< double >::type Linf(LinfSEXP);
    Rcpp::traits::input_parameter< double >::type K(KSEXP);
    Rcpp::traits::input_parameter< double >::type Lc(LcSEXP);
    Rcpp::traits::input_parameter< int >::type nbreaks(nbreaksSEXP);
    rcpp_result_gen = Rcpp::wrap(bhnoneq_LL(stpar, year, Lbar, ss, Linf, K, Lc, nbreaks));
    return rcpp_result_gen;
END_RCPP
}
// doprojPI_cpp
double doprojPI_cpp(double lnF, NumericMatrix Mmat, NumericVector Wac, NumericVector Mac, NumericVector Pc, NumericMatrix N_c, NumericMatrix SSN_c, NumericMatrix Biomass_c, NumericMatrix VBiomass_c, NumericMatrix SSB_c, NumericMatrix Vc, NumericMatrix retAc, double hc, NumericVector R0ac, double proyears, double nareas, double maxage, NumericMatrix movc, double SSBpRc, NumericVector aRc, NumericVector bRc, double SRrelc, double Spat_targc);
RcppExport SEXP DLMtool_doprojPI_cpp(SEXP lnFSEXP, SEXP MmatSEXP, SEXP WacSEXP, SEXP MacSEXP, SEXP PcSEXP, SEXP N_cSEXP, SEXP SSN_cSEXP, SEXP Biomass_cSEXP, SEXP VBiomass_cSEXP, SEXP SSB_cSEXP, SEXP VcSEXP, SEXP retAcSEXP, SEXP hcSEXP, SEXP R0acSEXP, SEXP proyearsSEXP, SEXP nareasSEXP, SEXP maxageSEXP, SEXP movcSEXP, SEXP SSBpRcSEXP, SEXP aRcSEXP, SEXP bRcSEXP, SEXP SRrelcSEXP, SEXP Spat_targcSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type lnF(lnFSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Mmat(MmatSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Wac(WacSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Mac(MacSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Pc(PcSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type N_c(N_cSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type SSN_c(SSN_cSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Biomass_c(Biomass_cSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type VBiomass_c(VBiomass_cSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type SSB_c(SSB_cSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Vc(VcSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type retAc(retAcSEXP);
    Rcpp::traits::input_parameter< double >::type hc(hcSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type R0ac(R0acSEXP);
    Rcpp::traits::input_parameter< double >::type proyears(proyearsSEXP);
    Rcpp::traits::input_parameter< double >::type nareas(nareasSEXP);
    Rcpp::traits::input_parameter< double >::type maxage(maxageSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type movc(movcSEXP);
    Rcpp::traits::input_parameter< double >::type SSBpRc(SSBpRcSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type aRc(aRcSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type bRc(bRcSEXP);
    Rcpp::traits::input_parameter< double >::type SRrelc(SRrelcSEXP);
    Rcpp::traits::input_parameter< double >::type Spat_targc(Spat_targcSEXP);
    rcpp_result_gen = Rcpp::wrap(doprojPI_cpp(lnF, Mmat, Wac, Mac, Pc, N_c, SSN_c, Biomass_c, VBiomass_c, SSB_c, Vc, retAc, hc, R0ac, proyears, nareas, maxage, movc, SSBpRc, aRc, bRc, SRrelc, Spat_targc));
    return rcpp_result_gen;
END_RCPP
}
// genLenComp
NumericMatrix genLenComp(NumericVector CAL_bins, NumericVector CAL_binsmid, NumericMatrix SL, double CAL_ESS, double CAL_nsamp, NumericMatrix CN, NumericMatrix LaA, NumericMatrix LaASD, double truncSD);
RcppExport SEXP DLMtool_genLenComp(SEXP CAL_binsSEXP, SEXP CAL_binsmidSEXP, SEXP SLSEXP, SEXP CAL_ESSSEXP, SEXP CAL_nsampSEXP, SEXP CNSEXP, SEXP LaASEXP, SEXP LaASDSEXP, SEXP truncSDSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type CAL_bins(CAL_binsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type CAL_binsmid(CAL_binsmidSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type SL(SLSEXP);
    Rcpp::traits::input_parameter< double >::type CAL_ESS(CAL_ESSSEXP);
    Rcpp::traits::input_parameter< double >::type CAL_nsamp(CAL_nsampSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type CN(CNSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type LaA(LaASEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type LaASD(LaASDSEXP);
    Rcpp::traits::input_parameter< double >::type truncSD(truncSDSEXP);
    rcpp_result_gen = Rcpp::wrap(genLenComp(CAL_bins, CAL_binsmid, SL, CAL_ESS, CAL_nsamp, CN, LaA, LaASD, truncSD));
    return rcpp_result_gen;
END_RCPP
}
// movfit_Rcpp
double movfit_Rcpp(NumericVector par, double prb, double frac);
RcppExport SEXP DLMtool_movfit_Rcpp(SEXP parSEXP, SEXP prbSEXP, SEXP fracSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type par(parSEXP);
    Rcpp::traits::input_parameter< double >::type prb(prbSEXP);
    Rcpp::traits::input_parameter< double >::type frac(fracSEXP);
    rcpp_result_gen = Rcpp::wrap(movfit_Rcpp(par, prb, frac));
    return rcpp_result_gen;
END_RCPP
}
// optQ_cpp
double optQ_cpp(double lnIn, double depc, NumericVector Fc, NumericVector Perrc, NumericMatrix Mc, double hc, NumericVector Mac, NumericMatrix Wac, double R0c, NumericMatrix Vc, double nyears, double maxage, NumericMatrix movc, double Spat_targc, double SRrelc, NumericVector aRc, NumericVector bRc);
RcppExport SEXP DLMtool_optQ_cpp(SEXP lnInSEXP, SEXP depcSEXP, SEXP FcSEXP, SEXP PerrcSEXP, SEXP McSEXP, SEXP hcSEXP, SEXP MacSEXP, SEXP WacSEXP, SEXP R0cSEXP, SEXP VcSEXP, SEXP nyearsSEXP, SEXP maxageSEXP, SEXP movcSEXP, SEXP Spat_targcSEXP, SEXP SRrelcSEXP, SEXP aRcSEXP, SEXP bRcSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type lnIn(lnInSEXP);
    Rcpp::traits::input_parameter< double >::type depc(depcSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Fc(FcSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Perrc(PerrcSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Mc(McSEXP);
    Rcpp::traits::input_parameter< double >::type hc(hcSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Mac(MacSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Wac(WacSEXP);
    Rcpp::traits::input_parameter< double >::type R0c(R0cSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Vc(VcSEXP);
    Rcpp::traits::input_parameter< double >::type nyears(nyearsSEXP);
    Rcpp::traits::input_parameter< double >::type maxage(maxageSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type movc(movcSEXP);
    Rcpp::traits::input_parameter< double >::type Spat_targc(Spat_targcSEXP);
    Rcpp::traits::input_parameter< double >::type SRrelc(SRrelcSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type aRc(aRcSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type bRc(bRcSEXP);
    rcpp_result_gen = Rcpp::wrap(optQ_cpp(lnIn, depc, Fc, Perrc, Mc, hc, Mac, Wac, R0c, Vc, nyears, maxage, movc, Spat_targc, SRrelc, aRc, bRc));
    return rcpp_result_gen;
END_RCPP
}
// projOpt_cpp
NumericVector projOpt_cpp(double lnIn, NumericVector Mc, double hc, NumericVector Mac, NumericVector Wac, double R0c, NumericVector Vc, NumericVector retAc, double nyears, double maxage, NumericMatrix movc, double Spat_targc, double SRrelc, NumericVector aRc, NumericVector bRc, double proyears, double Control);
RcppExport SEXP DLMtool_projOpt_cpp(SEXP lnInSEXP, SEXP McSEXP, SEXP hcSEXP, SEXP MacSEXP, SEXP WacSEXP, SEXP R0cSEXP, SEXP VcSEXP, SEXP retAcSEXP, SEXP nyearsSEXP, SEXP maxageSEXP, SEXP movcSEXP, SEXP Spat_targcSEXP, SEXP SRrelcSEXP, SEXP aRcSEXP, SEXP bRcSEXP, SEXP proyearsSEXP, SEXP ControlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type lnIn(lnInSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Mc(McSEXP);
    Rcpp::traits::input_parameter< double >::type hc(hcSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Mac(MacSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Wac(WacSEXP);
    Rcpp::traits::input_parameter< double >::type R0c(R0cSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Vc(VcSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type retAc(retAcSEXP);
    Rcpp::traits::input_parameter< double >::type nyears(nyearsSEXP);
    Rcpp::traits::input_parameter< double >::type maxage(maxageSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type movc(movcSEXP);
    Rcpp::traits::input_parameter< double >::type Spat_targc(Spat_targcSEXP);
    Rcpp::traits::input_parameter< double >::type SRrelc(SRrelcSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type aRc(aRcSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type bRc(bRcSEXP);
    Rcpp::traits::input_parameter< double >::type proyears(proyearsSEXP);
    Rcpp::traits::input_parameter< double >::type Control(ControlSEXP);
    rcpp_result_gen = Rcpp::wrap(projOpt_cpp(lnIn, Mc, hc, Mac, Wac, R0c, Vc, retAc, nyears, maxage, movc, Spat_targc, SRrelc, aRc, bRc, proyears, Control));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"DLMtool_bhnoneq_LL", (DL_FUNC) &DLMtool_bhnoneq_LL, 8},
    {"DLMtool_doprojPI_cpp", (DL_FUNC) &DLMtool_doprojPI_cpp, 23},
    {"DLMtool_genLenComp", (DL_FUNC) &DLMtool_genLenComp, 9},
    {"DLMtool_movfit_Rcpp", (DL_FUNC) &DLMtool_movfit_Rcpp, 3},
    {"DLMtool_optQ_cpp", (DL_FUNC) &DLMtool_optQ_cpp, 17},
    {"DLMtool_projOpt_cpp", (DL_FUNC) &DLMtool_projOpt_cpp, 17},
    {NULL, NULL, 0}
};

RcppExport void R_init_DLMtool(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
