#include <iostream>
using namespace std;

int main() 
{
    cout<<"----------------------------PRGRAMA ESTACION DEL AÑO-----------------------"<<endl;
    
    int estacion;
    cout << "Ingrese un numero entre 1 y 4 para mostrar el nombre de una estacion del año: ";
    cin >> estacion;

    switch (estacion) 
    {
        case 1:
            cout << "Primavera" << endl;
            break;
        case 2:
            cout << "Verano" << endl;
            break;
        case 3:
            cout << "Otono" << endl;
            break;
        case 4:
            cout << "Invierno" << endl;
            break;
        default:
            cout << "*Numero Invalido*" << endl;
            break;
    }

    return 0;
}