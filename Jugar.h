#ifndef JUGAR_H
#define JUGAR_H
#include "Jugador.h"
#include "JugadorHumano.h"
#include "Tablero.h"

#include <iostream>

class Jugar
{
	public:
		Jugar();
		Jugar (Tablero*, Jugador*, Jugador*);
		void iniciarPartida();
		int validarGanador();
		int elejirGanador(Tablero* , Jugador* , Jugador* );
		void mostrarPuntuaciones(Jugador* ,Jugador*);
		void imprimirJugadores(Jugador* ,Jugador*);
               
		~Jugar();
	protected:
		Tablero* tablero= NULL ;
		Jugador* jugadorhumano = NULL;
		Jugador* jugadorhumano2 = NULL;
};

#endif