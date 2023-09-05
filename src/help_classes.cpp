#include "help_classes.h"

// PID
PIDController::PIDController(double p, double i, double d, double band,
                             double time, double offset) {
  P = p, I = i, D = d, tolerance = band, timestep = time, bias = offset;
  e = 0, ePrior = 0, integral = 0, integralPrior = 0, derive = 0;
  actual = 0, goal = 0;
}
double PIDController::read_error() { return e; }
double PIDController::calculate_raw() {
  e = goal - actual;
  integral = integralPrior + e * timestep;
  derive = (e - ePrior) / timestep;
  output = P * e + I * integral + D * derive + bias;
  ePrior = e;
  integralPrior = integral;
  return output;
}
double PIDController::calculate_tolerance() {
  output = calculate_raw();
  /* Deadband */
  if (fabs(e) < tolerance) {
    return 0;
  }
  return output;
}
void PIDController::reset() {
  e = 0;
  ePrior = 0;
  integral = 0;
  integralPrior = 0;
  derive = 0;
  output = 0;
}

// Printer
bool Printer::is_nth() {
  ++counter %= MOD;
  return !counter;
}
