
#include "Jugador.h"

Jugador::Jugador() {
    
}

    string Jugador:: getNombre(){
        return this->nombre;
    }
    int Jugador:: getPuntos(){
        return this->puntos;
    }
    char Jugador:: getMarca(){
        return this->marca;
    }
    void Jugador:: setNombre(string name){
        this->nombre=name;
    }
    void Jugador:: setPuntos(int points){
        this->puntos=points;
    }
    void Jugador:: setMarca(char marc){
        this->marca=marc;
    }
    Jugador::Jugador(string name ,int punto ,char marc){
        this->nombre=name;
        this->puntos=punto;
        this->marca=marc;
        
    }

Jugador::~Jugador() {
}

