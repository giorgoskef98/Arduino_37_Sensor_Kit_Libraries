#include <Arduino.h>
#include "KY010.h"

// Define the pins used for the sensors
#define S_PIN   23
#define DELAY   2000 //microseconds

// Define the sensors' class
KY010 sensor;
 

void setup() {
  Serial.begin(9600);
  
  // Initialize the led pin
  pinMode(LED_BUILTIN, OUTPUT);
  
  // Initialize the sensor pin by using the .begin function
  sensor.begin(S_PIN);
  sensor.attach_int();
}

void loop() {
  // Check the status of the sensor and control the status of the led 
  Serial.println("Waiting fo interrupt...");
  delay(DELAY);                                  
}