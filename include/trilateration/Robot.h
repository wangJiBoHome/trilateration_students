#ifndef _ROBOT_H_
#define _ROBOT_H_

#include <eigen3/Eigen/Dense>
#include <vector>
#include <random>


class Robot {
private:

public:

  void display() const;

  Eigen::VectorXd randn(const Eigen::VectorXd &sigma) const;
};

#endif
