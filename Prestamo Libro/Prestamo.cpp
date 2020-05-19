//
// Created by adria on 16/05/2020.
//
#include <iostream>
#include <cstring>
#include "Prestamo.h"
#include "Libro.h"

using namespace std;
Prestamo::Prestamo() {

}

Prestamo::Prestamo(int usuario,int libro,long fechaI,bool status,long fechaE) {

    this -> usuario=usuario;
    this->libro=libro;
    this -> fechaI=fechaI;
    this -> status=status;
    this -> fechaE=fechaE;


}

int Prestamo::getUsuario() {
    return this -> usuario;
}

int Prestamo::getLibro() {
    return this -> libro;
}
bool Prestamo::estatus() {
    return this -> status;
}
void Prestamo::setDevolucion(long fechaE){
    this -> fechaE=fechaE;
    this -> status=false;
}
void Prestamo::toString() {
    cout << "Numero de usuario: "<<this -> usuario<<endl;
    cout << "Numero de libro: "<<this -> libro<<endl;
    cout << "Fecha prestamo: "<<this -> fechaI<<endl;
    cout << "Estado del prestamo: "<<this -> status<<endl;
    cout << "Fecha devuelta: "<<this -> fechaE<<endl;

}


