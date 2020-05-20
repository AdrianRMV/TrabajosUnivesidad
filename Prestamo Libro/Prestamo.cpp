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
int Prestamo::setDevolucion(){

    return this -> status;
}
void Prestamo::toString() {

    cout << "Fecha prestamo: "<<this -> fechaI<<endl;
    if(this ->status == 1){
        cout << "Estado del proceso: Ocupado"<<endl;
    }else{
        cout << "Estaod del prestamo: Devuelto"<<endl;
        cout << "Fecha final "<<this->fechaE<<endl;
    }


}


