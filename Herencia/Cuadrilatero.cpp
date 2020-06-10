#include "Cuadrilatero.h"

Cuadrilatero::Cuadrilatero(){
	a=b=c=d=0;
}


Cuadrilatero::Cuadrilatero(double pA,double pB,double pC,double pD){
	a=pA;
	b=pB;
	c=pC;
	d=pD;
}
		
double Cuadrilatero::area(){
		return -10;	
}
void Cuadrilatero::as(){
	cout <<"eya";
}
double Cuadrilatero::perimetro(){
	return a+b+c+d;		
}
		
void Cuadrilatero::setA(double pA){
	a=pA;
}
void Cuadrilatero::setB(double pB){
	b=pB;
}
void Cuadrilatero::setC(double pC){
	c=pC;
}
void Cuadrilatero::setD(double pD){
	d= pD;
}
