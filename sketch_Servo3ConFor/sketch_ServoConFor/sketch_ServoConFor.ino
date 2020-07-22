#include <Servo.h>


int Pos = 0;
Servo miServo;

void setup() {
  // put your setup code here, to run once:
  miServo.attach(9);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(Pos = 0; Pos <=179; Pos +=1){
    miServo.write(Pos);
    Serial.println("Grado :");
    Serial.println(Pos);
    delay(80);
  }
  for(Pos = 179; Pos >=1; Pos -=1){
    miServo.write(Pos);
    Serial.println("Grado :");
    Serial.println(Pos);
    delay(80);
  }
}
