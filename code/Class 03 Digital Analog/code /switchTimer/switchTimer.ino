long lastCheckedTime; // variable to compare our current time to
int interval = 1000;  // variable for how long our interval will be

int button = 7;
int led = 11; // variable to tell us which pin the led is connected to

boolean ledOn = false;

void setup() {
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);

}

void loop() {
  if (digitalRead(button) == HIGH) {
    interval = 75;
  }
  else {
    interval = 1000;
  }

  if (millis() - lastCheckedTime > interval) { // if the currentTime - our last saved time is bigger than our interval
    ledOn = !ledOn ; // if we are past the interval the LED state is now the opposite of what it was
    lastCheckedTime = millis();    // reset our last checked time. otherwise this block will only execute on first start up
  }

  if (ledOn == true) {
    digitalWrite(led, HIGH);
  } else if (ledOn == false) {
    digitalWrite(led, LOW);
  }
}
