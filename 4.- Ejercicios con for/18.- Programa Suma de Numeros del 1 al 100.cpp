#include <iostream>

using namespace std;

int main() {
    int suma = 0;
    for (int i = 1; i <= 100; ++i) {
        suma += i;
    }
    cout << "La suma de los primeros 100 numeros enteros es: " << suma << endl;
    return 0;
}