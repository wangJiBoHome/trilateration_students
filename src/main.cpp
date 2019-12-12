#include <trilateration/Robot.h>
#include <trilateration/vibes.h>
#include <trilateration/Kalman.h>
#include <iostream>
#include <unistd.h>


int main() {

  vibes::beginDrawing();
  vibes::newFigure("trilateration");
  vibes::setFigureProperties("trilateration", vibesParams("x", 100, "y", 100, "width", 800, "height", 800));
  vibes::axisLimits(-15, 15, -15, 15);
  vibes::axisLabels("x", "y", "trilateration");

  double dt = 0.01, T = 50, t = 0;

  std::vector<Eigen::Vector2d> beacons = {Eigen::Vector2d(-11, 11),
                                          Eigen::Vector2d(-11, -11),
                                          Eigen::Vector2d(11, 0)};

  while (t < T) {
    vibes::clearFigure("trilateration");
    
    t += dt;
    usleep(dt * 1e6);
  }

  vibes::endDrawing();
  return EXIT_SUCCESS;
}
