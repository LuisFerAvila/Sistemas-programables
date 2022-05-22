#include <Servo.h>
Servo myservo;
int potPin = A5;
int val;
int valaut=0;

void setup() {
  Serial.begin(9600);
 myservo.attach(4);
}
void loop() {

     for(int thisPin = 0; thisPin < 179; thisPin++) {
    myservo.write(thisPin);
    Serial.println(thisPin); 
    delay(30);
    
  }

     for(int thisPin = 179; thisPin > 0; thisPin--) {
    myservo.write(thisPin);
    Serial.println(thisPin); 
    delay(30);
  }


 

}
