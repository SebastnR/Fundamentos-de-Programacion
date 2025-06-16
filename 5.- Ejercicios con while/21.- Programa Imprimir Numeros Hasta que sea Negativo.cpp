#include <iostream>

using namespace std;

int main() {
    int numero;
    cout << "Ingrese un numero (ingrese un numero negativo para terminar): ";
    cin >> numero;
    while (numero >= 0) {
        cout << "El numero es: " << numero << endl;
        cout << "Ingrese otro numero: ";
        cin >> numero;
    }
    cout << "Ha ingresado un numero negativo. Programa terminado." << endl;
    return 0;
}