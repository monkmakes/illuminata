/*
 * Example sketch for the MonkMakes Illuminata
 * https://monkmakes.com/illuminata
 */

const int illuminataPin = 3;

void setup() {
  pinMode(illuminataPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("Enter value of brightness 0 to 255");
  Serial.println("Make sure Serial Monitor set to No Line Ending");
  analogWrite(illuminataPin, 255);
}

void loop() {
  if (Serial.available()) {
    int brightness = Serial.parseInt();
    analogWrite(illuminataPin, brightness);
    Serial.print("Brightness set to: ");
    Serial.println(brightness);
  }
}
