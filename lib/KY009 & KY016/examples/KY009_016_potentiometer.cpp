#include <Arduino.h>
#include "KY009_016.h"

#define RED_PIN    22
#define GREEN_PIN  23
#define BLUE_PIN   21
#define BUTTON_PIN 36
#define POT_PIN    34
#define R_SEL_PIN  27
#define G_SEL_PIN  26
#define B_SEL_PIN  25

#define RED 0
#define GREEN 1
#define BLUE 2

uint8_t led_state = RED;
bool press_state = false;

KY009_016 led;

void setup() {
  led.begin(RED_PIN, GREEN_PIN, BLUE_PIN);
  
  pinMode(BUTTON_PIN, INPUT);
  pinMode(POT_PIN, INPUT);

  pinMode(R_SEL_PIN, OUTPUT);
  pinMode(G_SEL_PIN, OUTPUT);
  pinMode(B_SEL_PIN, OUTPUT);

  digitalWrite(R_SEL_PIN,HIGH);
}

void loop() {

  switch (led_state)
    {
    case RED:
      led.r_write(map(analogRead(POT_PIN), 100, 4100, 0, 255));
      if(digitalRead(BUTTON_PIN) && !press_state){
        led_state = GREEN;
        digitalWrite(R_SEL_PIN,LOW);
        digitalWrite(G_SEL_PIN,HIGH);
        press_state = true;
      }
      break;
    case GREEN:
      led.g_write(map(analogRead(POT_PIN), 100, 4100, 0, 255));
      if(digitalRead(BUTTON_PIN) && !press_state){
        led_state = BLUE;
        digitalWrite(G_SEL_PIN,LOW);
        digitalWrite(B_SEL_PIN,HIGH);
        press_state = true;
      }
      break;
    case BLUE:
      led.b_write(map(analogRead(POT_PIN), 100, 4100, 0, 255));
      if(digitalRead(BUTTON_PIN) && !press_state){
        led_state = RED;
        digitalWrite(B_SEL_PIN,LOW);
        digitalWrite(R_SEL_PIN,HIGH);
        press_state = true;
      }
      break;
    default:
      break;
    }

  if(!digitalRead(BUTTON_PIN)){
    press_state = false;
  }

}