#include <iostream>
#include <cstring>
#include "Persona.h"

using namespace std;

Persona::Persona()
{
    //ctor
}

Persona::Persona(char nombraut[100],char apellaut[100],char nacioaut[100])
{
    this->nombraut[100] = nombraut[100];
    this->apellaut[100] = apellaut[100];
    this->nacioaut[100] = nacioaut[100];

    strcpy(this->nombraut,nombraut);
    strcpy(this->apellaut,apellaut);
    strcpy(this->nacioaut,nacioaut);
}

void Persona::registaut()
{
    char nomaut[100];
    char apelaut[100];
    char nacaut[100];

    cout << "------[REGISTRO AUTOR]------" << endl;
    cout << "Nombre del autor:";
    cin >> nomaut;
    cout << "Apellido:";
    cin >> apelaut;
    cout << "Nacionalidad:";
    cin >> nacaut;

    this->nombraut[100] = nomaut[100];
    this->apellaut[100] = apelaut[100];
    this->nacioaut[100] = nacaut[100];

    strcpy(this->nombraut,nomaut);
    strcpy(this->apellaut,apelaut);
    strcpy(this->nacioaut,nacaut);
}

void Persona::editnomb()
{
    cout << "Nombre:";
    cin >> nombraut;

    cout << "------[CAMBIO REALIZADO CON EXITO]------" << endl;
}

void Persona::editapell()
{
    cout << "Apellido:";
    cin >> apellaut;

    cout << "------[CAMBIO REALIZADO CON EXITO]------" << endl;
}

void Persona::editnaci()
{
    cout << "Nacionalidad:";
    cin >> nacioaut;
    cout << "------[CAMBIO REALIZADO CON EXITO]------" << endl;
}

void Persona::datosautor()
{
    cout << "------[DATOS DEL AUTOR]------" << endl;
    cout << "Nombre:" << this->nombraut << " " << this->apellaut << endl;
    cout << "Nacionalidad:" << this->nacioaut << endl;
}
