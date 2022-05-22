
void setup() {
pinMode(A0,INPUT);
pinMode(5,OUTPUT);
Serial.begin(1200);
}

void loop() {
// int val= analogWrite(LED,analogRead(POT)/4);
  
int val=analogRead(A0);


val = map(val, 0, 1023, 0, 255);

analogWrite(5,val);
Serial.print("Velocidad: "); 
Serial.println(val); 



delay(500);
}
