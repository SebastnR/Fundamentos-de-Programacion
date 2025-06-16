#include <iostream>

using namespace std;

int main() {
    int n;
    long long factorial = 1;
    cout << "Ingrese un numero n: ";
    cin >> n;
    if (n < 0) {
        cout << "No se puede calcular el factorial de un numero negativo." << endl;
    } else {
        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << "El factorial de " << n << " es: " << factorial << endl;
    }
    return 0;
}