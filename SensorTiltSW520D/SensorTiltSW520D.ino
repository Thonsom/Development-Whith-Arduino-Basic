int SensorPin= 12;
int LEDPin = 13;

void setup() {
  // put your setup code here, to run once:
 pinMode(SensorPin, INPUT);
 digitalWrite(SensorPin, HIGH);
 pinMode(LEDPin, OUTPUT);
 //Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val= digitalRead(SensorPin);
   
   if(digitalRead(SensorPin)){
      digitalWrite(LEDPin, LOW);
   }else{
    digitalWrite(LEDPin, HIGH);
   }
   //Serial.println(val);

delay(100);
}
