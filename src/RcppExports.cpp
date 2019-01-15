// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// C_lascoplanar
LogicalVector C_lascoplanar(S4 las, int k, double th1, double th2);
RcppExport SEXP _lidRplugins_C_lascoplanar(SEXP lasSEXP, SEXP kSEXP, SEXP th1SEXP, SEXP th2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type las(lasSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< double >::type th1(th1SEXP);
    Rcpp::traits::input_parameter< double >::type th2(th2SEXP);
    rcpp_result_gen = Rcpp::wrap(C_lascoplanar(las, k, th1, th2));
    return rcpp_result_gen;
END_RCPP
}
// C_hamraz_segmentation
List C_hamraz_segmentation(S4 disc, double nps, int sensitivity, double MDCW, double Epsilon, double CLc, double CLs, double Oc, double Os, double radius);
RcppExport SEXP _lidRplugins_C_hamraz_segmentation(SEXP discSEXP, SEXP npsSEXP, SEXP sensitivitySEXP, SEXP MDCWSEXP, SEXP EpsilonSEXP, SEXP CLcSEXP, SEXP CLsSEXP, SEXP OcSEXP, SEXP OsSEXP, SEXP radiusSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type disc(discSEXP);
    Rcpp::traits::input_parameter< double >::type nps(npsSEXP);
    Rcpp::traits::input_parameter< int >::type sensitivity(sensitivitySEXP);
    Rcpp::traits::input_parameter< double >::type MDCW(MDCWSEXP);
    Rcpp::traits::input_parameter< double >::type Epsilon(EpsilonSEXP);
    Rcpp::traits::input_parameter< double >::type CLc(CLcSEXP);
    Rcpp::traits::input_parameter< double >::type CLs(CLsSEXP);
    Rcpp::traits::input_parameter< double >::type Oc(OcSEXP);
    Rcpp::traits::input_parameter< double >::type Os(OsSEXP);
    Rcpp::traits::input_parameter< double >::type radius(radiusSEXP);
    rcpp_result_gen = Rcpp::wrap(C_hamraz_segmentation(disc, nps, sensitivity, MDCW, Epsilon, CLc, CLs, Oc, Os, radius));
    return rcpp_result_gen;
END_RCPP
}
// C_lastrees_ptrees
Rcpp::List C_lastrees_ptrees(Rcpp::S4 las, std::vector<int> k_values, double hmin, int nmax, bool segmentation);
RcppExport SEXP _lidRplugins_C_lastrees_ptrees(SEXP lasSEXP, SEXP k_valuesSEXP, SEXP hminSEXP, SEXP nmaxSEXP, SEXP segmentationSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type las(lasSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type k_values(k_valuesSEXP);
    Rcpp::traits::input_parameter< double >::type hmin(hminSEXP);
    Rcpp::traits::input_parameter< int >::type nmax(nmaxSEXP);
    Rcpp::traits::input_parameter< bool >::type segmentation(segmentationSEXP);
    rcpp_result_gen = Rcpp::wrap(C_lastrees_ptrees(las, k_values, hmin, nmax, segmentation));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_lidRplugins_C_lascoplanar", (DL_FUNC) &_lidRplugins_C_lascoplanar, 4},
    {"_lidRplugins_C_hamraz_segmentation", (DL_FUNC) &_lidRplugins_C_hamraz_segmentation, 10},
    {"_lidRplugins_C_lastrees_ptrees", (DL_FUNC) &_lidRplugins_C_lastrees_ptrees, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_lidRplugins(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
