/***********************************************************************************************************************************************************
 *  TITLE: This is an example skecth that will help you interface a servo to an Arduino.
 *
 *  By Frenoy Osburn
 *  YouTube Video: https://youtu.be/NoqjQKcRkVw
 ***********************************************************************************************************************************************************/

  /********************************************************************************************************************
 *  Board Settings:
 *  Board: "Arduino Nano"
 *  Processor: "ATmega328P (Old Bootloader)"
 *  COM Port: Depends *On Your System*
 *********************************************************************************************************************/
 
#include <Servo.h>

#define SERVO_PIN    9  //PWM pin that is connected to the servo

Servo demoServo;        //create a servo object

int servoAngle = 0;     //servo angle which can vary from 0 - 180

void setup() 
{
  demoServo.attach(SERVO_PIN, 1000, 2000);  //attach the pin to the object so that we can send the signal to it. 
                                            //I've defined the range between 1000-2000us or 1-2ms as the default range is non-standard
}

void loop() 
{
  for(servoAngle = 0; servoAngle <= 180; servoAngle++)  //increment the angle from 0 to 180, in steps of 1
  { 
    demoServo.write(servoAngle);                        //set the servo angle and it will move to it
    delay(20);                                          //wait 20ms before moving to the next position
  }
  for (servoAngle = 180; servoAngle >= 0; servoAngle--) //decrement the angle from 180 to 0, in steps of 1 
  {
    demoServo.write(servoAngle);                        //set the servo angle and it will move to it
    delay(20);                                          //wait 20ms before moving to the next position
  }

  demoServo.write(60);                                  //move servo to 60 deg
  delay(500);                                           //wait for 500ms   
  
  demoServo.write(120);                                 //move servo to 120 deg
  delay(500);                                           //wait for 500ms  
  
  demoServo.write(180);                                 //move servo to 180 deg
  delay(500);                                           //wait for 500ms  
  
  demoServo.write(120);                                 //move servo to 120 deg
  delay(500);                                           //wait for 500ms  
  
  demoServo.write(60);                                  //move servo to 60 deg
  delay(500);                                           //wait for 500ms      
  
  demoServo.write(0);                                   //move servo to 0 deg
  delay(500);                                           //wait for 500ms       

/*
  demoServo.write(0);                                   //move servo to 0 deg
  delay(5000);
    
  demoServo.write(180);                                 //move servo to 180 deg
  delay(5000);  
 */
}
