//
// Created by adrian on 12/05/2020.
//

#ifndef UNTITLED_PERSONA_H
#define UNTITLED_PERSONA_H

class Persona {
    private: //atributos
        char nombre [100];
        int edad;





    public: //metodos
        Persona();
        Persona(char[],int);
        void editar();
        void eliminar();
        void toString();//CONSULTAR
};


#endif //UNTITLED_PERSONA_H
