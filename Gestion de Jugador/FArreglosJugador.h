#include "Jugador.h"
#ifndef arreglosJugadores_h
#define arreglosJugadores_h
#include <iostream>
using namespace std;

void reservarMemoria(Jugador *&vectorJugadores, int tamanio);
void llenarVectorTamanio3Estudiantes(Jugador * &vectorEstudiantes, int tamanio);
void llenarVectorTamanioEstudiantes(Jugador * &vectorEstudiantes, int tamanio);
void agregarFinal(Jugador * &vector, int tamanio, Jugador newJugador);




#endif
