#include <TimeLib.h>
//Libreria que otorga el tiempo

int aa = 1850;

const int a = 2;
const int b = 3; 
const int c = 4; 
const int d = 5; 
const int e = 6;
const int f = 7;
const int g = 8;
//Constantes para los 7 segmentos|  

const int d1 = 9; 
const int d2 = 10;
const int d3 = 11;
const int d4 = 12;
const int d5 = 22;
const int d6 = 24;
const int d7 = 26;
const int d8 = 28;
const int d9 = 30;
//Constantes para los 9 digitos

const int boton1 = 13;
int botonActual1 = 0;
int botonAnterior1 = 0;
//Puntuar P1

const int boton2 = 32;
int botonActual2 = 0;
int botonAnterior2 = 0;
//Puntuar P2

const int boton3 = 34;
int botonActual3 = 0;
int botonAnterior3 = 0;
//Pausa

const int boton4 = 36;
int botonActual4 = 0;
int botonAnterior4 = 0;
//Reset

//Constantes para los botones y sus estados correspondientes

int X = 0;
int segs = 0;
int mins = 0;
//Variables para el temporizador


int R_Decena = 0;
int R_Unidad = 0;
int R_Centena =0;
int R_Millar = 0;
int P1_Unidad =0;
int P1_Decena =0;
int P2_Unidad =0;
int P2_Decena =0;
int Cuartos = 0;
//Variables para los numeros en el display

void cero(){
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
}//Funcion para dibujar un 0 en el display

void uno(){
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
}//Funcion para dibujar un 1 en el display

void dos(){
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
}//Funcion para dibujar un 2 en el display

void tres(){
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
}//Funcion para dibujar un 3 en el display

void cuatro(){
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}//Funcion para dibujar un 4 en el display

void cinco(){
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}//Funcion para dibujar un 5 en el display

void seis(){
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);  
}//Funcion para dibujar un 6 en el display

void siete(){
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
}//Funcion para dibujar un 7 en el display

void ocho(){
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}//Funcion para dibujar un 8 en el display

void nueve(){
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}//Funcion para dibujar un 9 en el display

void D1HIGH(){
  digitalWrite(d1, HIGH);
  digitalWrite(d2, LOW);
  digitalWrite(d3, LOW);
  digitalWrite(d4, LOW);
  digitalWrite(d5, LOW);
  digitalWrite(d6, LOW);
  digitalWrite(d7, LOW);
  digitalWrite(d8, LOW);
  digitalWrite(d9, LOW);
}//Funcion para encender el primer display

void D2HIGH(){
  digitalWrite(d1, LOW);
  digitalWrite(d2, HIGH);
  digitalWrite(d3, LOW);
  digitalWrite(d4, LOW);
  digitalWrite(d5, LOW);
  digitalWrite(d6, LOW);
  digitalWrite(d7, LOW);
  digitalWrite(d8, LOW);
  digitalWrite(d9, LOW);
}//Funcion para encender el segundo display

void D3HIGH(){
  digitalWrite(d1, LOW);
  digitalWrite(d2, LOW);
  digitalWrite(d3, HIGH);
  digitalWrite(d4, LOW);
  digitalWrite(d5, LOW);
  digitalWrite(d6, LOW);
  digitalWrite(d7, LOW);
  digitalWrite(d8, LOW);
  digitalWrite(d9, LOW);
}//Funcion para encender el tercer display

void D4HIGH(){
  digitalWrite(d1, LOW);
  digitalWrite(d2, LOW);
  digitalWrite(d3, LOW);
  digitalWrite(d4, HIGH);
  digitalWrite(d5, LOW);
  digitalWrite(d6, LOW);
  digitalWrite(d7, LOW);
  digitalWrite(d8, LOW);
  digitalWrite(d9, LOW);
}//Funcion para encender el cuarto display

void D5HIGH(){
  digitalWrite(d1, LOW);
  digitalWrite(d2, LOW);
  digitalWrite(d3, LOW);
  digitalWrite(d4, LOW);
  digitalWrite(d5, HIGH);
  digitalWrite(d6, LOW);
  digitalWrite(d7, LOW);
  digitalWrite(d8, LOW);
  digitalWrite(d9, LOW);
}//Funcion para encender el quinto display

void D6HIGH(){
  digitalWrite(d1, LOW);
  digitalWrite(d2, LOW);
  digitalWrite(d3, LOW);
  digitalWrite(d4, LOW);
  digitalWrite(d5, LOW);
  digitalWrite(d6, HIGH);
  digitalWrite(d7, LOW);
  digitalWrite(d8, LOW);
  digitalWrite(d9, LOW);
}//Funcion para encender el sexto display

