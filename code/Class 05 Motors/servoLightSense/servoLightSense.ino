
#include <Servo.h>

Servo myservo;

void setup()
{
  Serial.begin(9600);
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  int photoSensor = analogRead(A0);
  int angle= map(photoSensor, 0,1023,0,179);
Serial.println(photoSensor);
  myservo.write(angle);
  delay(1);

}
