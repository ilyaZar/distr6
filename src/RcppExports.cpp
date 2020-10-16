// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// C_Choose
long double C_Choose(int x, int y);
RcppExport SEXP _distr6_C_Choose(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(C_Choose(x, y));
    return rcpp_result_gen;
END_RCPP
}
// C_ArcsinePdf
NumericMatrix C_ArcsinePdf(NumericVector x, NumericVector min, NumericVector max, bool logp);
RcppExport SEXP _distr6_C_ArcsinePdf(SEXP xSEXP, SEXP minSEXP, SEXP maxSEXP, SEXP logpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type min(minSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type max(maxSEXP);
    Rcpp::traits::input_parameter< bool >::type logp(logpSEXP);
    rcpp_result_gen = Rcpp::wrap(C_ArcsinePdf(x, min, max, logp));
    return rcpp_result_gen;
END_RCPP
}
// C_ArcsineCdf
NumericMatrix C_ArcsineCdf(NumericVector x, NumericVector min, NumericVector max, bool lower, bool logp);
RcppExport SEXP _distr6_C_ArcsineCdf(SEXP xSEXP, SEXP minSEXP, SEXP maxSEXP, SEXP lowerSEXP, SEXP logpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type min(minSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type max(maxSEXP);
    Rcpp::traits::input_parameter< bool >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< bool >::type logp(logpSEXP);
    rcpp_result_gen = Rcpp::wrap(C_ArcsineCdf(x, min, max, lower, logp));
    return rcpp_result_gen;
END_RCPP
}
// C_ArcsineQuantile
NumericMatrix C_ArcsineQuantile(NumericVector x, NumericVector min, NumericVector max, bool lower, bool logp);
RcppExport SEXP _distr6_C_ArcsineQuantile(SEXP xSEXP, SEXP minSEXP, SEXP maxSEXP, SEXP lowerSEXP, SEXP logpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type min(minSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type max(maxSEXP);
    Rcpp::traits::input_parameter< bool >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< bool >::type logp(logpSEXP);
    rcpp_result_gen = Rcpp::wrap(C_ArcsineQuantile(x, min, max, lower, logp));
    return rcpp_result_gen;
END_RCPP
}
// C_DegeneratePdf
NumericMatrix C_DegeneratePdf(NumericVector x, NumericVector mean, bool logp);
RcppExport SEXP _distr6_C_DegeneratePdf(SEXP xSEXP, SEXP meanSEXP, SEXP logpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< bool >::type logp(logpSEXP);
    rcpp_result_gen = Rcpp::wrap(C_DegeneratePdf(x, mean, logp));
    return rcpp_result_gen;
END_RCPP
}
// C_DegenerateCdf
NumericMatrix C_DegenerateCdf(NumericVector x, NumericVector mean, bool lower, bool logp);
RcppExport SEXP _distr6_C_DegenerateCdf(SEXP xSEXP, SEXP meanSEXP, SEXP lowerSEXP, SEXP logpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< bool >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< bool >::type logp(logpSEXP);
    rcpp_result_gen = Rcpp::wrap(C_DegenerateCdf(x, mean, lower, logp));
    return rcpp_result_gen;
END_RCPP
}
// C_DegenerateQuantile
NumericMatrix C_DegenerateQuantile(NumericVector x, NumericVector mean, bool lower, bool logp);
RcppExport SEXP _distr6_C_DegenerateQuantile(SEXP xSEXP, SEXP meanSEXP, SEXP lowerSEXP, SEXP logpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< bool >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< bool >::type logp(logpSEXP);
    rcpp_result_gen = Rcpp::wrap(C_DegenerateQuantile(x, mean, lower, logp));
    return rcpp_result_gen;
END_RCPP
}
// C_EmpiricalMVPdf
NumericVector C_EmpiricalMVPdf(NumericMatrix x, NumericMatrix data);
RcppExport SEXP _distr6_C_EmpiricalMVPdf(SEXP xSEXP, SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    rcpp_result_gen = Rcpp::wrap(C_EmpiricalMVPdf(x, data));
    return rcpp_result_gen;
END_RCPP
}
// C_EmpiricalMVCdf
NumericVector C_EmpiricalMVCdf(NumericMatrix x, NumericMatrix data);
RcppExport SEXP _distr6_C_EmpiricalMVCdf(SEXP xSEXP, SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    rcpp_result_gen = Rcpp::wrap(C_EmpiricalMVCdf(x, data));
    return rcpp_result_gen;
END_RCPP
}
// C_ShiftedLoglogisticPdf
NumericMatrix C_ShiftedLoglogisticPdf(NumericVector x, NumericVector location, NumericVector shape, NumericVector scale, bool logp);
RcppExport SEXP _distr6_C_ShiftedLoglogisticPdf(SEXP xSEXP, SEXP locationSEXP, SEXP shapeSEXP, SEXP scaleSEXP, SEXP logpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type location(locationSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< bool >::type logp(logpSEXP);
    rcpp_result_gen = Rcpp::wrap(C_ShiftedLoglogisticPdf(x, location, shape, scale, logp));
    return rcpp_result_gen;
END_RCPP
}
// C_ShiftedLoglogisticCdf
NumericMatrix C_ShiftedLoglogisticCdf(NumericVector x, NumericVector location, NumericVector shape, NumericVector scale, bool lower, bool logp);
RcppExport SEXP _distr6_C_ShiftedLoglogisticCdf(SEXP xSEXP, SEXP locationSEXP, SEXP shapeSEXP, SEXP scaleSEXP, SEXP lowerSEXP, SEXP logpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type location(locationSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< bool >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< bool >::type logp(logpSEXP);
    rcpp_result_gen = Rcpp::wrap(C_ShiftedLoglogisticCdf(x, location, shape, scale, lower, logp));
    return rcpp_result_gen;
END_RCPP
}
// C_ShiftedLoglogisticQuantile
NumericMatrix C_ShiftedLoglogisticQuantile(NumericVector x, NumericVector location, NumericVector shape, NumericVector scale, bool lower, bool logp);
RcppExport SEXP _distr6_C_ShiftedLoglogisticQuantile(SEXP xSEXP, SEXP locationSEXP, SEXP shapeSEXP, SEXP scaleSEXP, SEXP lowerSEXP, SEXP logpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type location(locationSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< bool >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< bool >::type logp(logpSEXP);
    rcpp_result_gen = Rcpp::wrap(C_ShiftedLoglogisticQuantile(x, location, shape, scale, lower, logp));
    return rcpp_result_gen;
END_RCPP
}
// C_WeightedDiscretePdf
NumericVector C_WeightedDiscretePdf(NumericVector x, NumericVector data, NumericVector pdf, bool logp);
RcppExport SEXP _distr6_C_WeightedDiscretePdf(SEXP xSEXP, SEXP dataSEXP, SEXP pdfSEXP, SEXP logpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type data(dataSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pdf(pdfSEXP);
    Rcpp::traits::input_parameter< bool >::type logp(logpSEXP);
    rcpp_result_gen = Rcpp::wrap(C_WeightedDiscretePdf(x, data, pdf, logp));
    return rcpp_result_gen;
END_RCPP
}
// C_Vec_WeightedDiscretePdf
NumericMatrix C_Vec_WeightedDiscretePdf(NumericVector x, NumericMatrix data, NumericMatrix pdf, bool logp);
RcppExport SEXP _distr6_C_Vec_WeightedDiscretePdf(SEXP xSEXP, SEXP dataSEXP, SEXP pdfSEXP, SEXP logpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type pdf(pdfSEXP);
    Rcpp::traits::input_parameter< bool >::type logp(logpSEXP);
    rcpp_result_gen = Rcpp::wrap(C_Vec_WeightedDiscretePdf(x, data, pdf, logp));
    return rcpp_result_gen;
END_RCPP
}
// C_WeightedDiscreteCdf
NumericVector C_WeightedDiscreteCdf(NumericVector x, NumericVector data, NumericVector cdf, bool lower, bool logp);
RcppExport SEXP _distr6_C_WeightedDiscreteCdf(SEXP xSEXP, SEXP dataSEXP, SEXP cdfSEXP, SEXP lowerSEXP, SEXP logpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type data(dataSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type cdf(cdfSEXP);
    Rcpp::traits::input_parameter< bool >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< bool >::type logp(logpSEXP);
    rcpp_result_gen = Rcpp::wrap(C_WeightedDiscreteCdf(x, data, cdf, lower, logp));
    return rcpp_result_gen;
END_RCPP
}
// C_Vec_WeightedDiscreteCdf
NumericMatrix C_Vec_WeightedDiscreteCdf(NumericVector x, NumericMatrix data, NumericMatrix cdf, bool lower, bool logp);
RcppExport SEXP _distr6_C_Vec_WeightedDiscreteCdf(SEXP xSEXP, SEXP dataSEXP, SEXP cdfSEXP, SEXP lowerSEXP, SEXP logpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type cdf(cdfSEXP);
    Rcpp::traits::input_parameter< bool >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< bool >::type logp(logpSEXP);
    rcpp_result_gen = Rcpp::wrap(C_Vec_WeightedDiscreteCdf(x, data, cdf, lower, logp));
    return rcpp_result_gen;
END_RCPP
}
// C_WeightedDiscreteQuantile
NumericVector C_WeightedDiscreteQuantile(NumericVector x, NumericVector data, NumericVector cdf, bool lower, bool logp);
RcppExport SEXP _distr6_C_WeightedDiscreteQuantile(SEXP xSEXP, SEXP dataSEXP, SEXP cdfSEXP, SEXP lowerSEXP, SEXP logpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type data(dataSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type cdf(cdfSEXP);
    Rcpp::traits::input_parameter< bool >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< bool >::type logp(logpSEXP);
    rcpp_result_gen = Rcpp::wrap(C_WeightedDiscreteQuantile(x, data, cdf, lower, logp));
    return rcpp_result_gen;
END_RCPP
}
// C_Vec_WeightedDiscreteQuantile
NumericMatrix C_Vec_WeightedDiscreteQuantile(NumericVector x, NumericMatrix data, NumericMatrix cdf, bool lower, bool logp);
RcppExport SEXP _distr6_C_Vec_WeightedDiscreteQuantile(SEXP xSEXP, SEXP dataSEXP, SEXP cdfSEXP, SEXP lowerSEXP, SEXP logpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type cdf(cdfSEXP);
    Rcpp::traits::input_parameter< bool >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< bool >::type logp(logpSEXP);
    rcpp_result_gen = Rcpp::wrap(C_Vec_WeightedDiscreteQuantile(x, data, cdf, lower, logp));
    return rcpp_result_gen;
END_RCPP
}
// C_NumericCdf_Discrete
NumericVector C_NumericCdf_Discrete(NumericVector q, NumericVector x, NumericVector pdf, bool lower, bool logp);
RcppExport SEXP _distr6_C_NumericCdf_Discrete(SEXP qSEXP, SEXP xSEXP, SEXP pdfSEXP, SEXP lowerSEXP, SEXP logpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type q(qSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pdf(pdfSEXP);
    Rcpp::traits::input_parameter< bool >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< bool >::type logp(logpSEXP);
    rcpp_result_gen = Rcpp::wrap(C_NumericCdf_Discrete(q, x, pdf, lower, logp));
    return rcpp_result_gen;
END_RCPP
}
// C_NumericQuantile
NumericVector C_NumericQuantile(NumericVector p, NumericVector x, NumericVector cdf, bool lower, bool logp);
RcppExport SEXP _distr6_C_NumericQuantile(SEXP pSEXP, SEXP xSEXP, SEXP cdfSEXP, SEXP lowerSEXP, SEXP logpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type cdf(cdfSEXP);
    Rcpp::traits::input_parameter< bool >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< bool >::type logp(logpSEXP);
    rcpp_result_gen = Rcpp::wrap(C_NumericQuantile(p, x, cdf, lower, logp));
    return rcpp_result_gen;
END_RCPP
}
// C_CosineKernelPdf
NumericVector C_CosineKernelPdf(NumericVector x, bool logp);
RcppExport SEXP _distr6_C_CosineKernelPdf(SEXP xSEXP, SEXP logpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type logp(logpSEXP);
    rcpp_result_gen = Rcpp::wrap(C_CosineKernelPdf(x, logp));
    return rcpp_result_gen;
END_RCPP
}
// C_CosineKernelCdf
NumericVector C_CosineKernelCdf(NumericVector x, bool lower, bool logp);
RcppExport SEXP _distr6_C_CosineKernelCdf(SEXP xSEXP, SEXP lowerSEXP, SEXP logpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< bool >::type logp(logpSEXP);
    rcpp_result_gen = Rcpp::wrap(C_CosineKernelCdf(x, lower, logp));
    return rcpp_result_gen;
END_RCPP
}
// C_CosineKernelQuantile
NumericVector C_CosineKernelQuantile(NumericVector x, bool lower, bool logp);
RcppExport SEXP _distr6_C_CosineKernelQuantile(SEXP xSEXP, SEXP lowerSEXP, SEXP logpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< bool >::type logp(logpSEXP);
    rcpp_result_gen = Rcpp::wrap(C_CosineKernelQuantile(x, lower, logp));
    return rcpp_result_gen;
END_RCPP
}
// C_EpanechnikovKernelPdf
NumericVector C_EpanechnikovKernelPdf(NumericVector x, bool logp);
RcppExport SEXP _distr6_C_EpanechnikovKernelPdf(SEXP xSEXP, SEXP logpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type logp(logpSEXP);
    rcpp_result_gen = Rcpp::wrap(C_EpanechnikovKernelPdf(x, logp));
    return rcpp_result_gen;
END_RCPP
}
// C_EpanechnikovKernelCdf
NumericVector C_EpanechnikovKernelCdf(NumericVector x, bool lower, bool logp);
RcppExport SEXP _distr6_C_EpanechnikovKernelCdf(SEXP xSEXP, SEXP lowerSEXP, SEXP logpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< bool >::type logp(logpSEXP);
    rcpp_result_gen = Rcpp::wrap(C_EpanechnikovKernelCdf(x, lower, logp));
    return rcpp_result_gen;
END_RCPP
}
// C_LogisticKernelPdf
NumericVector C_LogisticKernelPdf(NumericVector x, bool logp);
RcppExport SEXP _distr6_C_LogisticKernelPdf(SEXP xSEXP, SEXP logpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type logp(logpSEXP);
    rcpp_result_gen = Rcpp::wrap(C_LogisticKernelPdf(x, logp));
    return rcpp_result_gen;
END_RCPP
}
// C_LogisticKernelCdf
NumericVector C_LogisticKernelCdf(NumericVector x, bool lower, bool logp);
RcppExport SEXP _distr6_C_LogisticKernelCdf(SEXP xSEXP, SEXP lowerSEXP, SEXP logpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< bool >::type logp(logpSEXP);
    rcpp_result_gen = Rcpp::wrap(C_LogisticKernelCdf(x, lower, logp));
    return rcpp_result_gen;
END_RCPP
}
// C_LogisticKernelQuantile
NumericVector C_LogisticKernelQuantile(NumericVector x, bool lower, bool logp);
RcppExport SEXP _distr6_C_LogisticKernelQuantile(SEXP xSEXP, SEXP lowerSEXP, SEXP logpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< bool >::type logp(logpSEXP);
    rcpp_result_gen = Rcpp::wrap(C_LogisticKernelQuantile(x, lower, logp));
    return rcpp_result_gen;
END_RCPP
}
// C_NormalKernelPdf
NumericVector C_NormalKernelPdf(NumericVector x, bool logp);
RcppExport SEXP _distr6_C_NormalKernelPdf(SEXP xSEXP, SEXP logpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type logp(logpSEXP);
    rcpp_result_gen = Rcpp::wrap(C_NormalKernelPdf(x, logp));
    return rcpp_result_gen;
END_RCPP
}
// C_QuarticKernelPdf
NumericVector C_QuarticKernelPdf(NumericVector x, bool logp);
RcppExport SEXP _distr6_C_QuarticKernelPdf(SEXP xSEXP, SEXP logpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type logp(logpSEXP);
    rcpp_result_gen = Rcpp::wrap(C_QuarticKernelPdf(x, logp));
    return rcpp_result_gen;
END_RCPP
}
// C_QuarticKernelCdf
NumericVector C_QuarticKernelCdf(NumericVector x, bool lower, bool logp);
RcppExport SEXP _distr6_C_QuarticKernelCdf(SEXP xSEXP, SEXP lowerSEXP, SEXP logpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< bool >::type logp(logpSEXP);
    rcpp_result_gen = Rcpp::wrap(C_QuarticKernelCdf(x, lower, logp));
    return rcpp_result_gen;
END_RCPP
}
// C_SigmoidKernelPdf
NumericVector C_SigmoidKernelPdf(NumericVector x, bool logp);
RcppExport SEXP _distr6_C_SigmoidKernelPdf(SEXP xSEXP, SEXP logpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type logp(logpSEXP);
    rcpp_result_gen = Rcpp::wrap(C_SigmoidKernelPdf(x, logp));
    return rcpp_result_gen;
END_RCPP
}
// C_SilvermanKernelPdf
NumericVector C_SilvermanKernelPdf(NumericVector x, bool logp);
RcppExport SEXP _distr6_C_SilvermanKernelPdf(SEXP xSEXP, SEXP logpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type logp(logpSEXP);
    rcpp_result_gen = Rcpp::wrap(C_SilvermanKernelPdf(x, logp));
    return rcpp_result_gen;
END_RCPP
}
// C_SilvermanKernelCdf
NumericVector C_SilvermanKernelCdf(NumericVector x, bool lower, bool logp);
RcppExport SEXP _distr6_C_SilvermanKernelCdf(SEXP xSEXP, SEXP lowerSEXP, SEXP logpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< bool >::type logp(logpSEXP);
    rcpp_result_gen = Rcpp::wrap(C_SilvermanKernelCdf(x, lower, logp));
    return rcpp_result_gen;
END_RCPP
}
// C_TriangularKernelPdf
NumericVector C_TriangularKernelPdf(NumericVector x, bool logp);
RcppExport SEXP _distr6_C_TriangularKernelPdf(SEXP xSEXP, SEXP logpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type logp(logpSEXP);
    rcpp_result_gen = Rcpp::wrap(C_TriangularKernelPdf(x, logp));
    return rcpp_result_gen;
END_RCPP
}
// C_TriangularKernelCdf
NumericVector C_TriangularKernelCdf(NumericVector x, bool lower, bool logp);
RcppExport SEXP _distr6_C_TriangularKernelCdf(SEXP xSEXP, SEXP lowerSEXP, SEXP logpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< bool >::type logp(logpSEXP);
    rcpp_result_gen = Rcpp::wrap(C_TriangularKernelCdf(x, lower, logp));
    return rcpp_result_gen;
END_RCPP
}
// C_TriangularKernelQuantile
NumericVector C_TriangularKernelQuantile(NumericVector x, bool lower, bool logp);
RcppExport SEXP _distr6_C_TriangularKernelQuantile(SEXP xSEXP, SEXP lowerSEXP, SEXP logpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< bool >::type logp(logpSEXP);
    rcpp_result_gen = Rcpp::wrap(C_TriangularKernelQuantile(x, lower, logp));
    return rcpp_result_gen;
END_RCPP
}
// C_TricubeKernelPdf
NumericVector C_TricubeKernelPdf(NumericVector x, bool logp);
RcppExport SEXP _distr6_C_TricubeKernelPdf(SEXP xSEXP, SEXP logpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type logp(logpSEXP);
    rcpp_result_gen = Rcpp::wrap(C_TricubeKernelPdf(x, logp));
    return rcpp_result_gen;
END_RCPP
}
// C_TricubeKernelCdf
NumericVector C_TricubeKernelCdf(NumericVector x, bool lower, bool logp);
RcppExport SEXP _distr6_C_TricubeKernelCdf(SEXP xSEXP, SEXP lowerSEXP, SEXP logpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< bool >::type logp(logpSEXP);
    rcpp_result_gen = Rcpp::wrap(C_TricubeKernelCdf(x, lower, logp));
    return rcpp_result_gen;
END_RCPP
}
// C_TriweightKernelPdf
NumericVector C_TriweightKernelPdf(NumericVector x, bool logp);
RcppExport SEXP _distr6_C_TriweightKernelPdf(SEXP xSEXP, SEXP logpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type logp(logpSEXP);
    rcpp_result_gen = Rcpp::wrap(C_TriweightKernelPdf(x, logp));
    return rcpp_result_gen;
END_RCPP
}
// C_TriweightKernelCdf
NumericVector C_TriweightKernelCdf(NumericVector x, bool lower, bool logp);
RcppExport SEXP _distr6_C_TriweightKernelCdf(SEXP xSEXP, SEXP lowerSEXP, SEXP logpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< bool >::type logp(logpSEXP);
    rcpp_result_gen = Rcpp::wrap(C_TriweightKernelCdf(x, lower, logp));
    return rcpp_result_gen;
END_RCPP
}
// C_UniformKernelPdf
NumericVector C_UniformKernelPdf(NumericVector x, bool logp);
RcppExport SEXP _distr6_C_UniformKernelPdf(SEXP xSEXP, SEXP logpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type logp(logpSEXP);
    rcpp_result_gen = Rcpp::wrap(C_UniformKernelPdf(x, logp));
    return rcpp_result_gen;
END_RCPP
}
// C_UniformKernelCdf
NumericVector C_UniformKernelCdf(NumericVector x, bool lower, bool logp);
RcppExport SEXP _distr6_C_UniformKernelCdf(SEXP xSEXP, SEXP lowerSEXP, SEXP logpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< bool >::type logp(logpSEXP);
    rcpp_result_gen = Rcpp::wrap(C_UniformKernelCdf(x, lower, logp));
    return rcpp_result_gen;
END_RCPP
}
// C_UniformKernelQuantile
NumericVector C_UniformKernelQuantile(NumericVector x, bool lower, bool logp);
RcppExport SEXP _distr6_C_UniformKernelQuantile(SEXP xSEXP, SEXP lowerSEXP, SEXP logpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< bool >::type logp(logpSEXP);
    rcpp_result_gen = Rcpp::wrap(C_UniformKernelQuantile(x, lower, logp));
    return rcpp_result_gen;
END_RCPP
}
// C_dpq
NumericMatrix C_dpq(std::string fun, NumericVector x, std::list<NumericVector> args, int lower, int log);
RcppExport SEXP _distr6_C_dpq(SEXP funSEXP, SEXP xSEXP, SEXP argsSEXP, SEXP lowerSEXP, SEXP logSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type fun(funSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::list<NumericVector> >::type args(argsSEXP);
    Rcpp::traits::input_parameter< int >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< int >::type log(logSEXP);
    rcpp_result_gen = Rcpp::wrap(C_dpq(fun, x, args, lower, log));
    return rcpp_result_gen;
END_RCPP
}
// C_r
NumericMatrix C_r(std::string fun, int x, std::list<NumericVector> args);
RcppExport SEXP _distr6_C_r(SEXP funSEXP, SEXP xSEXP, SEXP argsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type fun(funSEXP);
    Rcpp::traits::input_parameter< int >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::list<NumericVector> >::type args(argsSEXP);
    rcpp_result_gen = Rcpp::wrap(C_r(fun, x, args));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_distr6_C_Choose", (DL_FUNC) &_distr6_C_Choose, 2},
    {"_distr6_C_ArcsinePdf", (DL_FUNC) &_distr6_C_ArcsinePdf, 4},
    {"_distr6_C_ArcsineCdf", (DL_FUNC) &_distr6_C_ArcsineCdf, 5},
    {"_distr6_C_ArcsineQuantile", (DL_FUNC) &_distr6_C_ArcsineQuantile, 5},
    {"_distr6_C_DegeneratePdf", (DL_FUNC) &_distr6_C_DegeneratePdf, 3},
    {"_distr6_C_DegenerateCdf", (DL_FUNC) &_distr6_C_DegenerateCdf, 4},
    {"_distr6_C_DegenerateQuantile", (DL_FUNC) &_distr6_C_DegenerateQuantile, 4},
    {"_distr6_C_EmpiricalMVPdf", (DL_FUNC) &_distr6_C_EmpiricalMVPdf, 2},
    {"_distr6_C_EmpiricalMVCdf", (DL_FUNC) &_distr6_C_EmpiricalMVCdf, 2},
    {"_distr6_C_ShiftedLoglogisticPdf", (DL_FUNC) &_distr6_C_ShiftedLoglogisticPdf, 5},
    {"_distr6_C_ShiftedLoglogisticCdf", (DL_FUNC) &_distr6_C_ShiftedLoglogisticCdf, 6},
    {"_distr6_C_ShiftedLoglogisticQuantile", (DL_FUNC) &_distr6_C_ShiftedLoglogisticQuantile, 6},
    {"_distr6_C_WeightedDiscretePdf", (DL_FUNC) &_distr6_C_WeightedDiscretePdf, 4},
    {"_distr6_C_Vec_WeightedDiscretePdf", (DL_FUNC) &_distr6_C_Vec_WeightedDiscretePdf, 4},
    {"_distr6_C_WeightedDiscreteCdf", (DL_FUNC) &_distr6_C_WeightedDiscreteCdf, 5},
    {"_distr6_C_Vec_WeightedDiscreteCdf", (DL_FUNC) &_distr6_C_Vec_WeightedDiscreteCdf, 5},
    {"_distr6_C_WeightedDiscreteQuantile", (DL_FUNC) &_distr6_C_WeightedDiscreteQuantile, 5},
    {"_distr6_C_Vec_WeightedDiscreteQuantile", (DL_FUNC) &_distr6_C_Vec_WeightedDiscreteQuantile, 5},
    {"_distr6_C_NumericCdf_Discrete", (DL_FUNC) &_distr6_C_NumericCdf_Discrete, 5},
    {"_distr6_C_NumericQuantile", (DL_FUNC) &_distr6_C_NumericQuantile, 5},
    {"_distr6_C_CosineKernelPdf", (DL_FUNC) &_distr6_C_CosineKernelPdf, 2},
    {"_distr6_C_CosineKernelCdf", (DL_FUNC) &_distr6_C_CosineKernelCdf, 3},
    {"_distr6_C_CosineKernelQuantile", (DL_FUNC) &_distr6_C_CosineKernelQuantile, 3},
    {"_distr6_C_EpanechnikovKernelPdf", (DL_FUNC) &_distr6_C_EpanechnikovKernelPdf, 2},
    {"_distr6_C_EpanechnikovKernelCdf", (DL_FUNC) &_distr6_C_EpanechnikovKernelCdf, 3},
    {"_distr6_C_LogisticKernelPdf", (DL_FUNC) &_distr6_C_LogisticKernelPdf, 2},
    {"_distr6_C_LogisticKernelCdf", (DL_FUNC) &_distr6_C_LogisticKernelCdf, 3},
    {"_distr6_C_LogisticKernelQuantile", (DL_FUNC) &_distr6_C_LogisticKernelQuantile, 3},
    {"_distr6_C_NormalKernelPdf", (DL_FUNC) &_distr6_C_NormalKernelPdf, 2},
    {"_distr6_C_QuarticKernelPdf", (DL_FUNC) &_distr6_C_QuarticKernelPdf, 2},
    {"_distr6_C_QuarticKernelCdf", (DL_FUNC) &_distr6_C_QuarticKernelCdf, 3},
    {"_distr6_C_SigmoidKernelPdf", (DL_FUNC) &_distr6_C_SigmoidKernelPdf, 2},
    {"_distr6_C_SilvermanKernelPdf", (DL_FUNC) &_distr6_C_SilvermanKernelPdf, 2},
    {"_distr6_C_SilvermanKernelCdf", (DL_FUNC) &_distr6_C_SilvermanKernelCdf, 3},
    {"_distr6_C_TriangularKernelPdf", (DL_FUNC) &_distr6_C_TriangularKernelPdf, 2},
    {"_distr6_C_TriangularKernelCdf", (DL_FUNC) &_distr6_C_TriangularKernelCdf, 3},
    {"_distr6_C_TriangularKernelQuantile", (DL_FUNC) &_distr6_C_TriangularKernelQuantile, 3},
    {"_distr6_C_TricubeKernelPdf", (DL_FUNC) &_distr6_C_TricubeKernelPdf, 2},
    {"_distr6_C_TricubeKernelCdf", (DL_FUNC) &_distr6_C_TricubeKernelCdf, 3},
    {"_distr6_C_TriweightKernelPdf", (DL_FUNC) &_distr6_C_TriweightKernelPdf, 2},
    {"_distr6_C_TriweightKernelCdf", (DL_FUNC) &_distr6_C_TriweightKernelCdf, 3},
    {"_distr6_C_UniformKernelPdf", (DL_FUNC) &_distr6_C_UniformKernelPdf, 2},
    {"_distr6_C_UniformKernelCdf", (DL_FUNC) &_distr6_C_UniformKernelCdf, 3},
    {"_distr6_C_UniformKernelQuantile", (DL_FUNC) &_distr6_C_UniformKernelQuantile, 3},
    {"_distr6_C_dpq", (DL_FUNC) &_distr6_C_dpq, 5},
    {"_distr6_C_r", (DL_FUNC) &_distr6_C_r, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_distr6(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
