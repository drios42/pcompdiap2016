int fsr;  //  variable to hold our fsr readings

int ledRed = 11;  //  connecting red led to pin 6
int ledGreen = 5; // connecting green led to pin 5

int brightnessR = 0; // variable for red led's brightness
int brightnessG = 0; // variable for green led's brightness

void setup() {
  Serial.begin(9600);
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
}

void loop() {
  fsr = analogRead(A0);  // connect FSR to analog input A0 and read its values

  Serial.println(fsr);

  brightnessR = map(fsr,0,1023,0,255); // we can map brightness to increase with our analogRead values
  
  brightnessG = map(fsr,0,1023,255,0); // or  we can map brightness to decrease with our analogRead values

  analogWrite(ledRed, brightnessR);
  analogWrite(ledGreen, brightnessG);



}
