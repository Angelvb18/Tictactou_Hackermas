
#ifndef JUGADORHUMANO_H
#define JUGADORHUMANO_H

#include "Jugador.h"
#include "Tablero.h"

using namespace std;

class JugadorHumano : public Jugador {
public:
    JugadorHumano(string,int,char);
    void elegirCasilla(Tablero*&);
    void realizarJugada(int,int, Tablero*&);
    ~JugadorHumano();
private:
    string nombre;
    int puntos;
    char marca;
};

#endif /* JUGADORHUMANO_H */

