#include<iostream>
using namespace std;

int main()
{
    cout<<"------------PROGRAMA NUMERO POSITIVO O NEGATIVO-----------------"<<endl;

    int num;

    cout<<"Ingrese un numero:";
    cin >> num;

    if (num > 0)
    {
        cout<<"El numero ingresado es Positivo"<<endl;
    }
    if (num < 0)
    {
        cout<<"El numero ingresado es Negativo"<<endl;
    }  
    else
    {
    cout<<"El numero ingresado es Neutro"<<endl;
    }
    
return 0;
}