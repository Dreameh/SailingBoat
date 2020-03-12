#ifndef SAILINGBOAT_MODULES_CALCULATIONUNIT_CALCULATION_UNIT_H_
#define SAILINGBOAT_MODULES_CALCULATIONUNIT_CALCULATION_UNIT_H_
#include "../../Utilities/DataContainers/vec2.hpp"
#include "../../Utilities/DataContainers/gps_position.hpp"

class CalculationUnit {
 public:
  double CalculateRudderPosition(Vec2 vector);
  double CalculateSailPosition(Vec2 vector);
  double CalculateAngleOfApproach(double destination_bearing, double wind_bearing);
  GPSPosition CalculateWaypoint(GPSPosition current_position, double distance, double direction);
  double CalculateDistance(GPSPosition point_a, GPSPosition point_b);
};

#endif // SAILINGBOAT_MODULES_CALCULATIONUNIT_CALCULATION_UNIT_H_
