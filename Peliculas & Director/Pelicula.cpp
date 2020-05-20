//
// Created by adria on 20/05/2020.
//

#include "Pelicula.h"
#include <iostream>
#include <cstring>
#include "Director.h"

using namespace std;

Pelicula::Pelicula(){}


Pelicula::Pelicula(char movie[100],Director boss,int annio,char genero [100],char productora [100], char minutos[100]){
    strcpy(this-> movie,movie);
    this->boss = boss;
    this-> annio=annio;
    strcpy(this -> genero,genero);
    strcpy(this -> productora,productora);
    strcpy(this -> minutos,minutos);
}



void Pelicula::editar() {
    cout << "--- Edicion de  Pelicula ---"<<endl;
    cout << "Titulo: "<<endl;
    cin >> movie;
    cout << "Annio: "<<endl;
    cin >> annio;
    cout << "Genero: "<<endl;
    cin >> genero;
    cout << "Productora: "<<endl;
    cin >> productora;
    cout << "Minutos: "<<endl;
    cin >> minutos;

}

void Pelicula::consultarAutor() {
    this-> boss.toString();
}
void Pelicula::eliminar() {
    Pelicula();
}
void Pelicula::toString() {
    cout << "=== Datos de la Pelicula ==="<<endl;
    cout<< "Nombre de la pelicula: "<< this-> movie<<endl;
    cout<< "Genero: "<< this-> genero<<endl;
    cout<< "Annio: "<< this -> annio<<endl;
    cout<< "Productora: "<< this -> productora<<endl;
    cout<< "Minutos: "<< this -> minutos<<endl;
    cout << endl<< endl;

    this-> boss.toString();

}