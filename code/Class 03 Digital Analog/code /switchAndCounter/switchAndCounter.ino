
const int buttonPin = 7;
const int led = 11;

boolean buttonState = false;
boolean previousState = false;

int counter = 0;
boolean ledOn = false;

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);


  if (buttonState) {
    if (!previousState) {
      Serial.println("LED ON");
      previousState = true;
      counter++;
    } 
  } else {
    previousState = false;
  }


  counter = counter % 10;
  Serial.println(counter);

  if (counter !=0 ) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
}






