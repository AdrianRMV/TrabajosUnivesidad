//
// Created by adria on 16/05/2020.
//

#ifndef UNTITLED_PRESTAMO_H
#define UNTITLED_PRESTAMO_H
#include "Libro.h"
#include "Persona.h"

class Prestamo {
    private:
    int usuario;
    int libro;
    long fechaI;
    int status=0;//Desocupado
    long fechaE;//19052020

    public:
    Prestamo();
    Prestamo(int,int,long ,bool,long);
    int getLibro();
    int getUsuario();

    int setDevolucion();

    bool estatus();

    void toString();



};


#endif //UNTITLED_PRESTAMO_H
