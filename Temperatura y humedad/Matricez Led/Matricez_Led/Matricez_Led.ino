//zona de variables globales
int pines[] = {2, 3, 4, 5, 6, 7};  //declaro una matriz con los numeros de pines a usar
char* Respuestas[]={"Si", "No", "Quizas", "Nunca", "Siempre", "algunas veces"};
int contador = 0;                  //Una variable contador
int tiempo = 500;                  //Una variable guarda el tiempo de activacion de los pines
const int Boton=8;
int val;
int RN;
void setup(){
  Serial.begin(9600);
  pinMode(Boton,INPUT);
  for (contador=0; contador<6; contador++) {    //Uso un for para declarar todos los pines
    pinMode(pines[contador], OUTPUT); }       
}
 void loop() {

val=digitalRead(Boton);
if  (val==HIGH){
RN = random(0,5);
Serial.println(Respuestas[RN]);
Serial.print(pines[RN]);
Serial.print(RN);

digitalWrite(RN,HIGH);
delay(tiempo);
digitalWrite(RN,LOW);
}
else { digitalWrite(1,LOW);


}
val=0;
}
