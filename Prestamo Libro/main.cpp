#include <iostream>
#include "Libro.h"
#include "Prestamo.h"
using namespace std;
/* VAR LIBRO*/
char nlibro [100];
char autor[100];





/* VAR AUTOR */
char nombre [100];
int edad;

/* VAR PRESTAMO */
long fechaI;
long fechaE;
int prestamo=0;
int conta=0;

//Prototipo de funcion
void menuPrincipal();
int libros();
int usuarios();

Libro registrar(){
    /* LIBRO */


    cout << "--- Registrar Libro ---"<<endl;
    cout << "Titulo: ";
    cin >> nlibro;
    cout << "Autor: ";
    cin >> autor;
    cout << "Libro REGISTRADO"<<endl;


    return Libro(nlibro,autor);

}

Persona registro(){

    cout << "--- Registrar usuarios ---"<<endl;
    cout << "Nombre: ";
    cin >> nombre;
    cout << "Edad: ";
    cin >> edad;
    cout << "Registro EXITOSO"<<endl;

    return Persona(nombre,edad);

}

Prestamo prestas(){

    int usuario;
    int libro;
    long fechaI;
    bool status = false;
    long fechaE;

    cout << "Numero de usuario: "<<endl;
    cin >>usuario;
    cout << "Numero de libro: "<<endl;
    cin >> libro;
    cout << "Fecha actual: "<<endl;
    cin >> fechaI;
    return Prestamo (usuario,libro,fechaI,status,fechaE);



}


int main() {


    Libro libros [10];
    Persona usuario[10];
    Prestamo presta[10];
    bool power = true;
    int op = 0;
    int users = 0;
    int book=0;
    int NoBook=0;
    int NoUser=0;
    int opcion=0;







    while (power){
        menuPrincipal();
        cin >> op;
        switch (op) {

            case 1: //USUARIO

                cout << "1. Registrar  2.Editar  3.Consultar  4.Eliminar  5.Menu Principal"<<endl;
                cin >> opcion;
                if (opcion==1){
                    usuario[users] = registro();
                    users++;
                }else if (opcion == 2){
                    cout << "Ingrese su numero de usuario: "<<endl;
                    cin >> NoUser;
                    usuario[NoUser].editar();
                }else if (opcion == 3){
                    cout << "Ingrese su numero de usuario: "<<endl;
                    cin >> NoUser;
                    usuario[NoUser].toString();
                }else if (opcion == 4){
                    cout << "Ingrese su numero de usuario: "<<endl;
                    cin >> NoUser;
                    usuario[NoUser].eliminar();
                }else if (opcion == 5){
                    break;
                }


                break;
            case 2://LIBRO

                cout << "1. Registrar  2.Editar  3.Consultar  4.Eliminar  5.Menu Principal"<<endl;
                cin >> opcion;
                if (opcion==1){
                    libros[book] = registrar();

                    book++;
                    break;
                }else if (opcion == 2){
                    cout << "Ingrese el numero de Libro: "<<endl;
                    cin >> NoBook;
                    libros[NoBook].editar();
                }else if (opcion == 3){
                    cout << "Ingrese su numero de Libro: "<<endl;
                    cin >> NoBook;
                    libros[NoBook].toString();
                }else if (opcion == 4){
                    cout << "Ingrese su numero de Libro: "<<endl;
                    cin >> NoBook;
                    libros[NoBook].eliminar();
                }else if (opcion == 5){
                    break;
                }


                break;

            case 3://PRESTAMO

                cout << "1. Realizar prestamo  2.Devolver libro  3.Consultar prestamo  4.Menu Principal"<<endl;
                cin >> opcion;
                if (opcion==1){

                    cout << "Que libro desea llevarse?"<<endl;
                    cout << "Libro: ";
                    cin >> prestamo;
                    bool p =true; // PUEDO HACERLO
                    for (int i = 0; i < conta; ++i) {
                        if (prestamo==presta[i].getLibro() and presta[i].estatus()==false){
                            cout << "Lo siento el libro esta ocupado! "<<endl;
                            p = false;

                        }

                    }

                    if (p == true){

                        presta[conta]=prestas();
                        cout << "---Libro PRESTADO---"<<endl;
                        conta++;

                    }





                }else if (opcion == 2){

                    cout << "Que libro desea regresar?"<<endl;
                    cout << "Libro: ";
                    cin >> prestamo;

                    if (prestamo==presta[prestamo].getLibro() and presta[prestamo].estatus()==false){
                        cout << "Ingresa la fecha de devolucion: ";
                        cin >> fechaE;
                        presta[prestamo].setDevolucion(fechaE);
                        cout << "---Libro DEVUELTO---"<<endl;

                    }else{
                        cout << "NO ESTA PRESTADO"<<endl;
                    }


                }else if (opcion == 3){
                    cout << "Que libro desea consultar: ";
                    cin >> prestamo;
                    if (prestamo==presta[prestamo].getLibro()){
                        presta[prestamo].toString();
                    }else{
                        cout << "Este libro no existe"<<endl;
                    }
                }else if (opcion == 4){
                    break;
                }






                break;

            default:
                power = false;
                break;
        }
    }

    return 0;

}

void menuPrincipal (){
    cout << "<========= MENU PRINCIPAL ===========>"<<endl;
    cout << "<======== 1.- Usuarios =========>"<<endl;
    cout << "<======== 2.- Libros  ==========>"<<endl;
    cout << "<======== 3.- Prestamos ========>"<<endl;
    cout << "<==============================>"<<endl;
    cout <<endl;
    cout <<"Opcion =>  "<<endl;
}






