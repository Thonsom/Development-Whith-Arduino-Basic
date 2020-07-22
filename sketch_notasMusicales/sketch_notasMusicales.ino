#define Do 1311
#define Re 147
#define Mi 165
#define Fa 175
#define Sol 196
#define La 220
#define Ti 247
#define Do2 262
// Defining the pin connected to the speaker
int pinBuzzer = 3;
void setup() {
  // Tone pins don't need to be declared
}
void loop() {

  // Do
  tone(pinBuzzer, Do, 125);
  delay(125);
  // Re
  tone(pinBuzzer, Re, 125);
  delay(125);
  // Mi
  tone(pinBuzzer, Mi, 125);
  delay(125);
  // Fa
  tone(pinBuzzer, Fa, 125);
  delay(125);
  // Sol
  tone(pinBuzzer, Sol, 125);
  delay(125);
  // La
  tone(pinBuzzer, La, 125);
  delay(125);
  // Ti
  tone(pinBuzzer, Ti, 125);
  delay(125);
  // Higher Do
  tone(pinBuzzer, Do2, 125);
  delay(125);
  delay(1000);
}
