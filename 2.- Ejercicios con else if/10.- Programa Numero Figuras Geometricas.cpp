#include <iostream>
using namespace std;

int main() 
{
    cout<<"------------------PROGRAMA TIPOS DE FIGURA GEOMETRICA---------------------"<<endl;

    int num;

    cout << "Ingrese un numero del 1 al 5 para determinar el tipo de figura geometrica :" << endl;
    cin >> num;

    if (num == 1) 
    {
        cout << "Es un cuadrado." << endl;
    } else if (num == 2) 
    {
        cout << "Es un triangulo." << endl;
    } else if (num == 3) 
    {
        cout << "Es un circulo." << endl;
    } else if (num == 4) 
    {
        cout << "Es un rectangulo." << endl;
    } else if (num == 5) 
    {
        cout << "Es un pentagono." << endl;
    } else 
    {
        cout << "Numero Invalido" << endl;
    }

    return 0;
}