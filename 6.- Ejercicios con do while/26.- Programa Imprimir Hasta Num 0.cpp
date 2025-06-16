#include <iostream>

using namespace std;

int main() {
    int numero;
    do {
        cout << "Ingrese el numeor 0 para terminar: ";
        cin >> numero;
        cout << "Ha ingresado: " << numero << endl;
    } while (numero != 0);
    cout << "**Programa terminado.**" << endl;
    return 0;
}