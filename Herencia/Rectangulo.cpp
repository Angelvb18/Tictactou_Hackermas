#include "Rectangulo.h"
#include <iostream>
using std::cout ;
using std::endl;
Rectangulo::Rectangulo():Cuadrilatero()/*primera opci�n invocar constructor
de la clase base*/
{
	//segunda opci�n: accesar a los valores protected
	this->a = this->b = this->c = this->d = 0;
}
		
		
Rectangulo::Rectangulo(double pA, double pB):Cuadrilatero(pA,pB,pA,pB)
{
	//no es necesario mas c�digo
}
		
double Rectangulo::area(){
	return a * b; 
	
}
void Rectangulo::Nose(){
	cout << "Hola"<<endl;
}
void Rectangulo::as(){
	cout << "fs�fsf";
}
