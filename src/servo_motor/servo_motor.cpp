#include <Arduino.h>
#include <ESP32Servo.h>

Servo myServo;  // Create servo object
const int servoPin = 13;  // GPIO13 for servo signal

void setup() {
  Serial.begin(9600);
  myServo.attach(servoPin);  // Attaches the servo on pin 13
  myServo.write(0);  // Start at 0°
  delay(1000);
}

void loop() {
  // Sweep from 0° to 180°
  for (int pos = 0; pos <= 180; pos += 1) {
    myServo.write(pos);
    delay(15);  // Adjust speed
  }
  
  // Sweep back from 180° to 0°
  for (int pos = 180; pos >= 0; pos -= 1) {
    myServo.write(pos);
    delay(15);
  }
}