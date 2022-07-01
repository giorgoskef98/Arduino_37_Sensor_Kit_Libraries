#include <Arduino.h>
#include "KY010.h"

// Define the pins used for the sensors
#define S_PIN   23

// Define the sensors' class
KY010 sensor;
 

void setup() {
  // Initialize the led pin
  pinMode(LED_BUILTIN, OUTPUT);
  
  // Initialize the sensor pin by using the .begin function
  sensor.begin(S_PIN);
}

void loop() {
  // Check the status of the sensor and control the status of the led 
  if(sensor.d_read()){
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on
  }else{                       
    digitalWrite(LED_BUILTIN, LOW);    // turn the LED off
  }                                   
}