#include <rgbled.h>




int redButton = 7; //match pin number to correct part
int greenButton = 6;
int blueButton = 5;
int redState = 0;
int greenState = 0;
int blueState = 0;
int redLight = 13;
int greenLight = 12; 
int blueLight = 11;


void setup() {
  // put your setup code here, to run once:
  pinMode(redButton, INPUT);  //set the pins to output or input
  pinMode(greenButton, INPUT);
  pinMode(blueButton, INPUT);
  pinMode(redLight, OUTPUT);
  pinMode(greenLight, OUTPUT);
  pinMode(blueLight, OUTPUT);

}

void loop() {
  redState = digitalRead(redButton); //read button input
  greenState = digitalRead(greenButton);
  blueState = digitalRead(blueButton);
//decisions for the lights
  if (redState == HIGH && blueState == LOW && greenState == LOW) { 

    digitalWrite(blueLight, LOW);
    digitalWrite(greenLight, LOW);
    digitalWrite(redLight, HIGH);
}

 if (blueState == HIGH && redState == LOW && greenState == LOW) {

    digitalWrite(blueLight, HIGH);
    digitalWrite(greenLight, LOW);
    digitalWrite(redLight, LOW);

}
 if (greenState == HIGH && redState == LOW && blueState == LOW) {

    digitalWrite(blueLight, LOW);
    digitalWrite(greenLight, HIGH);
    digitalWrite(redLight, LOW);

}
if (redState == HIGH && blueState == HIGH && greenState == LOW) {

    digitalWrite(blueLight, HIGH);
    digitalWrite(greenLight, LOW);
    digitalWrite(redLight, HIGH);
}
if (redState == HIGH && blueState == LOW && greenState == HIGH) {

    digitalWrite(blueLight, LOW);
    digitalWrite(greenLight, HIGH);
    digitalWrite(redLight, HIGH);
}
if (blueState == HIGH && redState == LOW && greenState == HIGH) {

    digitalWrite(blueLight, HIGH);
    digitalWrite(greenLight, HIGH);
    digitalWrite(redLight, LOW);

}

}
