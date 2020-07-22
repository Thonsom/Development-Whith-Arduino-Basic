#include <Servo.h> //Importamos la biblioteca Servo.h

int servoPin = 3; 
Servo miServo; //Declaramos un servo y se llama miServo, con esto vamos a trabajar
 
void setup(){
 
 //Asociamos el servomotor al pin 3 del Arduino 
 miServo.attach(servoPin);
 
}
 
void loop(){
 
//Le mandamos un angolo de 0 grados a nuestro servo
miServo.write(0);
//Hacemos un delay de 1 segundo antes de mandarle la siguiente posicion
delay (1000);
 
//Escribimos mas posiciones esperando 1 segundo entre una
//posicion y otra
miServo.write


(30);
delay (1000);
miServo.write(60);
delay (1000);
miServo.write(90);
delay (1000);
miServo.write(120);
delay (1000);
miServo.write(150);
delay (1000);
miServo.write(180);
delay (1000);
 
 
}

