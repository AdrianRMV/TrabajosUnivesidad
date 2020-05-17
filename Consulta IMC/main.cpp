#include <iostream>
#include <math.h>
#include <cstring>
#include <string>
#include <cstdlib>
#include <stdio.h>
#include <sstream>
#include <time.h>
#include "Persona.h"

using namespace std;

//Prototipo de funcion
void menu();
void IMC (int imc);
Persona registrar(){
    /* DATOS NECESARIOS PARA CREAR UN USUARIO */
    char nombres [100];char apellidos [100];
    int edad;char genero [100];
    char domicilio [100];int peso;float altura;

    cout << "Ingrese su nombre: "<<endl;
    cin >> nombres;
    cout << "Ingrese su apellido"<<endl;
    cin >> apellidos;
    cout << "Ingrese su edad: "<<endl;
    cin >> edad;
    cout << "Ingrese su genero: "<<endl;
    cin >> genero;
    cout << "Ingrese su domicilio: "<<endl;
    cin >> domicilio;
    cout << "Ingrese su peso: "<<endl;
    cin >> peso;
    cout << "Ingrese su altura: "<<endl;
    cin >> altura;
    return Persona(nombres,apellidos,edad,genero,domicilio,peso,altura);
}


int main() {

    Persona personas [10];
    bool power = true;
    int op = 0;
    int personaC = 0;
    int NoUser =0;
    int imc =0;



    while (power){
        menu();
        cin >> op;
        switch (op) {

            case 1: //REGISTRO DE USUARIO
                personas[personaC] = registrar();
                personaC ++;

                break;
            case 2://CALCULO DE INDICE DE MASA CORPORAL

                cout << "Ingrese el numero de usuario: "<<endl;
                cin >> NoUser;

                imc = personas[NoUser].calcularIMC();
                IMC(imc);

                break;

            case 3://CONSULTAR EL DATA
                cout << "Ingrese el numero de usuario: "<<endl;
                cin >> NoUser;

                personas[NoUser].toString();
                break;

            default:
                power = false;
                break;
        }
    }

    return 0;

}

void menu (){
    cout << "<============= MENU ===========>"<<endl;
    cout << "<==== 1.- Registrar usuario====>"<<endl;
    cout << "<==== 2.- Calcular IMC ========>"<<endl;
    cout << "<==== 3.- Consultar  Data =====>"<<endl;
    cout << "<==============================>"<<endl;
    cout <<endl;
    cout <<"Opcion =>  "<<endl;
}
void IMC(int imc){
    if (imc <= 18){
        cout << "Bajo peso"<<endl;

    } else if (imc > 18 and imc <= 24){
        cout << "Normal"<<endl;
    } else if (imc >= 25 and imc <=29){
        cout << "Sobrepeso"<<endl;
    } else if (imc >= 30){
        cout << "Obesooooo"<<endl;
    }

}
