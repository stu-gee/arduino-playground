#include <Arduino.h>

// Fades the LED on pin 11 from 250 to 0 and back again

int redPin = 11;
int brightness = 250;
int fadeAmount = -10;

void setup() {
  pinMode(redPin, OUTPUT);
}

void loop() {
    analogWrite(redPin, brightness);

    brightness = brightness + fadeAmount;

    if (brightness <= 0) {
        fadeAmount = fadeAmount * -1;
    }
    else if (brightness >= 250) {
        fadeAmount = fadeAmount * -1;
    }

    delay(100);
}