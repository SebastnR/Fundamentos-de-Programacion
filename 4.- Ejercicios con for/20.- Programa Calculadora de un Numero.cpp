#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero para su tabla de multiplicar: ";
    cin >> n;
    for (int i = 1; i <= 12; ++i) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
    return 0;
}