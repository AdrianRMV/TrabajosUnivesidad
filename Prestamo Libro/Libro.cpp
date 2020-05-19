//
// Created by adrian on 13/05/2020.
//

#include "Libro.h"
#include "Prestamo.h"
#include <iostream>
#include <cstring>

using namespace std;

Libro::Libro() {

}


Libro::Libro(char nlibro[100],char autor[100]){
    strcpy(this-> nlibro,nlibro);
    strcpy(this -> autor,autor);




}

void Libro::editar() {
    cout << "--- Edicion de  Libro ---" << endl;
    cout << "Titulo: " << endl;
    cin >> nlibro;
    cout << "Autor: " << endl;
    cin >> autor;
    cout << "--- Cambios REALIZADOS ---"<<endl;
}
void Libro::eliminar() {
    Libro();
}
void Libro::toString() {
    cout << "=== Informacion del libro ==="<<endl;
    cout<< "Nombre del libro: "<< this-> nlibro<<endl;
    cout<< "Autor: "<< this-> autor<<endl;

    cout << endl<< endl;
}



