#include <Wire.h>
#include <Enums.MD25.h>
#include <MD25.h>

/*
 * Demonstrates use of the GetBatteryVoltage function.
 * 
 * This can be used just to check your battery's charge
 * (given in volts), or is a useful tool for verifying
 * the I2C connection between Arduino and MD25.
 */

using namespace RD02;
MD25 md25;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  md25 = MD25();
}

void loop() {
  // put your main code here, to run repeatedly:
  md25.GetBatteryVoltage ();
  delay (500);
}
