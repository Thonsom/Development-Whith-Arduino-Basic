int ledPin = 11;
void setup(){
pinMode(ledPin, OUTPUT);
Serial.begin(9600);
}
void loop(){
 
  int valorPotenciometro = analogRead(A0);
  
  Serial.println("Valor de lectura:");
  Serial.println(valorPotenciometro);
    int intensidadLED = ((((double)valorPotenciometro)/1023)*255.0);
 

  
  Serial.println("Valor Intensidad:");
  Serial.println(intensidadLED);
  analogWrite(ledPin, intensidadLED);
  Serial.println("---------");
  delay (2000);
}

