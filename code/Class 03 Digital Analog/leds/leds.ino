int buttonState; // initializing my variable to know the state of the switch
int interval; // stores my random interval
int ledG = 5;
int ledY = 11;

int buttonPin =7;

void setup() {
  Serial.begin(9600);
  pinMode(ledY, OUTPUT);// assigning pin 11 to be an output, this is my led

  pinMode(ledG, OUTPUT);// assigning pin 5 to be an output, this is my led
  pinMode(buttonPin, INPUT);
}

void loop() {
  interval = random(500);

  digitalWrite(ledY, HIGH);
  delay(interval);
  digitalWrite(ledY, LOW);
  delay(interval);

  digitalWrite(ledG, HIGH);
  delay(interval);
  digitalWrite(ledG, LOW);
  delay(interval);

}
