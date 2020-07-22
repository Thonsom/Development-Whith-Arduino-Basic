//Ejemplo sencillo, falta comprobar funcionamiento, este
//Ejemplo ya no se vio en el curso, checar funcionamiento
// Libreria motor a pasos
#include <Stepper.h>
// Declare a Stepper motor with 200 revoluciones
// pins 2,3,4,5
// Syntaxis: funcion stepper(revoluciones,pin1,pin2,pin3,pin4)
Stepper stepper1(200, 2, 3, 4, 5);
void setup() {
  //Asignar la velocidad en revoluciones en RPM
  stepper1.setSpeed(60);
}
void loop() {
  stepper1.step(100);
  delay(500);
  stepper1.step(-100);
  delay(500);
}
