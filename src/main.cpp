#include <Arduino.h>
#include <ESP32Servo.h>

Servo servo;
int const SERVO_PIN = 15;

void setup() {
  // put your setup code here, to run once:
  servo.attach(SERVO_PIN);
}

void loop() {
  // put your main code here, to run repeatedly:
  servo.write(0);
  delay(1000);
  servo.write(90);
  delay(1000);
  servo.write(180);
  delay(1000);
}
