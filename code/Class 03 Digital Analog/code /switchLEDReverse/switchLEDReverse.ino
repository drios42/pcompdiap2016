int button = 7 ;
int led = 11;

void setup() {
  Serial.begin(9600);
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  int reading =  digitalRead(button);

  if (reading == 1) {
    digitalWrite(led, LOW);
  } 
  else {
    digitalWrite(led, HIGH);
  }


  Serial.println(reading);
}
