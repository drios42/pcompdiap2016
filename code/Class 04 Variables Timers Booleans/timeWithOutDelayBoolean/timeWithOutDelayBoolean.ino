long lastCheckedTime; // variable to compare our current time to
int interval = 1000;  // variable for how long our interval will be

int led = 7; // variable to tell us which pin the led is connected to

boolean ledState = false;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  lastCheckedTime = millis();  // start checking time, when setup() executes.
}

void loop() {
// this block of code handles timing without delays
/////////////////////////////////////////////////////////////////////

  if (millis() - lastCheckedTime > interval) { // if the currentTime - our last saved time is bigger than our interval
    ledState = !ledState;          // execute a state change.  ! exclamation mark means "not the led state" or "opposite of what it is now"
    lastCheckedTime = millis();    // reset our last checked time. otherwise this block will only execute on first start up  
  }
  
/////////////////////////////////////////////////////////////////////


// This block of code handles our led behavior
/////////////////////////////////////////////////////////////////////
  if (ledState == true) {
    digitalWrite(led, HIGH);
  }
  else {
    digitalWrite(led, LOW);
  }
/////////////////////////////////////////////////////////////////////
}
