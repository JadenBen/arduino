#include <Arduino.h>
#include <Servo.h>
//libraries

Servo servoLeft;
//declaring the right & left servos                      
Servo servoRight;

void setup() //a setup function that runs once when defined (so nothing needs to be called in main loop)
{ 
  servoLeft.attach(13);
  //pin 13 connection
  servoRight.attach(12);
  //pin 12 connection


  //Move forwards a certain distance 
  servoLeft.writeMicroseconds(1700);
  //left wheel move in the CLOCKWISE direction at full speed (1300 microseconds for pin 13 conections - according to chart)
  servoRight.writeMicroseconds(1300);
  //right wheel  move in the counter-clockwise direction at full speed (which is 1700 microseconds for pin 13 conections)
  delay(10000);
  //power the servos at these speeds/directions for a cvertain amount of time (10 seconds???)


  //Turn right in place for 1 second? (turning the box B)
  servoRight.writeMicroseconds(1700);  //---this will turn right according to chart
  servoLeft.writeMicroseconds(1700);
  delay(1000);
  
  //Move forwards 10 seconds before adjusting again
  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1300);
  delay(10000);


  //Turn left for 1 second? (for box C)
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1300);
  delay(1000);

  //Move forwards for 10 seconds to D from C
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1700);
  delay(10000);

  //after done cut the signals from pins 12 and 13
  servoLeft.detach();
  servoRight.detach();
}

void loop()
{
}