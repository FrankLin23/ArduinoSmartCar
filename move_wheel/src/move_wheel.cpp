#include "Arduino.h"
#include "move_wheel.h"
void moveForward(int pin1_right, int pin2_right, int pin1_left, int pin2_left){

	wheel(pin1_right,pin2_right);
	wheel(pin1_left,pin2_left);

}
void moveBack(int pin1_right, int pin2_right, int pin1_left, int pin2_left){

	wheel(pin2_right,pin1_right);
	wheel(pin2_left,pin1_left);

}
void turnLeft(int pin1_right, int pin2_right){

	wheel(pin1_right,pin2_right);

}
void turnRght(int pin1_left, int pin2_left){

	wheel(pin1_left,pin2_left);

}
void wheel(int pin1, int pin2){

	digitalWrite(pin1,HIGH);
	digitalWrite(pin2,LOW);

}