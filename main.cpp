#include <iostream>
using namespace std;
#include "Gestion de Jugador/Jugador.h"
#include "Gestion de Jugador/FArreglosJugador.h"

int main (){
    // creamos el vector
    Jugador * Vector;
    // reservamos memoria por medio de nuestra libreria
    int tamanio = 2;
    reservarMemoria(Vector,tamanio);
    // llenamos el vector con una funcion prueba
    cout <<  "Llenar vector con informacion de prueba " << endl;
    
    llenarVectorTamanio3(Vector,tamanio);
    // funcion con intraccion con el usuario
    // llenarVectorJugadores(Vector,tamanio);
    cout << "hacemos una muestra de los jugadores en el vector" << endl;
    mostrarJugadores(Vector,tamanio);
    cout << endl;
    cout << endl << "^^^^^^^^^^^^^agregamos un nuevo jugador^^^^^^^^^^^^^^^^^^^^^^" << endl;
    // creamos un nuevo jugador
    Jugador * newJugador = new Jugador("Erik",9,5.7);
    // lo enviamos a nuestra funcion para agregar
    // lo hacemos asi para rapidez en la evaluacion del codigo
    agregarFinal(Vector,tamanio,newJugador);
    //Mostramos que hay d
    mostrarJugadores(Vector,tamanio);
    cout << endl << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
    cout << endl;
    cout << endl << "^^^^^^^^^^^^^eliminamos un nuevo jugador^^^^^^^^^^^^^^^^^^^^^^" << endl;
    // eliminamos a un jugador mandando por parametro la posicion del jugador
    eliminarJugador(Vector,tamanio,2);
    // mostramos despues de eliminar
    mostrarJugadores(Vector,tamanio);
    cout << endl << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
    liberarMemoria(Vector,tamanio);
    cout << "mostramos el valor del vector despues de limpiarlo -->   ";
    cout << Vector;
    //  se libera directamente en la funcion la variable newJugador

    }
