int interval = 50; // interval to control blink speed
long currentTime; // variable to store millis()
long lastTime; // timestamp for the last time we blinked

int led = 11;

boolean ledState = false;  // boolean for our led's state

int button = 7;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
  lastTime = millis(); // set our timestamp when we turn on our program
}

void loop() {
  int reading = digitalRead(button); // read if our button is on or off
  
  currentTime = millis();
  if (currentTime - lastTime > interval) { // check the passage of time, 
    ledState = !ledState; //if its more than our interval then change the led state
     lastTime = millis(); // update the timestamp so we can continue keeping track
  }
  if (ledState) { 
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
  Serial.println(reading);

  if (reading == 1) { //use the button to change the rate of blinking for our led
    interval = 1000;
  } else {
    interval = 50;
  }

}
