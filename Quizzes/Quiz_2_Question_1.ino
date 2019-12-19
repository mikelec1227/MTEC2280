/*Quiz 2: Question 1
Button Pressed button makes a noise with the buzzer
*/


const int buttonPin = 2;
const int speakerPin = 4;


int buttonState = 0;         

void setup() {

  pinMode(speakerPin, OUTPUT);      

  pinMode(buttonPin, INPUT);     
}

void loop(){

  buttonState = digitalRead(buttonPin);
 if (buttonState == HIGH) {     
    digitalWrite(speakerPin, HIGH);  
  } 
  else {

    digitalWrite(speakerPin, LOW); 
  }
}
