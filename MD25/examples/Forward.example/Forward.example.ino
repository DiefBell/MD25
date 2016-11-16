#include <Wire.h>
#include <Enums.MD25.h>
#include <MD25.h>

/*
 * This demonstrates the most basic function: going forwards.
 * 
 * Use this to calibrate the WheelCircumference value by
 * moving the robot forwards over a known distance. If it needs
 * to go further, decrease the first value in the MD25 constructor
 * and vice verse for overshoot.
 */

using namespace RD02;

MD25 md25;

void setup() {
  md25 = MD25(102 * PI, 278/2);  // <-- The MD25 constructor, if in doubt.
}

void loop() {
  delay (2000);
  md25.Forward (1000);

  while (true);
}
