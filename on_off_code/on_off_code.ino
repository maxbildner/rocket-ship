const int buttonApin = 8; // Declare buttonApin and set it to the desired pin number
const int buttonBpin = 9; // Declare buttonBpin and set it to the desired pin number
const int ledPin = 5;


void setup() {
  // put your setup code here, to run once:
  pinMode(buttonApin, INPUT_PULLUP);
  pinMode(buttonBpin, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:

  // when you push button A
  if (digitalRead(buttonApin) == LOW) {

    // turn ON led
    digitalWrite(ledPin, HIGH);
  }

  // when you push the button B
  if (digitalRead(buttonApin) == LOW) {

    // turn OFF led
    digitalWrite(ledPin, LOW);
  }
}
