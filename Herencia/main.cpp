#include <iostream>

/* run this program using the console 
pauser or add your own getch, system("pause") or input loop */

#include "Cuadrilatero.h"
#include "Rectangulo.h"
#include "Figura.h"
#include "Circulo.h"

#include <typeinfo>

#include <iostream>
using std::cout;
using std::endl;

int main(int argc, char** argv) {
	
	/*
	Figura* figura=new Figura();
	delete figura; 	
	
	Cuadrilatero* cuadrilatero = new Cuadrilatero();
	delete cuadrilatero;
	
	Rectangulo* rectangulo = new Rectangulo();
	delete rectangulo;
	
	
	Figura* figura2 = new Rectangulo(100,200);
	Figura* figura3 = new Rectangulo(10,20);
	
	cout<<"El área es: "<<figura2->area()<<endl;
	cout<<"El perimetro es: "<<figura2->perimetro()<<endl;
	
	cout<<typeid(*figura2).name()<<endl;
	
	if(typeid(Cuadrilatero) == typeid(*figura3)){
		cout<<" Estos objetos son del mismo tipo"<<endl;
	}
	
	
	delete figura2;
	delete figura3;
	*/
	
	//02/06/2020
	Figura* circulo = new Circulo(100);
	
		cout<<"El área es: "<<circulo->area()<<endl;
	cout<<"El perimetro es: "<<circulo->perimetro()<<endl;
	
	Figura* figura2 = new Rectangulo(100,200);
	
	if(typeid(*figura2)==typeid(*circulo)){
		cout<<"Los objetos son del mismo tipo."<<endl;
	}else
		cout<<"Los objetos no son del mismo tipo"<<endl;
	
	circulo->as();
	figura2->as();
	delete circulo;
	delete figura2;
	
	//ya no se puede porque ahora figura tiene metodos abstractos
	//Figura* figura=new Figura();
	
	
	return 0;
}
