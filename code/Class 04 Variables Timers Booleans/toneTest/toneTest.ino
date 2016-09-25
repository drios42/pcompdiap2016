
int speaker = 11;
int value = 0;
int dir = 100;

void setup() {
  Serial.begin(9600);
  pinMode(speaker, OUTPUT);

}

void loop() {
  
  digitalWrite(speaker, value);
  
  value = value + dir;

  if (value > 255) {
    dir = -1;
  }

  if (value<=20){
    dir=100;
    }
    //delay(10);
    Serial.println(value);
}
