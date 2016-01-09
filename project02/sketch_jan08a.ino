// Arduino starter kit, project 02 "Spaceship"
// Using a pull-down resistor on switch pin 2

int switchState = 0;

void setup() {
  pinMode(3, OUTPUT); //green led
  pinMode(4, OUTPUT); //red led
  pinMode(5, OUTPUT); //red led
  pinMode(2, INPUT); //switch
}

void loop() {
  //read our switch if there is voltage our switch is HIGH (1) else LOW (0)
  switchState = digitalRead(2);
  
  if (switchState == LOW) {
    // button has not been pressed
    digitalWrite(3, HIGH); //green LED on
    digitalWrite(4, LOW); //red led off
    digitalWrite(5, LOW); //red led off
  }
  else {
    // button has been pressed
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);

    delay(100);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    delay(100);
  }
}

