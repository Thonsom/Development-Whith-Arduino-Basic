//Hacemos nuestro setup, solo se hace una vez al inicar el programa
void setup()
{
  //Establecemos la velocidad de comunicacion serial
  Serial.begin(9600);//Imprimimos nuestro "Hello World!" en monitor serial
  Serial.println("Hello world!");
}//El loop se corre siempre
void loop()
{
  int valorPotenciometro = analogRead(A0);
  Serial.println("El valor del potenciometro es:");
  Serial.println(valorPotenciometro);
  delay(1000);
}

