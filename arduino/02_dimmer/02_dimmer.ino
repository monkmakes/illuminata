/*
 * Example sketch for the MonkMakes Illuminata
 * https://monkmakes.com/illuminata
 */

const int illuminataPin = 3;
const int analogPin = A1;
const int gndPin = A0;
const int plusPin = A2;

void setup() {
  pinMode(illuminataPin, OUTPUT);
  pinMode(gndPin, OUTPUT);
  pinMode(plusPin, OUTPUT);
  digitalWrite(plusPin, HIGH);
}

void loop() {
  int brightness = analogRead(analogPin) / 4;
  analogWrite(illuminataPin, brightness);
  delay(10);
}
