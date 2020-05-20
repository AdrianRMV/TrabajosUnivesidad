//
// Created by adria on 20/05/2020.
//
#include <iostream>
#include <cstring>
#include "Pelicula.h"
#include "Director.h"
using namespace std;
Director::Director(){

}

Director::Director(char nombre[100], char apellido[100],char nacionalidad[100]) {

    strcpy(this -> nombre,nombre);
    strcpy(this-> apellido,apellido);
    strcpy(this -> nacionalidad,nacionalidad);

}
void Director::toString() {
    cout << "<===== DATOS DEL DIRECTOR ======>"<<endl;
    cout << "Nombre: "<< this -> nombre << endl;
    cout << "Apellidos: "<< this -> apellido << endl;
    cout << "Nacionalidad: "<< this -> nacionalidad << endl;
    cout << endl<<endl;
}
