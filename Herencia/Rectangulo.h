#ifndef RECTANGULO_H
#define RECTANGULO_H

#include "Cuadrilatero.h"

class Rectangulo : public Cuadrilatero
{
	public:
		Rectangulo();
		Rectangulo(double,double);
		void as();
		double area();
		void Nose();
	protected:
		
};

#endif
