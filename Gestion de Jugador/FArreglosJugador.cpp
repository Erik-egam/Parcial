#include <iostream>
using namespace std;
#include "Jugador.h"



void reservarMemoria(Jugador *&vectorJugadores, int tamanio ){
    vectorJugadores = (Jugador *)malloc(sizeof(Jugador)*tamanio);
}

void llenarVectorTamanio3(Jugador * &vector, int tamanio){
    Jugador * itGrupo = vector; 
    //Llenado de la primera posición
    (*itGrupo).apellido = "Camilo";
    (*itGrupo).Dorsales = 98;
    (*itGrupo).promedio_goles = 5.0;
    ++itGrupo;
    //Llenado de la segunda posición
    Jugador * pe = new Jugador("Juan",34,4.2); 
    *itGrupo = *pe;
}


void llenarVectorTamanio(Jugador * &vector, int tamanio) {
    Jugador *itGrupo = vector;

    for (int i = 0; i < tamanio; i++) {
        char * pApellido;
        pApellido = (char*)malloc(sizeof(char)*50);
        int pDorsal;
        double pPromedio;

        cout << "Ingrese el apellido del jugador " << i + 1 << ": ";
        cin >> *pApellido;
        cout << "Ingrese el dorsal del jugador " << i + 1 << ": ";
        cin >> pDorsal;
        cout << "Ingrese el promedio de goles del jugador " << i + 1 << ": ";
        cin >> pPromedio;

        // Asignamos los datos al jugador en la posición actual
        Jugador * pe = new Jugador(pApellido,pDorsal,pPromedio);
        itGrupo++;
    }
}


// crear la funcion para agregar un jugador al final del vector
void agregarFinal(Jugador * &vector, int &tamanio, Jugador * &newJugador){
    Jugador * it = (Jugador*)malloc(sizeof(Jugador)*(tamanio+1));
    Jugador *itGrupo =  vector;
    for(int i = 0; i < tamanio; i++){
        *it = *itGrupo;
        it++;
        itGrupo++;
    }
    *it = *newJugador;
    it = it - tamanio;
    vector = it;
    // hacemos una actualizacion al tamanio
    tamanio = tamanio + 1;
}


void eliminarJugador(Jugador * &vector, int &tamanio, int posicion){
    Jugador * it = (Jugador*)malloc(sizeof(Jugador)*(tamanio-1));
    Jugador *itGrupo =  vector;
    for(int i = 0; i < tamanio; i++){
        if(i==posicion){
            itGrupo++;
        }else{
            *it = *itGrupo;
            it++;
            itGrupo++;
        }
    }
    // hacemos una actualizacion al tamanio
    tamanio = tamanio - 1;
    it = it -tamanio;
    
};

void mostrarJugadores(Jugador *&vector, int tamanio){
    Jugador * itGrupo = vector;
    for(int i = 0; i < tamanio;i++){
        cout << "++++++++++++++++++++++++++++++" << endl; 
        (*itGrupo).mostrarContenido();
        itGrupo++;
    }
}


void liberarMemoria(Jugador *&vector, int &tamanio) {
    free(vector);  // Libera la memoria asignada
    vector = nullptr;  // Asegura que el puntero no apunte a memoria no válida
    cout << endl<< "El vector esta limpio"<< endl;
}
