#include <iostream>

using namespace std;

int main() {
    int numero;
    do {
        cout << "Ingrese un numero (ingrese un numero negativo para terminar): ";
        cin >> numero;

        if (numero < 0) {
            cout << "Ha ingresado un numero negativo. Programa terminado." << endl;
            break;
        }

        if (numero <= 1) {
            cout << numero << " no es un numero primo." << endl;
        } else {
            bool esPrimo = true;
            for (int i = 2; i * i <= numero; ++i) {
                if (numero % i == 0) {
                    esPrimo = false;
                    break;
                }
            }
            if (esPrimo) {
                cout << numero << " es un numero primo." << endl;
            } else {
                cout << numero << " no es un numero primo." << endl;
            }
        }
    } 
    while (true);

    return 0;
}