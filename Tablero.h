#ifndef TABLERO_H
#define TABLERO_H

#include "Casilla.h"

class Tablero
{
	public:
		Tablero();
		
		bool marcarCasilla(int,int);
                void marcarCasilla2(int,int,char);
		void printTablero();
		Casilla*** matriz; 
		~Tablero();
	protected:
		//matriz de apuntadores a casillas
		
		int size;
};

#endif
