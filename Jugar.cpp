#include "Jugar.h"
#include "Tablero.h"
#include "Jugador.h"

Jugar::Jugar()
{
	
}
void Jugar:: iniciarPartida(){
    int turno =0;
	cout<<jugadorhumano->getNombre()<< " escogio marcar con: "<< jugadorhumano->getMarca()<<endl;
	cout<<jugadorhumano2->getNombre()<< " escogio marcar con: "<< jugadorhumano2->getMarca()<<endl; 
    while(validarGanador() == 3){
    	cout << elejirGanador(tablero,jugadorhumano,jugadorhumano2);
       if (turno % 2 == 0) {
       	cout << "Turno de " << jugadorhumano->getNombre() << endl;
         jugadorhumano->elegirCasilla(tablero);
         tablero->printTablero(); 
         
        }else {
        	cout << "Turno de " << jugadorhumano2->getNombre() << endl;
            jugadorhumano2->elegirCasilla(tablero);
            tablero->printTablero();
        }
		
       turno++;

       
     }
}

int Jugar:: validarGanador(){
     int conJ1=0, conJ2=0;
     int punto=elejirGanador(tablero,jugadorhumano,jugadorhumano2);
     
    if(punto==1){
        cout<<"Jugador 1 ha ganado "<<endl;
        conJ1++;
        jugadorhumano->setPuntos(conJ1);
    }else if(punto==2){
        cout<<"Jugador 2 ha ganado "<<endl;
        conJ2++;
        jugadorhumano->setPuntos(conJ2);
    }else{
            cout<<"Nadie ha ganado :("<<endl;
        }
    
     return punto;
    
}

int Jugar::elejirGanador(Tablero* tablero , Jugador* j1, Jugador* j2 ){ 
    int conf1 = 0, conf2 = 0, conf3 = 0;
        int conc1 = 0, conc2 = 0, conc3 = 0;
        int condi = 0, cond = 0;
        int conf12 = 0, conf22 = 0, conf32 = 0;
        int conc12 = 0, conc22 = 0, conc32 = 0;
        int condi2 = 0, cond2 = 0;
    for(int i=0; i < 3; i++){
         for(int j=0; j< 3; j++){
            if(tablero->matriz[i][j]->getValue()==j1->getMarca()){
                if (i == 0) {
                        conf1++;
                    } else if (i == 1) {
                        conf2++;
                    } else if (i == 2) {
                        conf3++;
                    }
                    if (j == 0) {
                        conc1++;
                    } else if (j == 1) {
                        conc2++;
                    } else if (j == 2) {
                        conc3++;
                    }
                    if (i + j == 2) {
                        condi++;
                    }
                    if (i == j) {
                        cond++;
                    }
                } else if (tablero->matriz[i][j]->getValue()==j2->getMarca()) {
                    if (i == 0) {
                        conf12++;
                    } else if (i == 1) {
                        conf22++;
                    } else if (i == 2) {
                        conf32++;
                    }
                    if (j == 0) {
                        conc12++;
                    } else if (j == 1) {
                        conc22++;
                    } else if (j == 2) {
                        conc32++;
                    }
                    if (i + j == 2) {
                        condi2++;
                    }
                    if (i == j) {
                        cond2++;
                    }
                }
            }
        }
        if (conf1 == 3 || conf2 == 3 || conf3 == 3 || conc1 == 3 || conc2 == 3 || conc3 == 3 || condi == 3 || cond == 3) {
            return 1;
        } else if (conf12 == 3 || conf22 == 3 || conf32 == 3 || conc12 == 3 || conc22 == 3 || conc32 == 3 || condi2 == 3 || cond2 == 3) {
            return 2;

        }
        return 3;  
                 
}
        
  Jugar :: Jugar (Tablero* tableroenviado, Jugador* jugador1 , Jugador* jugador2){
	
	this->tablero=tableroenviado ;
	this->jugadorhumano=jugador1;
	this->jugadorhumano2=jugador2; 
	
}   
  
  void mostrarPuntuaciones(Jugador* j1 ,Jugador* j2){
      cout<<" Puntos del jugador 1 es de : "<< j1->getPuntos()<<endl;
      cout<<" Puntos del jugador 2 es de : "<< j2->getPuntos()<<endl;
  }
  
  void imprimirJugadores(Jugador* j1 ,Jugador* j2){
      cout<<" Nombre jugador 1: "<< j1->getNombre()<<endl;
      cout<<" Nombre jugador 2: "<< j2->getNombre()<<endl;
      
  }
			
    
              

Jugar::~Jugar()
{
}
