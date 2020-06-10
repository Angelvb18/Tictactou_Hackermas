#include "Circulo.h"

#define PI 3.1416
Circulo::Circulo()
{
	radio = 0;
}


Circulo::Circulo(double pRadio){
	radio=pRadio;
}
		
double Circulo::area(){
	return radio*radio*PI;		
}
double Circulo::perimetro(){
    return 2*radio*PI;	
} 
void Circulo::as(){
	cout << "Tu mami" << endl;
}
