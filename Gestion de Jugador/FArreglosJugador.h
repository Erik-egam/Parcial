#include "Jugador.h"
#ifndef arreglosJugadores_h
#define arreglosJugadores_h
#include <iostream>
using namespace std;

    void reservarMemoria(Jugador *&vectorJugadores, int tamanio );
    void llenarVectorTamanio3(Jugador * &vector, int tamanio);
    void llenarVectorTamanio(Jugador * &vector, int tamanio);
    void agregarFinal(Jugador * &vector, int &tamanio, Jugador * &newJugador);
    void eliminarJugador(Jugador * &vector, int &tamanio, int posicion);
    void mostrarJugadores(Jugador * & vector, int tamanio);
    void liberarMemoria(Jugador *&vector, int &tamanio);


#endif
