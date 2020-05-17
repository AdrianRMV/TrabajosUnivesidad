//
// Created by adrian on 12/05/2020.
//

#include <iostream>
#include <cstring>
#include "Persona.h"

using namespace std;
Persona::Persona() {

}

Persona::Persona(char nombres[100], char apellidos[100], int edad, char genero [100], char domicilio[100], int peso, float altura) {

     strcpy(this -> nombres,nombres);
     strcpy(this-> apellidos,apellidos);
     this -> edad = edad;
     strcpy(this -> genero,genero);
     strcpy(this -> domicilio,domicilio);
     this -> peso = peso;
     this -> altura = altura;

}
int Persona::calcularIMC() {
    int imc = 0;
    imc = this -> peso / (this->altura * this -> altura);
    return imc;
}

void Persona::esMayorDeEdad() {

    if(this -> edad >= 18){
        cout << "El usuario es mayor de edad"<<endl;
    }
    else{
        cout<<"No es mayor de edad"<<endl;
    }
}
void Persona::toString() {
    cout << "<===== INFORMACION PERSONAL ======>"<<endl;
    cout << "Nombre: "<< this -> nombres << endl;
    cout << "Apellidos: "<< this -> apellidos << endl;
    cout << "Edad: "<< this -> edad<< endl;
    cout << "Genero: "<< this -> genero<<endl;
    cout << "Domicilio "<<this -> domicilio<<endl;
    cout << "Peso: "<< this -> peso<<endl;
    cout << "Altura: "<< this -> altura<<endl;
    cout<<"IMC: "<<this ->calcularIMC();
    cout << endl<<endl;
}