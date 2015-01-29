#include "takeoff.h"

bool Takeoff::ExecuteCycle() {
  update_curr_height();
  if(curr_height() < END_HEIGHT) {
    flight_control()->execute(up_cntrl(), CalculateThrust(), 0);
    return false;
  }
  else return true;
}

/** TODO: Calculate necessary thrust value from current height **/ 
int Takeoff::CalculateThrust() {
  return 1;
}
