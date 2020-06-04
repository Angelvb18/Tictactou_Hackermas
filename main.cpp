#include <iostream>
#include "Tablero.h"
#include "JugadorHumano.h"
#include "Jugar.h"


using namespace std;

int main(int argc, char** argv) {
	//apuntadores
	Tablero* tablero = new Tablero();
//	tablero->printTablero();
	int menu =1;
	while(menu!=3){
		cout<<"Ingrese que quiere jugar: "<<endl ;
		cout<<"1.-Jugador vs computadora"<< endl;
		cout<<"2.-Jugador vs Jugador "<< endl;
		cout <<"3.-Salir"<< endl;
		cin>> menu;
		switch (menu ){
			case 1 : {
					cout<<"EN DESARROLLO XD"<< endl;
				break;
			}
			case 2 : {
				string nombre1,nombre2 ;
				char mar1,mar2;
				cout <<"Ingrese el nombre del jugador 1 : "<< endl;
				cin>>nombre1;
				cout << "Ingrese la marca que desea (X/0): "<<endl;
				cin >>mar1;
				Jugador* jugador1 = new JugadorHumano(nombre1,0,mar1);
				cout <<"Ingrese el nombre del jugador 2 : "<< endl;
				cin>>nombre2;
				if(mar1=='X'){
					mar2='0';
				}else{
					mar2='X';
				}
				Jugador* jugador2= new JugadorHumano(nombre2,0,mar2);
                                Jugar* juego = new Jugar(tablero, jugador1, jugador2); 
                                juego->iniciarPartida();
				
				
				break;
			}
			case 3 :{
				
				break;
			}
		}
	}
	
	delete tablero;
}