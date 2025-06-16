#include <iostream>

using namespace std;

int main() {
    int numero;
    int sumaDigitos = 0;
    cout << "Ingrese un numero positivo: ";
    cin >> numero;

    if (numero < 0) {
        cout << "Por favor, ingrese un numero positivo." << endl;
        return 1;
    }

    int tempNumero = numero;
    while (tempNumero > 0) {
        sumaDigitos += tempNumero % 10;
        tempNumero /= 10;
    }
    cout << "La suma de los digitos de " << numero << " es: " << sumaDigitos << endl;
    return 0;
}