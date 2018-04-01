#ifndef MOVEWHEEL_H
#define MOVEWHEEL_H
#include "Arduino.h"
void moveForward(int pin1_right, int pin2_right, int pin1_left, int pin2_left);
void moveBack(int pin1_right, int pin2_right, int pin1_left, int pin2_left);
void brake(int pin1_right, int pin2_right, int pin1_left, int pin2_left);
void turnLeft(int pin1_right, int pin2_right);
void turnRight(int pin1_left, int pin2_left);
void wheel(int pin1, int pin2);

#endif