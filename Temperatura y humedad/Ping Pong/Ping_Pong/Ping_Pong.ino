void setup(){
pinMode(A0,INPUT);
pinMode(A1,INPUT);
Serial.begin(19200);
}
void loop(){
int val=analogRead(A2);
int valdos=analogRead(A1);
val=val/4;
Serial.write(val + "'" + valdos);
delay(100);
}
