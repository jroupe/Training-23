#include "main.h"
#include "robot_config.h"
/**
 * Runs initialization code. This occurs as soon as the program is started.
 *
 * All other competition modes are blocked by initialize; it is recommended
 * to keep execution time for this mode under a few seconds.
 */
void initialize() {
  pros::lcd::initialize();
  // pros::lcd::set_text(1, "Hello PROS User!");
}

// Runs while the robot is in the disabled state
void disabled() {}

// Runs after initialize() and before autonomous
void competition_initialize() {}

// Runs the user autonomous code.
void autonomous() {}

// Runs the operator control code.
void opcontrol() {
  pros::Controller master(pros::E_CONTROLLER_MASTER);

  pros::delay(20);
}
