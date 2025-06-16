#include <iostream>

using namespace std;

int main() {
    int numero;
    cout << "Ingrese un numero (ingrese un numero mayor a 100 para terminar): ";
    cin >> numero;
    while (numero <= 100) {
        cout << "El numero es: " << numero << endl;
        cout << "Ingrese otro numero: ";
        cin >> numero;
    }
    cout << "Ha ingresado un numero mayor a 100. Programa terminado." << endl;
    return 0;
}