#include <iostream>
using namespace std;

int main() 
{
    int numero;
    int contador = 0;
    cout << "Ingrese 10 numeros o mas para terminar el programa: " << endl;
    while (true) 
    {
        cout << "Ingrese un numero: ";
        cin >> numero;
        if (numero < 10) {
            contador++;
        } else {
            break;
        }
    }
    cout << "Ha ingresado " << contador << " veces un numero menor que 10." << endl;
    return 0;
}