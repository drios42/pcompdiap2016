long lastCheckedTime; // variable to compare our current time to
int interval = 1000;  // variable for how long our interval will be

int led = 11; // variable to tell us which pin the led is connected to

int counter = 0;  //set our counter to 0

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  lastCheckedTime = millis();  // start checking time, when setup() executes.
}

void loop() {

  if (millis() - lastCheckedTime > interval) { // if the currentTime - our last saved time is bigger than our interval
    counter = counter + 1;       //  update the counter
    lastCheckedTime = millis();    // reset our last checked time. otherwise this block will only execute on first start up
  }

  if (counter == 1) {         //if the counter equals 1 turn led on
    digitalWrite(led, HIGH);
  }
  else if (counter == 0) {   // if counter equals 0 turn led off
    digitalWrite(led, LOW); 
  } 
  else {                     // if counter equals any other number then reset the counter to 0
    counter = 0;
  }
}
