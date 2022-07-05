#include <Arduino.h>
#include "KY009_016.h"

#define RED_PIN   22
#define GREEN_PIN 23
#define BLUE_PIN  21
#define DELAY     50

KY009_016 led;

void setup() {
  // put your setup code here, to run once:
  led.begin(RED_PIN, GREEN_PIN, BLUE_PIN);
}

void loop() {
  for(int i=0;i<255;i++){
    for(int j=0;j<255;j++){
      for(int k=0;k<255;k++){
        led.write(i,j,k); 

        delay(DELAY);
      }
    }
  }
}