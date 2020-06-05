
#include "JugadorHumano.h"
#include "Tablero.h"
#include<iostream>

using namespace std;
JugadorHumano::JugadorHumano(string nombre, int puntos, char marca):Jugador(nombre,puntos,marca){
        this->nombre=nombre;
        this->puntos=puntos;
        this->marca=marca;
        
    
}

void JugadorHumano:: elegirCasilla( Tablero*& tablero){ 
    int x ,y;
    cout<<" Ingrese coordenada x: "; 
    cin>>x;
  
    cout<<"  Ingrese coordenada y: ";
    cin>>y;
 	
    if(tablero->marcarCasilla(x,y)==true){
        realizarJugada(x,y,tablero);
    }else{
        cout<<" Casilla ocupada"<<endl;
        elegirCasilla(tablero);
    }
    
}


void JugadorHumano::realizarJugada(int x,int y, Tablero*& tablero){
	tablero->marcarCasilla2(x,y,marca);
}

JugadorHumano::~JugadorHumano() {
}

