#include "pins.h"

void setup() {
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);
  pinMode(PIN_BUTTON, INPUT_PULLUP);
}

void loop() {
  // Interrupt handler when button state changes
  int state = digitalRead(PIN_BUTTON);
  if(state == LOW) { // Low means pressed
    digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  } else {
    digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  }
}


