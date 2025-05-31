#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples
inline pros::Optical colorSensor(2);
inline pros::Distance distSensor(3);
inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');