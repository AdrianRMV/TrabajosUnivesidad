//
// Created by adria on 13/05/2020.
//

#ifndef UNTITLED_LIBRO_H
#define UNTITLED_LIBRO_H
#include "Persona.h"

class Libro {
    private: //atributos
        char nlibro [100];
        Persona autor;
        int annio;
        char genero [100];
        char editorial [100];
        char isbn[100];



    public: //metodos
    Libro();
    Libro(char[],Persona,int,char[],char[],char[]);
    void editar();
    void eliminar();
    void consultarAutor();
    void toString();

};


#endif //UNTITLED_LIBRO_H
