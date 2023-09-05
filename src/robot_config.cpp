#include "robot_config.h"

// Initialize hardware variables
Controller controller(ControllerId::master);

Motor front_left_mtr(-8);
Motor front_right_mtr(3);
Motor back_left_mtr(-9);
Motor back_right_mtr(4);
Motor left_mtr(7);
Motor right_mtr(-2);

pros::Imu imu_sensor(10);
pros::Gps gps_sensor(1);
pros::Distance dist_sensor(11);

Motor lift_left(6);
Motor lift_right(-5);
Motor ring_left(-16);
Motor ring_right(15);

pros::ADIDigitalOut claw('A');
pros::ADIDigitalOut back('B');
pros::ADIDigitalOut deploy('C');