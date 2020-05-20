#include <iostream>
#include "Libro.h"
#include "Prestamo.h"
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

/* VAR PRESTAMO */
long fechaI;
long fechaE;
int prestamo=0;
int conta=0;

//Prototipo de funcion
void menuPrincipal();
void menuLibros();
void menuUsers();
void menuPrestamos();
int libros();
int usuarios();

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
    cout << "Nombre: "<<endl;
    cin >> nombre;
    cout << "Apellido: "<<endl;
    cin >> apellido;
    cout << "Nacionalidad: "<<endl;
    cin >> nacionalidad;
    cout << "--- LIBRO REGISTRADO CON EXITO ---"<<endl;
    cout<<endl;

    Persona autor (nombre,apellido,nacionalidad);
    return Libro(nlibro,autor,annio,genero,editorial,isbn);

}

Persona registro(){

    cout << "--- Registrar usuarios ---"<<endl;
    cout << "Autor: "<<endl;
    cin >> nombre;
    cout << "Apellido: "<<endl;
    cin >> apellido;
    cout << "Nacionalidad: "<<endl;
    cin >> nacionalidad;
    cout << "--- USUARIO REGISTRADO CON EXITO ---"<<endl;
    cout<<endl;

    return Persona(nombre,apellido,nacionalidad);

}

Prestamo prestas(){

    int usuario;
    int libro;
    long fechaI;
    int status = 0;
    long fechaE;

    cout << "Numero de usuario: "<<endl;
    cin >>usuario;
    cout << "Numero de libro: "<<endl;
    cin >> libro;
    cout << "Fecha actual: "<<endl;
    cin >> fechaI;

    Prestamo nuevoPrestamo = Prestamo(usuario,libro,fechaI,status,fechaE);
    return nuevoPrestamo;



}
void mostrarLibros(Libro libros[10],int librosC){
    for (int i = 0; i < librosC; ++i) {
        cout<<"--- Libro # "<<(i)<<endl;
        libros->toString();
    }
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
    int librosC=0;
    int usuariosC=0;
    int tB;








    while (power){
        menuPrincipal();
        cin >> op;
        switch (op) {

            case 1: //USUARIO

                menuUsers();
                cin >> opcion;
                if (opcion==1){//REGISTRAR
                    usuario[users] = registro();
                    users++;
                }else if (opcion == 2){//EDITAR
                    cout << "Ingrese su numero de usuario: "<<endl;
                    cin >> NoUser;
                    usuario[NoUser] = registro();
                }else if (opcion == 3){//CONSULTAR
                    cout << "Ingrese su numero de usuario: "<<endl;
                    cin >> NoUser;
                    usuario[NoUser].toString();
                }else if (opcion == 4){//ELIMINAR
                    cout << "Ingrese su numero de usuario: "<<endl;
                    cin >> NoUser;
                    usuario[NoUser].eliminar();
                }else if (opcion == 5){//MENU PRINCIPAL
                    break;
                }


                break;
            case 2://LIBRO

                menuLibros();
                cin >> opcion;
                if (opcion==1){//REGISTRAR
                    libros[book] = registrar();

                    book++;
                    break;
                }else if (opcion == 2){//EDITAR
                    cout << "Ingrese el numero de Libro: "<<endl;
                    cin >> NoBook;
                    libros[NoBook].editar();
                }else if (opcion == 3){//CONSULTAR
                    cout << "Ingrese su numero de Libro: "<<endl;
                    cin >> NoBook;
                    libros[NoBook].toString();//ELIMINAR
                }else if (opcion == 4){
                    cout << "Ingrese su numero de Libro: "<<endl;
                    cin >> NoBook;
                    libros[NoBook].eliminar();
                }else if (opcion == 5){//DETALLES DEL LIBRO
                    cout << "Ingrese el numero de libro"<<endl;
                    cin >> NoBook;
                    libros[NoBook].toString();

                    cout << "Informacion de prestamos"<<endl;
                    for (int i = 0; i < conta; ++i) {
                        if (presta[i].getLibro()==NoBook){

                            usuario[presta[NoBook].getUsuario()].toString();


                            presta[i].toString();
                        }
                    }

                    break;
                }


                break;

            case 3://PRESTAMO

                menuPrestamos();
                cin >> opcion;
                if (opcion==1){
                    mostrarLibros(libros,librosC);
                    cout << "Que libro desea llevarse?"<<endl;
                    cout << "Libro: ";
                    cin >> prestamo;
                    bool p =true; // PUEDO HACERLO
                    for (int i = 0; i < conta; ++i) {
                        if (prestamo==presta[i].getLibro() and presta[i].estatus()==0){
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

                    usuario[presta[prestamo].getUsuario()].toString();

                    tB = presta[prestamo].getLibro();
                    libros[tB].toString();

                    if (prestamo==presta[prestamo].getLibro() and presta[prestamo].estatus()==0){
                        cout << "Ingresa la fecha de devolucion: ";
                        cin >> fechaE;
                        presta[prestamo].setDevolucion();
                        cout << "---Libro DEVUELTO---"<<endl;

                    }else{
                        cout << "NO ESTA PRESTADO"<<endl;
                    }


                }else if (opcion == 3){
                    cout << "Que libro desea consultar: ";
                    cin >> prestamo;
                    usuario[presta[prestamo].getUsuario()].toString();

                    tB = presta[prestamo].getLibro();
                    libros[tB].toString();

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
void menuLibros(){

    cout << " <======== MENU LIBRO ==========>"<<endl;
    cout << " <=== 1.- Registrar libro =====>"<<endl;
    cout << " <=== 2.- Editar libro ========>"<<endl;
    cout << " <=== 3.- Eliminar libro ======>"<<endl;
    cout << " <=== 4.- Consultar  autor ====>"<<endl;
    cout << " <=== 5.- Detalles del libro ==>"<<endl;



}
void menuUsers(){
    cout << " <======== MENU USUARIO =======>"<<endl;
    cout << " <=== 1.- Registrar usuario ===>"<<endl;
    cout << " <=== 2.- Editar usuario ======>"<<endl;
    cout << " <=== 3.- Consultar usuario ===>"<<endl;
    cout << " <=== 4.- Eliminar  usuario ===>"<<endl;
}
void menuPrestamos(){
    cout << " <======== MENU PRESTAMO ======>"<<endl;
    cout << " <=== 1.- Realizar prestamo ===>"<<endl;
    cout << " <=== 2.- Devolver libro ======>"<<endl;
    cout << " <=== 3.- Consultar prestamo ==>"<<endl;
    cout << " <=== 4.- Menu  principal ===>"<<endl;
}






