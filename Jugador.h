#ifndef JUGADOR_H
#define JUGADOR_H
#include<string>
#include"Tablero.h"

using namespace std;
class Jugador {
public:
    Jugador();
   
    Jugador(string,int,char);
    string getNombre();
    int getPuntos();
    char getMarca();
    void setNombre(string);
    void setPuntos(int);
    void setMarca(char);
    virtual void elegirCasilla(Tablero*&)=0;
    void realizarJugada();
    
    virtual ~Jugador();
protected:
    string nombre;
    int puntos;
    char marca;
    
    
    

};

#endif /* JUGADOR_H */

