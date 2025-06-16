#include <iostream>
using namespace std;

int main() 
{
    cout<<"------------------PROGRAMA CATEGORIA DE EDAD---------------------"<<endl;

    int edad;

    cout <<"Ingrese su edad: ";
    cin>> edad;
    
    if (edad >= 0 && edad <= 12) 
    {
        cout<<"Eres un niño de "<<edad<<" años"<<endl;
    } 
    else if (edad >= 13 && edad <= 17) 
    {
        cout<<"Eres un adolescente de "<<edad<<" años"<<endl;
    }
    else if (edad >= 18 && edad <= 64) 
    {
        cout<<"Eres un adulto de "<<edad<<" años"<<endl;
    } 
    else if (edad >= 65)
    {
        cout <<"Eres un adulto mayor de "<<edad<<" años"<<endl;
    }else 
    {
        cout<<"*Edad invalida*"<<endl;
    }

    return 0;
}