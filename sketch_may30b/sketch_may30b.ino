#include "Arduino.h"
#include "arduino.h"

int ledPin = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);

}

void loop() {
  while(1)
  {
    digitalWrite(ledPin, HIGH);

  }
  }
