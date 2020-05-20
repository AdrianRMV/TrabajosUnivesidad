#include <iostream>
#include "Pelicula.h"
using namespace std;
/* VAR LIBRO*/
int annio;
char movie [100];
char genero [100];
char productora [100];
char minutos[100];

/* VAR AUTOR */
char nombre [100];
char apellido [100];
char nacionalidad[100];
int n = 0;

//Prototipo de funcion
void menu();
Pelicula registrar(){
    /* LIBRO */


    cout << "--- Registrar Pelicula ---"<<endl;
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

    /* AUTOR */
    cout << "Director: "<<endl;
    cin >> nombre;
    cout << "Apellido: "<<endl;
    cin >> apellido;
    cout << "Nacionalidad: "<<endl;
    cin >> nacionalidad;
    cout << "--- DIRECTOR REGISTRADO CON EXITO ---"<<endl;
    cout<<endl;


    Director boss(nombre,apellido,nacionalidad);
    return Pelicula(movie,boss,annio,genero,productora,minutos);

}

int main() {


    Pelicula peliculas [10];
    bool power = true;
    int op = 0;
    int personaC = 0;
    int NoMovie=0;






    while (power){
        menu();
        cin >> op;
        switch (op) {

            case 1: //REGISTRO DE LIBRO
                peliculas[personaC] = registrar();
                personaC++;

                break;
            case 2://Editar los datos de la pelicula
                cout << "---EDITAR DATOS DE LA PELICULA ---"<<endl;
                cout << "Que pelicula desea editar? "<<endl;
                cout << "Ingrese su numero de pelicula: ";cin >> NoMovie;

                peliculas[NoMovie].editar();
                break;

            case 3://CONSULTAR AUTOR
                cout << "Ingrese el numero de pelicula: "<<endl;
                cin >> NoMovie;
                peliculas[NoMovie].consultarAutor();


                break;
            case 4://CONSULTAR DATOS
                cout << "Ingrese el numero de pelicula: ";
                cin >> NoMovie;
                peliculas[NoMovie].toString();
                break;
            case 5://ELIMINAR
                cout << "Ingrese el numero de pelicula que desea eliminar: ";
                cin >> NoMovie;
                peliculas[NoMovie].eliminar();
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
    cout << "<====== 1.- Registrar pelicula ======>"<<endl;
    cout << "<====== 2.- Editar datos de la pelicula >"<<endl;
    cout << "<====== 3.- Consultar  Director =====>"<<endl;
    cout << "<====== 4.- Informacion =============>"<<endl;
    cout << "<====== 5.- Elimar ==================>"<<endl;
    cout << "<==============================>"<<endl;
    cout <<endl;
    cout <<"Opcion =>  "<<endl;
}
