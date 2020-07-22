int pirPin= 2;
int pirEstado= LOW;
int val= 0;

void setup() {
 pinMode(pirPin, INPUT);
 Serial.begin(9600);
}

void loop() {
  val = digitalRead(pirPin);
  Serial.println(val);
  Serial.println("...................");
  
  if(val == HIGH){

    if(pirEstado == LOW){
      Serial.println("Movimiento detectado");
      pirEstado = HIGH;
    }
    
      delay(1000);
  }
  else{
    if(pirEstado == HIGH){
      Serial.println("Movimiento no detectado");
      pirEstado = LOW;
    }
    delay(1000);
  }
}
