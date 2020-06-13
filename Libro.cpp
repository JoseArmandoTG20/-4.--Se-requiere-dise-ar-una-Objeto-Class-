#include <iostream>
#include <cstring>
#include "Libro.h"
#include "Persona.h"

using namespace std;

Libro::Libro()
{
    //ctor
}

Libro::Libro(char nombrlib[100],int anniolib,char generolib[100],char editolib[100],char isbnlib[100],Persona autor)
{
    this->nombrlib[100] = nombrlib[100];
    this->anniolib = anniolib;
    this->generolib[100] = generolib[100];
    this->editolib[100] = editolib[100];
    this->isbnlib[100] = isbnlib[100];
    this->autor = autor;



    strcpy(this->nombrlib,nombrlib);
    strcpy(this->generolib,generolib);
    strcpy(this->editolib,editolib);
    strcpy(this->isbnlib,isbnlib);

}

void Libro::registrarlib()
{
    char nomlib[100];
    int anlib;
    char genlib[100];
    char isblib[100];
    char edilib[100];

    cout << "------[REGISTRO LIBRO]------" << endl;
    cout << "Nombre del Libro:";
    cin >> nomlib;
    cout << "Annio:";
    cin >> anlib;
    cout << "Genero:";
    cin >> genlib;
    cout << "ISBN:";
    cin >> isblib;
    cout << "Editorial:";
    cin >> edilib;

    autor.registaut();

    this->nombrlib[100] = nomlib[100];
    this->anniolib = anlib;
    this->generolib[100] = genlib[100];
    this->isbnlib[100] = isblib[100];
    this->editolib[100] = edilib[100];

    strcpy(this->nombrlib,nomlib);
    strcpy(this->generolib,genlib);
    strcpy(this->isbnlib,isblib);
    strcpy(this->editolib,edilib);

    cout << "------[LIBRO REGISTRADO CON EXITO]------" << endl;
}

void Libro::toString()
{
    cout << "------[DATOS LIBRO]------" << endl;
    cout << "Titulo:" << this->nombrlib << endl;
    cout << "Annio:" << this->anniolib << endl;
    cout << "Genero:" << this->generolib << endl;
    cout << "ISBN:" << this->isbnlib << endl;
    cout << "Editorial:" << this->editolib << endl;

    autor.datosautor();
}

void Libro::mostrar()
{
    autor.datosautor();
}

void Libro::editar()
{
    int po = 0;
    int po2 = 0;
    cout << "+---------------------+" << endl;
    cout << "| 1.-Titulo.          |" << endl;
    cout << "| 2.-Annio.           |" << endl;
    cout << "| 3.-Genero.          |" << endl;
    cout << "| 4.-Datos del Autor. |" << endl;
    cout << "+---------------------+" << endl;
    cout << "Que datos desea cambiar:";
    cin >> po;

    switch(po)
    {
        case 1:
            cout << "Titulo:";
            cin >> nombrlib;

            cout << "------[CAMBIO REALIZADO CON EXITO]------" << endl;
        break;

        case 2:
            cout << "Annio:";
            cin >> anniolib;

            cout << "------[CAMBIO REALIZADO CON EXITO]------" << endl;
        break;

        case 3:
            cout << "Genero:";
            cin >> generolib;
            cout << "------[CAMBIO REALIZADO CON EXITO]------" << endl;
        break;

        case 4:
            cout << "+-------------------+" << endl;
            cout << "| 1.-Nombre.        |" << endl;
            cout << "| 2.-Apellido.      |" << endl;
            cout << "| 3.-Nacionalidad.  |" << endl;
            cout << "+-------------------+" << endl;
            cout << "Que datos desea cambiar:";
            cin >> po2;

            switch(po2)
            {
                case 1:
                    autor.editnomb();
                break;

                case 2:
                    autor.editapell();
                break;

                case 3:
                    autor.editnaci();
                break;
            }

        break;
    }
}
