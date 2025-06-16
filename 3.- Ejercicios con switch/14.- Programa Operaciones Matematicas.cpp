#include <iostream>
using namespace std;

int main() 
{
    cout<<"------------PROGRAMA OPERACION MATEMATICA---------------------"<<endl;
    int numero;
    cout << "Ingrese un numero entre 1 y 5 para mostrar una operacion matematica: ";
    cin >> numero;

    switch (numero) 
    {
        case 1:
            cout << "Suma" << endl;
            break;
        case 2:
            cout << "Resta" << endl;
            break;
        case 3:
            cout << "Multiplicacion" << endl;
            break;
        case 4:
            cout << "Division" << endl;
            break;
        case 5:
            cout << "Modulo" << endl;
            break;
        default:
            cout << "***NUMERO INVALIDO***" << endl;
            break;
    }
    return 0;
}           