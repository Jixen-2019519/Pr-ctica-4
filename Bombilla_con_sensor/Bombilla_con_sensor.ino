/*
  Fundacion Kinal
  Centro Educativo Tecnico Laborla Kinal
  Electronica
  Grado: Quinto
  Seccion: A
  Curso: Taller de eleectronica digital y reparacion de computadoras I
  Nombre: Juan Manuel Sebastian Ixen Coy
  Carne: 2019519
  Fecha: 21/04
*/
#define A 7
#define B 8
#define C 4
#define D 3
#define E 2
#define F 6
#define G 5
#define rele 12
#define trig 9
#define echo 10
int Distancia;
int Tiempo;
int conteo = 0;

void setup() {
  Serial.begin(9600);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A2, INPUT);
}
void loop() {
  digitalWrite(trig, HIGH);
  delay(1);
  digitalWrite(trig, LOW);
  Tiempo = pulseIn(echo, HIGH);
  Distancia = Tiempo / 59;
  Serial.println(Distancia);
  delay(500);

  if (Distancia > 5 && Distancia < 11) {
    conteo = conteo + 1;
  }

  if (conteo == 0) {
    digitalWrite(7, HIGH); 
    digitalWrite(8, HIGH); 
    digitalWrite(4, HIGH); 
    digitalWrite(3, HIGH); 
    digitalWrite(2, HIGH); 
    digitalWrite(6, HIGH); 
    digitalWrite(5, LOW);  
    digitalWrite(9, HIGH);
  }

  if (conteo == 1) {
    digitalWrite(7, LOW); 
    digitalWrite(8, HIGH); 
    digitalWrite(4, HIGH); 
    digitalWrite(3, LOW); 
    digitalWrite(2, LOW); 
    digitalWrite(6, LOW); 
    digitalWrite(5, LOW);  
    digitalWrite(9, HIGH);
  }
  if (conteo == 2) {
    digitalWrite(7, HIGH); 
    digitalWrite(8, HIGH); 
    digitalWrite(4, LOW); 
    digitalWrite(3, HIGH); 
    digitalWrite(2, HIGH); 
    digitalWrite(6, LOW); 
    digitalWrite(5, HIGH);  
    digitalWrite(9, HIGH);
  }
  if (conteo == 3) {
    digitalWrite(7, HIGH); 
    digitalWrite(8, HIGH); 
    digitalWrite(4, HIGH); 
    digitalWrite(3, HIGH); 
    digitalWrite(2, LOW); 
    digitalWrite(6, LOW); 
    digitalWrite(5, HIGH);  
    digitalWrite(9, HIGH);
  }
  if (conteo == 4) {
    digitalWrite(7, LOW); 
    digitalWrite(8, HIGH); 
    digitalWrite(4, HIGH); 
    digitalWrite(3, LOW); 
    digitalWrite(2, LOW); 
    digitalWrite(6, HIGH); 
    digitalWrite(5, HIGH);  
    digitalWrite(9, HIGH);
  }
  if (conteo == 5) {
    digitalWrite(7, HIGH); 
    digitalWrite(8, LOW); 
    digitalWrite(4, HIGH); 
    digitalWrite(3, HIGH); 
    digitalWrite(2, LOW); 
    digitalWrite(6, HIGH); 
    digitalWrite(5, HIGH);  
    digitalWrite(9, HIGH);
  }
  if (conteo == 6) {
    digitalWrite(7, LOW); 
    digitalWrite(8, LOW); 
    digitalWrite(4, HIGH); 
    digitalWrite(3, HIGH); 
    digitalWrite(2, HIGH); 
    digitalWrite(6, HIGH); 
    digitalWrite(5, HIGH);  
    digitalWrite(9, HIGH);
  }
  if (conteo == 7) {
    digitalWrite(7, HIGH); 
    digitalWrite(8, HIGH); 
    digitalWrite(4, HIGH); 
    digitalWrite(3, LOW); 
    digitalWrite(2, LOW); 
    digitalWrite(6, LOW); 
    digitalWrite(5, LOW);  
    digitalWrite(9, HIGH);
  }
  if (conteo == 8) {
    digitalWrite(7, HIGH); 
    digitalWrite(8, HIGH); 
    digitalWrite(4, HIGH); 
    digitalWrite(3, HIGH); 
    digitalWrite(2, HIGH); 
    digitalWrite(6, HIGH); 
    digitalWrite(5, HIGH);  
    digitalWrite(9, HIGH);
  }
  if (conteo == 9) {
    digitalWrite(7, HIGH); 
    digitalWrite(8, HIGH); 
    digitalWrite(4, HIGH); 
    digitalWrite(3, LOW); 
    digitalWrite(2, LOW); 
    digitalWrite(6, HIGH); 
    digitalWrite(5, HIGH);  
    digitalWrite(9, LOW);
  }
}
