#ifndef FIGURA_H
#define FIGURA_H
#include <iostream>
using std::cout;
using std::endl;
class Figura 
{
	public:
		virtual void as();
		virtual double area() =0 ; //M�todo Virtual Puro
		virtual double perimetro() =0 ; //equivale a un m�todo abstract
										//en JAVA
	protected:
		
};

#endif
