all: hello

hello: main.o Casilla.o Char.o Tablero.o Jugar.o Jugador.o JugadorHumano.o
	g++ main.o Casilla.o Char.o Tablero.o Jugar.o Jugador.o JugadorHumano.o -o hello


main.o: main.cpp
	g++ -c main.cpp

Casilla.o: Casilla.cpp
	g++ -c Casilla.cpp

Char.o: Char.cpp
	g++ -c Char.cpp

Tablero.o: Tablero.cpp
	g++ -c Tablero.cpp
Jugar.o: Jugar.cpp
	g++ -c Jugar.cpp
Jugador.o: Jugador.cpp
	g++ -c Jugador.cpp
JugadorHumano.o: JugadorHumano.cpp
	g++ -c JugadorHumano.cpp 

clean:
	rm -rf *o hello
