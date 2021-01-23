#include <Servo.h>
#define led  13  
    
const int PiezoSensor = A0;
const int threshold = 200;
const int Reading = 0;
   
Servo myservo;      

void setup() {
  pinMode(led, OUTPUT);
  myservo.attach(3); 
}

void loop() {
  Reading = analogRead(PiezoSensor);

  if (PiezoReading >= threshold) {
    digitalWrite(led,HIGH);
    myservo.write(35);
  }
  else {
    digitalWrite(led,LOW);
  }
  delay(100);  
}
