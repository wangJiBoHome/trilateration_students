#include <trilateration/Robot.h>
#include <trilateration/vibes.h>
#include <random>
#include <iostream>

void Kalman::display() const {
  vibes::drawTank(0, 0, 0, 1, "g[g]");
}

Eigen::VectorXd Robot::randn(const Eigen::VectorXd &sigma) const {
  Eigen::VectorXd res = sigma;
  std::mt19937 gen((std::random_device()) ());
  for (uint i = 0; i < sigma.rows(); ++i) {
    std::normal_distribution<double> nd(0, sigma(i));
    res(i) = nd(gen);
  }
  return res;
}
