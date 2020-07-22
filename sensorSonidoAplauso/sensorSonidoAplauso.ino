int sensor = 9;
int pinLed = 10;
int valor= 0;
int sonido=0;

void setup() {
  pinMode(pinLed, OUTPUT);
  digitalWrite(pinLed, LOW);
  pinMode(sensor, INPUT);
  Serial.begin(9600);
}

void loop() {

  valor= digitalRead(sensor);

  Serial.println(valor);
  delay(1000);
  
  if(valor==HIGH){
    digitalWrite(pinLed, HIGH);
    sonido=sonido+1;
    delay(100);
  }
    
  if(sonido==2){
    digitalWrite(pinLed, LOW);
      sonido=0;
    
  }
  Serial.println("Sonido:"+sonido);
}
