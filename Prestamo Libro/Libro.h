//
// Created by adria on 13/05/2020.
//

#ifndef UNTITLED_LIBRO_H
#define UNTITLED_LIBRO_H
#include "Persona.h"

class Libro {
    private: //atributos
        char nlibro [100];
        char autor [100];





    public: //metodos
        Libro();
        Libro(char[],char []);
        void editar();
        void eliminar();
        int numeroL();
        void toString();//CONSULTAR

};


#endif //UNTITLED_LIBRO_H
