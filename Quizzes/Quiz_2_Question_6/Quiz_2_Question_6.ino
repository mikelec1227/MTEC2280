//Quiz 2: Question 6
//Potentiometer controls 4 LEDS

int potPin = A5;
int led1 = 3;
int led2 = 4;
int led3 = 5;
int led4 = 6;
int val = 0;


void setup() {
  
pinMode (4, OUTPUT);
pinMode (A5, INPUT);
pinMode (5, OUTPUT);
pinMode (A5, INPUT);
pinMode (6, OUTPUT);
pinMode (A5, INPUT);
pinMode (7, OUTPUT);
pinMode (A5, INPUT);


Serial.begin(9600);

}

void loop() {

Serial.println(A5);

int potValue = analogRead (A5);


digitalWrite(4, HIGH);  
delay(potValue); 
digitalWrite(4, LOW); 
delay(potValue); 

digitalWrite(5, HIGH);  
delay(potValue); 
digitalWrite(5, LOW); 
delay(potValue); 

digitalWrite(6, HIGH);  
delay(potValue); 
digitalWrite(6, LOW); 
delay(potValue); 

digitalWrite(3, HIGH);  
delay(potValue); 
digitalWrite(3, LOW); 
delay(potValue); 

}
