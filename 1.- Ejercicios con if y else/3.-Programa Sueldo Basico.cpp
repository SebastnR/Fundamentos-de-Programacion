#include<iostream>
using namespace std;

int main()
{
    cout<<"------------PROGRAMA SUELDO BASICO-----------------"<<endl;

    double sueldo;

    cout<<" Ingrese el sueldo que percibe al mes: ";
    cin >> sueldo;

    if (sueldo > 470)
    {
        cout<<" Usted esta por encima del Salario Basico"<<endl;
    }
        else
        {
        cout<<" Usted esta por debajo del Salario Basico"<<endl;
        }
    
return 0;
}