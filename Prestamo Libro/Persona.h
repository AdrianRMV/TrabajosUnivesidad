//
// Created by adrian on 12/05/2020.
//

#ifndef UNTITLED_PERSONA_H
#define UNTITLED_PERSONA_H

class Persona {
    private: //atributos
        char nombre [100];
        char apellido[100];
        char nacionalidad[100];





    public: //metodos
        Persona();
        Persona(char[],char[],char[]);
        void editar();
        void eliminar();
        void toString();//CONSULTAR
};


#endif //UNTITLED_PERSONA_H
