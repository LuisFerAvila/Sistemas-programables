#include <Servo.h>
Servo myservo;
int potPin = A5;
int val;
void setup() {
  Serial.begin(9600);
 myservo.attach(4);
}
void loop() {
 val = analogRead(potPin);
 val = map(val, 0, 1023, 0, 179);
Serial.println("Valor: " );  
Serial.print(val); 
delay(15);
 myservo.write(val);
 delay(15);
}
