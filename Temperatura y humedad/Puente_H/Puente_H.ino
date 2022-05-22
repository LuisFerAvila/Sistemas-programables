int PinIN1 = 7;
int PinIN2 = 6;
int PinIN3 = A0;
int PinIN4 = A1;
int valq;
int valw;
void setup() {
 // inicializar la comunicación serial a 9600 bits por segundo:
 Serial.begin(9600);
 // configuramos los pines como salida
 pinMode(PinIN1, OUTPUT);
 pinMode(PinIN2, OUTPUT);
 pinMode(PinIN3, INPUT);
  pinMode(PinIN4, INPUT);
}
void loop() {
  
valq=analogRead(PinIN3);
valw=analogRead(PinIN4);

if(valq!=0){
   MotorHorario();
  }else if(valw!=0){
    MotorAntihorario();
    }else{
       MotorStop();
      }


 Serial.println("Giro del Motor en sentido horario");
 delay(1000);

 
 Serial.println("Giro del Motor en sentido antihorario");
 delay(1000);


 Serial.println("Motor Detenido");
 delay(1000);

}
void MotorHorario()
{
  
digitalWrite (PinIN1, HIGH);
//digitalWrite (PinIN2, LOW);


}
void MotorAntihorario()
{
 digitalWrite (PinIN1, LOW);
 digitalWrite (PinIN2, HIGH);
}
void MotorStop()
{
 digitalWrite (PinIN1, LOW);
 digitalWrite (PinIN2, LOW);
}
