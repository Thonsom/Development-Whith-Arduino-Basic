#include <Servo.h> //Importamos la biblioteca Servo
 
//Declaramos una variable donde vamos a guardar 
//la informacion que recibamos del teclado
int byteDeEntrada;
 
//Declaramos miServo para poder usar el servomotor
Servo miServo;
 
void setup (){
 
  //Inicializamos la velocidad del serial
  Serial.begin(9600);
  //asociamos miServo al pin 9
  miServo.attach(9);
 
}
 
void loop (){
  
  if (Serial.available() > 0) {
    //Lee la informacion de entrada
    byteDeEntrada = Serial.read() - 48;
 
                switch(byteDeEntrada){
                  case 0 : 
                
    Serial.println("He recibido: 0");
                miServo.write(0);
                break;
                  
                  case 1 :
                
                Serial.println("He recibido: 30");
                miServo.write(30);
                break;
                
                 case 2 :
                
                Serial.println("He recibido: 60");
                miServo.write(60);
                break;
                
                 case 3 :
                
                Serial.println("He recibido: 90");
                miServo.write(90);
                break;
                
                 case 4 :
                
                Serial.println("He recibido: 120");
                miServo.write(120);
                break;
                
                 case 5 :
                
                Serial.println("He recibido: 150");
                miServo.write(150);
                break;
                
                 case 6 :
                
                Serial.println("He recibido: 180");
                miServo.write(180);
                break;
                  
                
  }
  }
}

