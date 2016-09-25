int button = 7;
int led = 11;
boolean buttonState = false;
boolean previousState = false;
int counter = 0;
void setup() {
  Serial.begin(9600);
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);
}
void loop() {
  buttonState = digitalRead(button);
  if (buttonState) {
    if (!previousState) {
      counter = counter + 1;
      previousState = true;
    }
  } else {
    previousState = false;
  }
  if (counter == 0) {
    digitalWrite(led, LOW);
  }
  if (counter == 1) {
    digitalWrite(led, HIGH);
  }
  counter = counter % 5; // modulo
  
  Serial.println(counter);
  delay(1);

}
















