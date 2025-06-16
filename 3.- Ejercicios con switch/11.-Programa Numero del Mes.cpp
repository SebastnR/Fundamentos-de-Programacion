#include <iostream>

using namespace std;

int main() 
{
    cout<<"----------------------------PRGRAMA NUMERO DEL MES-----------------------"<<endl;

    int mes;

    cout << "Ingrese un numero entre 1 y 5 para mostrar el nombre del mes: ";
    cin >> mes;

    switch (mes) 
    {
        case 1:
            cout << "Enero" << endl;
            break;
        case 2:
            cout << "Febrero" << endl;
            break;
        case 3:
            cout << "Marzo" << endl;
            break;
        case 4:
            cout << "Abril" << endl;
            break;
        case 5:
            cout << "Mayo" << endl;
            break;
        default:
            cout << "*Numero Invalido*" << endl;
            break;
    }
    return 0;
}