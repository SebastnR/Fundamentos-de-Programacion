#include <iostream>
using namespace std;

int main() 
{
    cout<<"--------------------PROGRAMA SUMA DE NUMEROS HASTA EL VALOR INGRESADO------------------------------"<<endl;

    int n;
    int suma = 0;
    int i = 1;
    cout << "Ingrese un numero n para calcular la suma hasta ese valor: ";
    cin >> n;

    if (n < 0) 
    {
        cout << "Por favor, ingrese un numero no negativo." << endl;
        return 1;
    }

    do 
    {
        suma += i;
        i++;
    } 
    while (i <= n);
    cout << "La suma de los numeros hasta " << n << " es: " << suma << endl;
    return 0;
}