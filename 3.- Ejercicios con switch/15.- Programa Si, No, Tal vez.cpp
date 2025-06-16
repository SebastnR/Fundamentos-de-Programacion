#include <iostream>

using namespace std;

int main() 
{
    cout<<"---------------PROGRAMA SI, NO, TAL VEZ-----------------------"<<endl;

    int opcion;
    cout << "Ingrese un numero entre 1 y 3 para mostrar una respuesta:"<<endl;
    cout << "1: Si" << endl;
    cout << "2: No" << endl;
    cout << "3: Tal vez" << endl;
    cout << "Opcion: ";
    cin >> opcion;


    switch (opcion) 
    {
        case 1:
            cout << "Si" << endl;
            break;
        case 2:
            cout << "No" << endl;
            break;
        case 3:
            cout << "Tal vez" << endl;
            break;
        default:
            cout << "Opcion no valida." << endl;
            break;
    }
    return 0;
}