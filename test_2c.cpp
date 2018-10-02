#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "JacobiALG.h"

TEST_CASE("largest offdiag element"){

  int n = 5;
  double rho_0 = 0.0;
  double rho_n = 1.0;
  double h = (rho_n - rho_0)/double(n);

  mat testmat = toepliz(n, h);
  testmat.diag() = 0;

  int i, l;


  double expected = testmat.max();
  double maximum = maxoffdiag(testmat, l, k, n);
  REQUIRE(maximum == expected);
}

TEST_CASE("expected eigenvalues"){

  int n = 5;
  double rho_0 = 0.0;
  double rho_n = 1.0;
  double h = (rho_n - rho_0)/double(n);

  mat testmat = toepliz(n, h);

  REQUIRE()
}

//TEST_CASE(orthogonal_matrix){
//
//}
