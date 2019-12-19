//Quiz 2 Question 4
//Count how many times the led has blinked on serial monitor
int led = 4;
int count = 0;

void setup() {
  pinMode(5, OUTPUT);
  Serial.begin(9600);
}

void loop() {
 count++;
  Serial.println(count);
 
  
  digitalWrite(5, HIGH);
  delay(250);  
  digitalWrite(5, LOW);
  delay(250);

 
 Serial.println("This LED has blinked...");
 Serial.print(count);
 Serial.println(" times");
}
