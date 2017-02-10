#include <R.h>
#include <Rinternals.h>

/*
  Prototype declarations for all native routines in spatstat.utils package

  Automatically generated - do not edit! 

*/

/*
  
                  Functions invoked by .C

*/

void primefax(int *, int *, int *);
void irevcumsum(int *, int *); void drevcumsum(double *, int *); 
void fastinterv(double *, int *, double *, int *, int *);
void Cmatchxy(int *, double *, double *, int *, double *, double *, int *); 
void inxyp(double *, double *, double *, double *, int *, int *, int *, int *);
void prdist2segs(double *, double *, int *, double *, double *, double *, double *, int *, double *, double *); 
void nndist2segs(double *, double *, int *, double *, double *, double *, double *, int *, double *, double *, int *);
/*

             Functions invoked by .Call

*/
SEXP circXseg(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP); 
SEXP circMseg(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP); 
SEXP circXseg(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);