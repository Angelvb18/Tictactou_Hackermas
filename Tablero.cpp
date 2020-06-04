#include "Tablero.h"

#include <iostream>
using std::cout;
using std::endl;

Tablero::Tablero(){
	size=3;
	matriz = new Casilla**[size];
	
	for(int i = 0;i<size;i++){
		matriz[i] = new Casilla*[size];
	}
	///instanciar size x size casillas
	for(int i=0;i<size;i++)
		for(int j=0;j<size;j++)
		   matriz[i][j] = new Casilla();
	
}

Tablero::~Tablero(){
	//liberar 9 casillas
	for(int i=0;i<size;i++)
		for(int j=0;j<size;j++){
			delete matriz[i][j];
			matriz[i][j] = NULL;
		}
		
	for(int i = 0;i<size;i++){
		delete[] matriz[i];
	}
	
	delete[] matriz;
		  
}
		
bool Tablero::marcarCasilla(int i,int j){
	
	if( i < 0 || i >= size || j < 0 || j>= size){
		cout << "adsad\n";
		return false;
	}else{
		cout << "adsad\n";
		if(matriz[i][j]->getValue() == ' '){
			cout << "adsad\n";
			//matriz[i][j]->setValue(pValue);
			return true;
		}else{
			cout << "adsad\n";
			return false;
		}
	}
}


void Tablero::printTablero(){
	for(int i=0;i<size;i++){
		cout<<"|";
		for(int j=0;j<size;j++){
			cout<<matriz[i][j]->getValue()<<" ";
		}
		cout<<"|"<<endl;
	}
		
}


void Tablero::marcarCasilla2(int x,int y,char marck){
	matriz[x][y]->setValue(marck);
}
