#include <iostream>
#include "Libro.h"
#include "Persona.h"

using namespace std;

void menu()
{
    cout << "+------------------------------+" << endl;
    cout << "|   1.-Registrar libro.        |" << endl;
    cout << "|   2.-Editar datos del libro. |" << endl;
    cout << "|   3.-Consultar autor.        |" << endl;
    cout << "|   4.-Consultar datos.        |" << endl;
    cout << "|   5.-Eliminar.               |" << endl;
    cout << "+------------------------------+" << endl;
}



int main()
{
    bool sistema = true;
    int opc = 0;
    int numlib = 0;

    Libro lib[10];

    while(sistema == true)
    {
        menu();
        cout << "Que opcion desea realizar:";
        cin >> opc;

        switch(opc)
        {
            case 1:
                lib[numlib].registrarlib();
                cout << "Numero de registro:" << numlib << endl;
                numlib ++;
            break;

            case 2:
                cout << "Que libro desea editar:";
                cin >> numlib;

                lib[numlib].editar();
            break;

            case 3:
                cout << "Que autor desea conocer:";
                cin >> numlib;

                lib[numlib].mostrar();
            break;

            case 4:
                cout << "Que libro desea consultar:";
                cin >> numlib;

                lib[numlib].toString();
            break;

            case 5:
                cout << "Que libro desea eliminar:";
                cin >> numlib;

                lib[numlib] = Libro();
                cout << "------[LIBRO ELIMINADO]------" << endl;
            break;

            default:
                cout << "------[VUELVA PRONTO]------" << endl;
                sistema = false;
            break;
        }
    }
    return 0;
}
