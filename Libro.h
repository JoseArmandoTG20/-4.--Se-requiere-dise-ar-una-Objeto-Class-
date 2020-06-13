#ifndef LIBRO_H
#define LIBRO_H
#include "Persona.h"


class Libro
{
    private:
        char nombrlib[100];
        int anniolib;
        char generolib[100];
        char editolib[100];
        char isbnlib[100];
        Persona autor;
    public:
        Libro();
        Libro(char[],int,char[],char[],char[],Persona);
        void registrarlib();
        void toString();
        void mostrar();
        void editar();
};

#endif // LIBRO_H
