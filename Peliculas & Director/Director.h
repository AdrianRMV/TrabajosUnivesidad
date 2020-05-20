//
// Created by adria on 20/05/2020.
//

#ifndef UNTITLED1_DIRECTOR_H
#define UNTITLED1_DIRECTOR_H


class Director {
    private: //atributos
        char nombre [100];
        char apellido [100];
        char nacionalidad[100];





    public: //metodos
        Director();
        Director(char[],char[],char[]);
        void toString();
};


#endif //UNTITLED1_DIRECTOR_H
