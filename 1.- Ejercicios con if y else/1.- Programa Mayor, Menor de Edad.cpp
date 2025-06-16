#include<iostream>
using namespace std;
int main ()
{
    int edad;

    cout<<"------------PROGRAMA MAYOR Y MENOR DE EDAD-----------------"<<endl;  

    cout<<"Por favor, ingrese su edad: ";
    cin>>edad;

    if (edad>=18)
    {
        cout<<"Usted es mayor de edad";
    }
    else
    {
        cout<<"Usted es menor de edad";
    }
    
    return 0;
}