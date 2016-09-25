int tpin = 9;
void setup() {
  pinMode(tpin, OUTPUT);

}

void loop() {
  digitalWrite(tpin, HIGH);
  delay(500);
  digitalWrite(tpin, LOW);
  delay(500);

}
