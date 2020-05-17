//
// Created by adrian on 13/05/2020.
//

#include "Libro.h"
#include <iostream>
#include <cstring>

using namespace std;

Libro::Libro() {

}


Libro::Libro(char nlibro[100],Persona autor,int annio,char genero [100],char editorial [100], char isbn[100]){
    strcpy(this-> nlibro,nlibro);
    this->autor = autor;
    this-> annio=annio;
    strcpy(this -> genero,genero);
    strcpy(this -> editorial,editorial);
    strcpy(this -> isbn,isbn);
}



void Libro::editar() {
    cout << "--- Edicion de  Libro ---"<<endl;
    cout << "Titulo: "<<endl;
    cin >> nlibro;
    cout << "Annio: "<<endl;
    cin >> annio;
    cout << "Genero: "<<endl;
    cin >> genero;
    cout << "Editoral: "<<endl;
    cin >> editorial;
    cout << "ISBN: "<<endl;
    cin >> isbn;

}

void Libro::consultarAutor() {
    this-> autor.toString();
}
void Libro::eliminar() {
    Libro();
}
void Libro::toString() {
    cout << "=== Datos del Libro ==="<<endl;
    cout<< "Nombre del libro: "<< this-> nlibro<<endl;
    cout<< "Genero: "<< this-> genero<<endl;
    cout<< "Annio: "<< this -> annio<<endl;
    cout<< "Editorial: "<< this -> editorial<<endl;
    cout<< "Isbn: "<< this -> isbn<<endl;
    cout << endl<< endl;

    this-> autor.toString();

}
