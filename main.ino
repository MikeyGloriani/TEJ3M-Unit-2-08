/*
 * Created by: Mikey Gloriani
 * Created on: Nov 2023
 * This program makes the servo motor turn 180 degrees
*/

#include <Servo.h>

Servo servoNumber1;   // create servo object to control a servo

int potPin = A0;  // Analog pin to connect to the potentiometer
int potVal;       // variable to read the value from the analog pin

void setup() {
    //sets up the servo pins
    servoNumber1.attach(9);
    servoNumber1.write(0);  
}

void loop() {
  potVal = analogRead(potPin);            // reads the value of the potentiometer which is a value between 0 and 1023
  potVal = map(potVal, 0, 1023, 0, 180);     // takes the potentiometer value and changes it to a number between 0-180 (the range where the servo will turn in degrees)
  servoNumber1.write(potVal);              // sets the servo position according to the new number given                          
}
