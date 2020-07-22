int buttonPin1 = 2;
int buttonPin2 = 3;
int LED1 = 5;
int LED2 = 6;

void setup() {
  // Define the two LED pins as outputs
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  // Define the two buttons as inputs with the internal pull-up resistor  activated
  pinMode(buttonPin1, INPUT_PULLUP);
  pinMode(buttonPin2, INPUT_PULLUP);
}
void loop() {
  // Read the value of the inputs. It can be either 0 or 1
  // 0 if toggled in that direction and 1 otherwise
  
  int buttonValue1 = digitalRead(buttonPin1);
  int buttonValue2 = digitalRead(buttonPin2);
  
  if (buttonValue1 == HIGH && buttonValue2 == HIGH) {
    // Switch toggled to the middle. Turn LEDs off
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
  } else if (buttonValue1 == LOW) {
    // Button is toggled to the second pin
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, HIGH);
  } else {
    // Button is toggled to the third pin
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, LOW);
  }
  
}
