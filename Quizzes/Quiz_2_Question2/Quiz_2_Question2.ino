//Quiz 2: Question 2
//Potentiometer controls blinking speed of an LED

int potPin = A5;
int led = 5;
int val = 0;


void setup() {
  
pinMode (5, OUTPUT);
pinMode (A5, INPUT);

Serial.begin(9600);

}

void loop() {

Serial.println(A5);

int potValue = analogRead (A5);


digitalWrite(5, HIGH);  
delay(potValue); 
digitalWrite(5, LOW); 
delay(potValue); 

}