void D7HIGH(){
  digitalWrite(d1, LOW);
  digitalWrite(d2, LOW);
  digitalWrite(d3, LOW);
  digitalWrite(d4, LOW);
  digitalWrite(d5, LOW);
  digitalWrite(d6, LOW);
  digitalWrite(d7, HIGH);
  digitalWrite(d8, LOW);
  digitalWrite(d9, LOW);
}//Funcion para encender el septimo display

void D8HIGH(){
  digitalWrite(d1, LOW);
  digitalWrite(d2, LOW);
  digitalWrite(d3, LOW);
  digitalWrite(d4, LOW);
  digitalWrite(d5, LOW);
  digitalWrite(d6, LOW);
  digitalWrite(d7, LOW);
  digitalWrite(d8, HIGH);
  digitalWrite(d9, LOW);
}//Funcion para encender el octavo display

void D9HIGH(){
  digitalWrite(d1, LOW);
  digitalWrite(d2, LOW);
  digitalWrite(d3, LOW);
  digitalWrite(d4, LOW);
  digitalWrite(d5, LOW);
  digitalWrite(d6, LOW);
  digitalWrite(d7, LOW);
  digitalWrite(d8, LOW);
  digitalWrite(d9, HIGH);
}//Funcion para encender el noveno display

void Digito1(){
    switch (R_Millar){
      case 0:
      cero();
      break;
      
      case 1:
      uno();
      break;

      case 2:
      dos();
      break;

      case 3:
      tres();
      break;

      case 4:
      cuatro();
      break;

      case 5:
      cinco();
      break;

      case 6:
      seis();
      break;

      case 7:
      siete();
      break;

      case 8:
      ocho();
      break;

      case 9:
      nueve();
      break;
  }
}//Funcion que selecciona que numero va a dibujarse en el primer display


void Digito2(){
    switch (R_Centena){
      case 0:
      cero();
      break;
      
      case 1:
      uno();
      break;

      case 2:
      dos();
      break;

      case 3:
      tres();
      break;

      case 4:
      cuatro();
      break;

      case 5:
      cinco();
      break;

      case 6:
      seis();
      break;

      case 7:
      siete();
      break;

      case 8:
      ocho();
      break;

      case 9:
      nueve();
      break;
  }
}//Funcion que selecciona que numero va a dibujarse en el segundo display

void Digito3(){
    switch (R_Decena){
      case 0:
      cero();
      break;
      
      case 1:
      uno();
      break;

      case 2:
      dos();
      break;

      case 3:
      tres();
      break;

      case 4:
      cuatro();
      break;

      case 5:
      cinco();
      break;

      case 6:
      seis();
      break;

      case 7:
      siete();
      break;

      case 8:
      ocho();
      break;

      case 9:
      nueve();
      break;
  }
}//Funcion que selecciona que numero va a dibujarse en el tercer display

void Digito4(){
    switch (R_Unidad){
      case 0:
      cero();
      break;
      
      case 1:
      uno();
      break;

      case 2:
      dos();
      break;

      case 3:
      tres();
      break;

      case 4:
      cuatro();
      break;

      case 5:
      cinco();
      break;

      case 6:
      seis();
      break;

      case 7:
      siete();
      break;

      case 8:
      ocho();
      break;

      case 9:
      nueve();
      break;
  }  
}//Funcion que selecciona que numero va a dibujarse en el cuarto display

void Digito5(){
    switch (P1_Decena){
      case 0:
      cero();
      break;
      
      case 1:
      uno();
      break;

      case 2:
      dos();
      break;

      case 3:
      tres();
      break;

      case 4:
      cuatro();
      break;

      case 5:
      cinco();
      break;

      case 6:
      seis();
      break;

      case 7:
      siete();
      break;

      case 8:
      ocho();
      break;

      case 9:
      nueve();
      break;
  }  
}//Funcion que selecciona que numero va a dibujarse en el quinto display

void Digito6(){
    switch (P1_Unidad){
      case 0:
      cero();
      break;
      
      case 1:
      uno();
      break;

      case 2:
      dos();
      break;

      case 3:
      tres();
      break;

      case 4:
      cuatro();
      break;

      case 5:
      cinco();
      break;

      case 6:
      seis();
      break;

      case 7:
      siete();
      break;

      case 8:
      ocho();
      break;

      case 9:
      nueve();
      break;
  }  
}//Funcion que selecciona que numero va a dibujarse en el sexto display

void Digito7(){
    switch (P2_Decena){
      case 0:
      cero();
      break;
      
      case 1:
      uno();
      break;

      case 2:
      dos();
      break;

      case 3:
      tres();
      break;

      case 4:
      cuatro();
      break;

      case 5:
      cinco();
      break;

      case 6:
      seis();
      break;

      case 7:
      siete();
      break;

      case 8:
      ocho();
      break;

      case 9:
      nueve();
      break;
  }  
}//Funcion que selecciona que numero va a dibujarse en el septimo display

