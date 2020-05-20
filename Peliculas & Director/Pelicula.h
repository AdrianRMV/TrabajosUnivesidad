//
// Created by adria on 20/05/2020.
//

#ifndef UNTITLED1_PELICULA_H
#define UNTITLED1_PELICULA_H
#include "Director.h"

class Pelicula {
private: //atributos
    char movie [100];
    Director boss;
    int annio;
    char genero [100];
    char productora [100];
    char minutos[100];



public: //metodos
    Pelicula();
    Pelicula(char[],Director,int,char[],char[],char[]);
    void editar();
    void eliminar();
    void consultarAutor();
    void toString();
};


#endif //UNTITLED1_PELICULA_H
