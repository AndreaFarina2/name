#ifndef REGRESSION_HPP
#define REGRESSION_HPP

#include <vector>

struct Result {
  double A;
  double B;
};

class Regression {
  struct point {
    double x;
    double y;
  };

  std::vector<point> points_{};
  
 public:
  int size() const;
  void add(double x, double y);
  Result fit() const;
};

Result fit(Regression const &reg);

#endif
