// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// dbeta4
NumericVector dbeta4(NumericVector x, double min, double max, double shape1, double shape2, double gap);
RcppExport SEXP _teachingApps_dbeta4(SEXP xSEXP, SEXP minSEXP, SEXP maxSEXP, SEXP shape1SEXP, SEXP shape2SEXP, SEXP gapSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type min(minSEXP);
    Rcpp::traits::input_parameter< double >::type max(maxSEXP);
    Rcpp::traits::input_parameter< double >::type shape1(shape1SEXP);
    Rcpp::traits::input_parameter< double >::type shape2(shape2SEXP);
    Rcpp::traits::input_parameter< double >::type gap(gapSEXP);
    rcpp_result_gen = Rcpp::wrap(dbeta4(x, min, max, shape1, shape2, gap));
    return rcpp_result_gen;
END_RCPP
}
// pbeta4
NumericVector pbeta4(NumericVector q, double min, double max, double shape1, double shape2, double gap);
RcppExport SEXP _teachingApps_pbeta4(SEXP qSEXP, SEXP minSEXP, SEXP maxSEXP, SEXP shape1SEXP, SEXP shape2SEXP, SEXP gapSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type q(qSEXP);
    Rcpp::traits::input_parameter< double >::type min(minSEXP);
    Rcpp::traits::input_parameter< double >::type max(maxSEXP);
    Rcpp::traits::input_parameter< double >::type shape1(shape1SEXP);
    Rcpp::traits::input_parameter< double >::type shape2(shape2SEXP);
    Rcpp::traits::input_parameter< double >::type gap(gapSEXP);
    rcpp_result_gen = Rcpp::wrap(pbeta4(q, min, max, shape1, shape2, gap));
    return rcpp_result_gen;
END_RCPP
}
// qbeta4
NumericVector qbeta4(NumericVector p, double min, double max, double shape1, double shape2);
RcppExport SEXP _teachingApps_qbeta4(SEXP pSEXP, SEXP minSEXP, SEXP maxSEXP, SEXP shape1SEXP, SEXP shape2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type min(minSEXP);
    Rcpp::traits::input_parameter< double >::type max(maxSEXP);
    Rcpp::traits::input_parameter< double >::type shape1(shape1SEXP);
    Rcpp::traits::input_parameter< double >::type shape2(shape2SEXP);
    rcpp_result_gen = Rcpp::wrap(qbeta4(p, min, max, shape1, shape2));
    return rcpp_result_gen;
END_RCPP
}
// rbeta4
NumericVector rbeta4(int const n, double min, double max, double shape1, double shape2);
RcppExport SEXP _teachingApps_rbeta4(SEXP nSEXP, SEXP minSEXP, SEXP maxSEXP, SEXP shape1SEXP, SEXP shape2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int const >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type min(minSEXP);
    Rcpp::traits::input_parameter< double >::type max(maxSEXP);
    Rcpp::traits::input_parameter< double >::type shape1(shape1SEXP);
    Rcpp::traits::input_parameter< double >::type shape2(shape2SEXP);
    rcpp_result_gen = Rcpp::wrap(rbeta4(n, min, max, shape1, shape2));
    return rcpp_result_gen;
END_RCPP
}
// qbisa
NumericVector qbisa(NumericVector p, const double shape, const double scale);
RcppExport SEXP _teachingApps_qbisa(SEXP pSEXP, SEXP shapeSEXP, SEXP scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< const double >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< const double >::type scale(scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(qbisa(p, shape, scale));
    return rcpp_result_gen;
END_RCPP
}
// pbisa
NumericVector pbisa(NumericVector q, const double shape, const double scale);
RcppExport SEXP _teachingApps_pbisa(SEXP qSEXP, SEXP shapeSEXP, SEXP scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type q(qSEXP);
    Rcpp::traits::input_parameter< const double >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< const double >::type scale(scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(pbisa(q, shape, scale));
    return rcpp_result_gen;
END_RCPP
}
// dlbisa
NumericVector dlbisa(NumericVector z, const double shape);
RcppExport SEXP _teachingApps_dlbisa(SEXP zSEXP, SEXP shapeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type z(zSEXP);
    Rcpp::traits::input_parameter< const double >::type shape(shapeSEXP);
    rcpp_result_gen = Rcpp::wrap(dlbisa(z, shape));
    return rcpp_result_gen;
END_RCPP
}
// dbisa
NumericVector dbisa(NumericVector x, const double shape, const double scale);
RcppExport SEXP _teachingApps_dbisa(SEXP xSEXP, SEXP shapeSEXP, SEXP scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< const double >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< const double >::type scale(scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(dbisa(x, shape, scale));
    return rcpp_result_gen;
END_RCPP
}
// rbisa
NumericVector rbisa(const int n, const double shape, const double scale);
RcppExport SEXP _teachingApps_rbisa(SEXP nSEXP, SEXP shapeSEXP, SEXP scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type n(nSEXP);
    Rcpp::traits::input_parameter< const double >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< const double >::type scale(scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(rbisa(n, shape, scale));
    return rcpp_result_gen;
END_RCPP
}
// qlev
NumericVector qlev(NumericVector p, const double loc, const double scale);
RcppExport SEXP _teachingApps_qlev(SEXP pSEXP, SEXP locSEXP, SEXP scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< const double >::type loc(locSEXP);
    Rcpp::traits::input_parameter< const double >::type scale(scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(qlev(p, loc, scale));
    return rcpp_result_gen;
END_RCPP
}
// plev
NumericVector plev(NumericVector q, const double loc, const double scale);
RcppExport SEXP _teachingApps_plev(SEXP qSEXP, SEXP locSEXP, SEXP scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type q(qSEXP);
    Rcpp::traits::input_parameter< const double >::type loc(locSEXP);
    Rcpp::traits::input_parameter< const double >::type scale(scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(plev(q, loc, scale));
    return rcpp_result_gen;
END_RCPP
}
// dlev
NumericVector dlev(NumericVector x, const double loc, const double scale);
RcppExport SEXP _teachingApps_dlev(SEXP xSEXP, SEXP locSEXP, SEXP scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< const double >::type loc(locSEXP);
    Rcpp::traits::input_parameter< const double >::type scale(scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(dlev(x, loc, scale));
    return rcpp_result_gen;
END_RCPP
}
// rlev
NumericVector rlev(const int n, const double loc, const double scale);
RcppExport SEXP _teachingApps_rlev(SEXP nSEXP, SEXP locSEXP, SEXP scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type n(nSEXP);
    Rcpp::traits::input_parameter< const double >::type loc(locSEXP);
    Rcpp::traits::input_parameter< const double >::type scale(scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(rlev(n, loc, scale));
    return rcpp_result_gen;
END_RCPP
}
// likely2
LogicalVector likely2(NumericVector times, NumericVector cens, NumericVector params, const double maxll);
RcppExport SEXP _teachingApps_likely2(SEXP timesSEXP, SEXP censSEXP, SEXP paramsSEXP, SEXP maxllSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type times(timesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type cens(censSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< const double >::type maxll(maxllSEXP);
    rcpp_result_gen = Rcpp::wrap(likely2(times, cens, params, maxll));
    return rcpp_result_gen;
END_RCPP
}
// qsev
NumericVector qsev(NumericVector p, const double loc, const double scale);
RcppExport SEXP _teachingApps_qsev(SEXP pSEXP, SEXP locSEXP, SEXP scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< const double >::type loc(locSEXP);
    Rcpp::traits::input_parameter< const double >::type scale(scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(qsev(p, loc, scale));
    return rcpp_result_gen;
END_RCPP
}
// psev
NumericVector psev(NumericVector q, const double loc, const double scale);
RcppExport SEXP _teachingApps_psev(SEXP qSEXP, SEXP locSEXP, SEXP scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type q(qSEXP);
    Rcpp::traits::input_parameter< const double >::type loc(locSEXP);
    Rcpp::traits::input_parameter< const double >::type scale(scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(psev(q, loc, scale));
    return rcpp_result_gen;
END_RCPP
}
// dsev
NumericVector dsev(NumericVector x, const double loc, const double scale);
RcppExport SEXP _teachingApps_dsev(SEXP xSEXP, SEXP locSEXP, SEXP scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< const double >::type loc(locSEXP);
    Rcpp::traits::input_parameter< const double >::type scale(scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(dsev(x, loc, scale));
    return rcpp_result_gen;
END_RCPP
}
// rsev
NumericVector rsev(const int n, const double loc, const double scale);
RcppExport SEXP _teachingApps_rsev(SEXP nSEXP, SEXP locSEXP, SEXP scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type n(nSEXP);
    Rcpp::traits::input_parameter< const double >::type loc(locSEXP);
    Rcpp::traits::input_parameter< const double >::type scale(scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(rsev(n, loc, scale));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_teachingApps_dbeta4", (DL_FUNC) &_teachingApps_dbeta4, 6},
    {"_teachingApps_pbeta4", (DL_FUNC) &_teachingApps_pbeta4, 6},
    {"_teachingApps_qbeta4", (DL_FUNC) &_teachingApps_qbeta4, 5},
    {"_teachingApps_rbeta4", (DL_FUNC) &_teachingApps_rbeta4, 5},
    {"_teachingApps_qbisa", (DL_FUNC) &_teachingApps_qbisa, 3},
    {"_teachingApps_pbisa", (DL_FUNC) &_teachingApps_pbisa, 3},
    {"_teachingApps_dlbisa", (DL_FUNC) &_teachingApps_dlbisa, 2},
    {"_teachingApps_dbisa", (DL_FUNC) &_teachingApps_dbisa, 3},
    {"_teachingApps_rbisa", (DL_FUNC) &_teachingApps_rbisa, 3},
    {"_teachingApps_qlev", (DL_FUNC) &_teachingApps_qlev, 3},
    {"_teachingApps_plev", (DL_FUNC) &_teachingApps_plev, 3},
    {"_teachingApps_dlev", (DL_FUNC) &_teachingApps_dlev, 3},
    {"_teachingApps_rlev", (DL_FUNC) &_teachingApps_rlev, 3},
    {"_teachingApps_likely2", (DL_FUNC) &_teachingApps_likely2, 4},
    {"_teachingApps_qsev", (DL_FUNC) &_teachingApps_qsev, 3},
    {"_teachingApps_psev", (DL_FUNC) &_teachingApps_psev, 3},
    {"_teachingApps_dsev", (DL_FUNC) &_teachingApps_dsev, 3},
    {"_teachingApps_rsev", (DL_FUNC) &_teachingApps_rsev, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_teachingApps(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
