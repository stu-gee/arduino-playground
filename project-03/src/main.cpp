#include <Arduino.h>

// Read the voltage from the pin A3

int readPin = A3;
int sensorValue = 0;
int outputValue = 0;
int ledPin = 9;

void setup() {
    pinMode(readPin,INPUT);
    pinMode(ledPin,OUTPUT);
    Serial.begin(9600);
}

void loop() {
    sensorValue = analogRead(readPin);
    outputValue = map(sensorValue, 0, 1023, 0, 255);

    Serial.println("sensorValue: " + String(sensorValue));
    Serial.println("outputValue: " + String(outputValue));

    analogWrite(ledPin, outputValue);
    
    delay(500);

}