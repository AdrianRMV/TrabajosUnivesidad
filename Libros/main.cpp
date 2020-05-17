#include <iostream>
#include "Libro.h"

using namespace std;
/* VAR LIBRO*/
int annio;
char nlibro [100];
char genero [100];
char editorial [100];
char isbn[100];

/* VAR AUTOR */
char nombre [100];
char apellido [100];
char nacionalidad[100];
int n = 0;

//Prototipo de funcion
void menu();

Libro registrar(){
    /* LIBRO */


    cout << "--- Registrar Libro ---"<<endl;
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

    /* AUTOR */
    cout << "Autor: "<<endl;
    cin >> nombre;
    cout << "Apellido: "<<endl;
    cin >> apellido;
    cout << "Nacionalidad: "<<endl;
    cin >> nacionalidad;
    cout << "--- LIBRO REGISTRADO CON EXITO ---"<<endl;
    cout<<endl;


    Persona autor(nombre,apellido,nacionalidad);
    return Libro(nlibro,autor,annio,genero,editorial,isbn);

}


int main() {


    Libro libros [10];
    bool power = true;
    int op = 0;
    int personaC = 0;
    int NoBook=0;






    while (power){
        menu();
        cin >> op;
        switch (op) {

            case 1: //REGISTRO DE LIBRO
                libros[personaC] = registrar();
                personaC++;

                break;
            case 2://Editar los datos del libro
                cout << "---EDITAR DATOS DEL LIBRO ---"<<endl;
                cout << "Que libro desea editar? "<<endl;
                cout << "Ingrese su numero de libro: ";cin >> NoBook;

                libros[NoBook].editar();
                break;

            case 3://CONSULTAR AUTOR
                cout << "Ingrese el numero de libro: "<<endl;
                cin >> NoBook;
                libros[NoBook].consultarAutor();


                break;
            case 4://CONSULTAR DATOS
                cout << "Ingrese el numero de libro: ";
                cin >> NoBook;
                libros[NoBook].toString();
                break;
            case 5://ELIMINAR
                cout << "Ingrese el numero de libro que desea eliminar: ";
                cin >> NoBook;
                libros[NoBook].eliminar();
                break;
            default:
                power = false;
                break;
        }
    }

    return 0;

}

void menu (){
    cout << "<=============== MENU ===============>"<<endl;
    cout << "<====== 1.- Registrar libro =========>"<<endl;
    cout << "<====== 2.- Editar datos del libro ==>"<<endl;
    cout << "<====== 3.- Consultar  autor ========>"<<endl;
    cout << "<====== 4.- Consultar  datos ========>"<<endl;
    cout << "<====== 5.- Elimar ==================>"<<endl;
    cout << "<==============================>"<<endl;
    cout <<endl;
    cout <<"Opcion =>  "<<endl;
}




