#include <iostream>

using namespace std;

int main() {
    int numero;
    do {
        cout << "Ingrese un numero entre 1 y 5: ";
        cin >> numero;
        if (numero < 1 || numero > 5) {
            cout << "*Numero Incorrecto* "<<endl <<"Por favor, ingrese un numero entre 1 y 5." << endl;
        }
    } while (numero < 1 || numero > 5);
    cout << "Ha ingresado un numero valido: " << numero << endl;
    return 0;
}