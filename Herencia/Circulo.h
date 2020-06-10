#ifndef CIRCULO_H
#define CIRCULO_H

#include "Figura.h"

class Circulo : public Figura
{
	public:
		Circulo();
		Circulo(double);
		
		double area();
		double perimetro(); 
		void as();
		
		
		
	protected:
		double radio;
};

#endif
