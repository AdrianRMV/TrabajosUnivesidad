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

Persona::Persona(char nombre[100], char apellido[100],char nacionalidad[100]) {

     strcpy(this -> nombre,nombre);
     strcpy(this-> apellido,apellido);
     strcpy(this -> nacionalidad,nacionalidad);

}
void Persona::toString() {
    cout << "<===== DATOS DEL AUTOR ======>"<<endl;
    cout << "Nombre: "<< this -> nombre << endl;
    cout << "Apellidos: "<< this -> apellido << endl;
    cout << "Nacionalidad: "<< this -> nacionalidad << endl;
    cout << endl<<endl;
}
