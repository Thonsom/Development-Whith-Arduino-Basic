int pinLed = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinLed, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int valPotenciometro = analogRead(A0);
  int intensidadLed = (int)((((double) valPotenciometro)/1023)*255.0);

  

  Serial.println("ValorIn:");
  Serial.println(intensidadLed);
  
  Serial.println("-----------");
  
  Serial.println("ValorP:");
  Serial.println(valPotenciometro);
  
  delay(1000);
  
  analogWrite(pinLed, intensidadLed);
  delay(20);
}
