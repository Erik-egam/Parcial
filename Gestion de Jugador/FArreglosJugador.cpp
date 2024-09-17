#include <iostream>
using namespace std;
#include "Jugador.h"



void reservarMemoria(Jugador *&vectorJugadores, int tamanio ){
    vectorJugadores = (Jugador *)malloc(sizeof(Jugador)*tamanio);
}

void llenarVectorTamanio3Estudiantes(Jugador * &vectorEstudiantes, int tamanio){
    Jugador * itGrupo = vectorEstudiantes; 
    //Llenado de la primera posición
    (*itGrupo).apellido = "Pedro";
    (*itGrupo).Dorsales = 98;
    (*itGrupo).promedio_goles = 5.0;
    ++itGrupo;
    //Llenado de la segunda posición
    Jugador * pe = new Jugador("Juan",34,4.2); 
    *itGrupo = *pe;
    ++itGrupo;
}
void llenarVectorTamanioEstudiantes(Jugador * &vectorEstudiantes, int tamanio){
    Jugador *itGrupo =  vectorEstudiantes;
    for (int i = 0; i < tamanio; i++)
    {
        cout << "ingrese el apellido del jugador --> ";
        cin >> (*itGrupo).apellido;
        cout << "ingrese el Dorsales del jugador --> ";
        cin >> (*itGrupo).Dorsales;
        cout << "ingrese el Promedio de goles del jugador --> ";
        cin >> (*itGrupo).promedio_goles;
    }
    
}

// crear la funcion para agregar un jugador al final del vector
void agregarfinal(Jugador * &vector, int tamanio, Jugador newJugador){
    Jugador * it = (Jugador*)malloc(sizeof(Jugador)*(tamanio + 1));
    for(int i = 0; i < tamanio; i++){
        *it = *vector;
        it++;
        vector++;
    }
    *it = newJugador;
    it = it - tamanio - 1;
    free(vector);
    vector = it;
    free(it);
}