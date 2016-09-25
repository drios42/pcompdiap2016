
int pot= A0;
int led = 11;
int mappedVal;

void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop() {
 int reading = analogRead(pot);

 mappedVal = map(reading,0,1023,255,0);

 analogWrite(led,mappedVal);

  Serial.println(mappedVal);
}
