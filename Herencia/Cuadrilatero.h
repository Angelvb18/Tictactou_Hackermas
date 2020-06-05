#ifndef CUADRILATERO_H
#define CUADRILATERO_H

#include "Figura.h"

class Cuadrilatero : public Figura
{
	public:
		Cuadrilatero();
		Cuadrilatero(double,double,double,double);
		
		double area();
		double perimetro();
		void as();
		void setA(double);
		void setB(double);
		void setC(double);
		void setD(double);
				
		
	protected:
		double a,b,c,d;
};

#endif
