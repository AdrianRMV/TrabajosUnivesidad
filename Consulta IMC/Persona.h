//
// Created by adrian on 12/05/2020.
//

#ifndef UNTITLED_PERSONA_H
#define UNTITLED_PERSONA_H


class Persona {
    private: //atributos
        char nombres [100];
        char apellidos [100];
        int edad;
        char genero [100];
        char domicilio [100];
        int peso;
        float altura;

    public: //metodos
        Persona();
        Persona(char[],char[],int,char[],char[],int,float);
        int calcularIMC();
        void esMayorDeEdad();
        void toString();


};


#endif //UNTITLED_PERSONA_H
