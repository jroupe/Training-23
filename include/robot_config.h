#include "main.h"

// Declare hardware variables
extern Controller controller;

extern Motor front_left_mtr;
extern Motor front_right_mtr;
extern Motor back_left_mtr;
extern Motor back_right_mtr;
extern Motor left_mtr;
extern Motor right_mtr;

extern pros::Imu imu_sensor;
extern pros::Gps gps_sensor;
extern pros::Distance dist_sensor;

extern Motor lift_left;
extern Motor lift_right;
extern Motor ring_left;
extern Motor ring_right;

extern pros::ADIDigitalOut claw;
extern pros::ADIDigitalOut back;
extern pros::ADIDigitalOut deploy;