#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero para la secuencia de Fibonacci: ";
    cin >> n;

    if (n < 0) {
        cout << "Ingrese un numero no negativo." << endl;
        return 1;
    }
    if (n == 0) {
        cout << "La secuencia de Fibonacci hasta 0 es: 0" << endl;
        return 0;
    }
    if (n == 1) {
        cout << "La secuencia de Fibonacci hasta 1 es: 0, 1" << endl;
        return 0;
    }

    int a = 0, b = 1;
    cout << "Secuencia de Fibonacci hasta " << n << ": " << a << ", " << b;

    int nextTerm = a + b;
    while (nextTerm <= n) {
        cout << ", " << nextTerm;
        a = b;
        b = nextTerm;
        nextTerm = a + b;
    }
    cout << endl;
    return 0;
}