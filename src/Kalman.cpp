#include <trilateration/Kalman.h>
#include <trilateration/vibes.h>

void Kalman::display() const {
  vibes::drawTank(0, 0, 0, 1, "r[r]");
}