void Digito8(){
    switch (P2_Unidad){
      case 0:
      cero();
      break;
      
      case 1:
      uno();
      break;

      case 2:
      dos();
      break;

      case 3:
      tres();
      break;

      case 4:
      cuatro();
      break;

      case 5:
      cinco();
      break;

      case 6:
      seis();
      break;

      case 7:
      siete();
      break;

      case 8:
      ocho();
      break;

      case 9:
      nueve();
      break;
  }  
}//Funcion que selecciona que numero va a dibujarse en el octava display

void Digito9(){
    switch (Cuartos){
      case 0:
      cero();
      break;
      
      case 1:
      uno();
      break;

      case 2:
      dos();
      break;

      case 3:
      tres();
      break;

      case 4:
      cuatro();
      break;

      case 5:
      cinco();
      break;

      case 6:
      seis();
      break;

      case 7:
      siete();
      break;

      case 8:
      ocho();
      break;

      case 9:
      nueve();
      break;
  }  
}//Funcion que selecciona que numero va a dibujarse en el octava display


void multiplex(){
    D1HIGH();
    Digito1();
    delayMicroseconds(aa);
    D2HIGH();
    Digito2();
    delayMicroseconds(aa);
    D3HIGH();
    Digito3();
    delayMicroseconds(aa);
    D4HIGH();
    Digito4();
    delayMicroseconds(aa);
    D5HIGH();
    Digito5();
    delayMicroseconds(aa);
    D6HIGH();
    Digito6();
    delayMicroseconds(aa);
    D7HIGH();
    Digito7();
    delayMicroseconds(aa);
    D8HIGH();
    Digito8();
    delayMicroseconds(aa);
    D9HIGH();
    Digito9();
    delayMicroseconds(aa);
}//Funcion encargada del multiplexado del display

void reloj(){
botonActual3 = digitalRead(boton3);
botonActual4 = digitalRead(boton4);

  time_t t = now();
  segs = second(t);
  mins = minute(t);
  
    if(segs <= 9){ //Unidad y Decena
    R_Unidad = segs;
    R_Decena = segs / 10;
  }
  else{
    R_Decena = segs / 10;
    R_Unidad = segs - R_Decena * 10;
  }//Separa el numero que entrega la libreria en dos digitos para mostrarlos en el display

    if(mins <= 9){ //Centena y Millar
    R_Centena = mins;
    R_Millar = mins / 10;
  }
  else{
    R_Millar = mins / 10;
    R_Centena = mins - R_Millar * 10;
  }//Separa el numero que entrega la libreria en dos digitos para mostrarlos en el display

  if(botonActual4 == 0 && botonAnterior4 == 1){
    setTime(0, 0, 0, 1, 1, 2021);
}//Boton Reset

  if(botonActual3 == HIGH && botonAnterior3 == LOW){
    X = 1 - X;
}
  if(X == 1){
    setTime(t);
  }//Boton pausa
}//Funcion encargada del temporizador y sus botones

void puntuarP1() {
botonActual1 = digitalRead(boton1);
  if(botonActual1 == 0 && botonAnterior1 == 1){
    P1_Unidad++;
    if(P1_Unidad >9){
      P1_Unidad = 0;
      P1_Decena++;
    }
    if(P1_Decena >9){
      P1_Decena = 0;
      P1_Unidad = 0;
    }
  }
}


void puntuarP2() {
botonActual2 = digitalRead(boton2);
  if(botonActual2 == 0 && botonAnterior2 == 1){
    P2_Unidad++;
    if(P2_Unidad >9){
      P2_Unidad = 0;
      P2_Decena++;
    }
    if(P2_Decena >9){
      P2_Decena = 0;
      P2_Unidad = 0;
    }
  }
}

void cuartos(){
  if (mins == 1 && segs == 0){
      Cuartos++;
  }
}


void setup(){
  for(int i=2; i <=12; i++){
    pinMode(i, OUTPUT);
    pinMode(22, OUTPUT);
    pinMode(24, OUTPUT);
    pinMode(26, OUTPUT);
    pinMode(28, OUTPUT);
    pinMode(13, INPUT);
    setTime(0, 0, 0, 1, 1, 2021);
    Serial.begin(9600);
  }
}

void loop(){
  multiplex();
  reloj();
  puntuarP1();
  puntuarP2();
  cuartos();
  botonAnterior1 = botonActual1;
  botonAnterior2 = botonActual2;
  botonAnterior3 = botonActual3;
  botonAnterior4 = botonActual4;
  Serial.print(Cuartos);
}
