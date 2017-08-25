#ifndef DTB_CT_H
#define DTB_CT_H

#include <Rcpp.h>
using namespace Rcpp;

#include <DT/dt.h> // Dual Tree definitions
#include <DT/MST/dtb.h> // Dual Tree Borvuka definitions
#include <metrics.h> // metric definitions

class DTB_CT : public DualTreeBoruvka {
public:
  NumericVector r_k; // contains vector of radii
  double alpha; // extends the connection radius
  int type;
  DTB_CT(const NumericMatrix& q_x, Metric& m, NumericMatrix& r_x = emptyMatrix, List& config = default_params);

  // Override the istance calculation to bound the connection radii
  ANNdist computeDistance(const int q_idx, const int r_idx,
                                  ANNdist eps1 = ANN_DIST_INF,
                                  ANNdist eps2 = ANN_DIST_INF) override;
  // Computes the connection radius, i.e. the linkage criterion
  double getConnectionRadius(double dist_ij, double radius_i, double radius_j, double alpha, const int type);
};


#endif