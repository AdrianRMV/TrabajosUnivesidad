//
// Created by adrian on 12/05/2020.
//

#include <iostream>
#include <cstring>
#include "Persona.h"
#include "Libro.h"

using namespace std;
Persona::Persona() {

}

Persona::Persona(char nombre[100],int edad) {

     strcpy(this -> nombre,nombre);
     this -> edad=edad;

}
void Persona::editar() {
    cout << "--- Editar USUARIO ---"<<endl;
    cout << "Nombre: "; cin >> nombre;
    cout << "Edad: "; cin >> edad;
    cout << "--- Cambios REALIZADOS ---"<<endl;
}
void Persona::toString() {
    cout << "<===== DATOS DEL USUARIO ======>"<<endl;
    cout << "Nombre: "<< this -> nombre << endl;
    cout << "Edad: "<< this -> edad << endl;
    cout << endl<<endl;
}
void Persona::eliminar() {
    Persona();
}

