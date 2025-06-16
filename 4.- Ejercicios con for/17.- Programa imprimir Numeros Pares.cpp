#include <iostream>

using namespace std;

int main() 
{
    int n;
    cout << "Ingrese el numero de impresiones de numeros pares: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) 
    {
        cout << 2 * i << endl;
    }
    return 0;
}