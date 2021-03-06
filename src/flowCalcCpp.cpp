#include "RcppArmadillo.h"

// [[Rcpp::depends(RcppArmadillo)]]

using namespace Rcpp;

//' Matrix calculation in RcppArmadillo.
//'
//' @param Am matrix
//' @param Cm matrix
//' @return Matrix, that is \code{inv(Am)%*%Cm}
// [[Rcpp::export]]
Rcpp::List flowCalcCpp(const arma::mat &Am, const arma::mat &Cm) 
{
    arma::mat B = inv(Am) * Cm;
    return Rcpp::List::create( Rcpp::Named("Imp") = B);
}