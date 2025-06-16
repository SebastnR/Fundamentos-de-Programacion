#include <iostream>
using namespace std;

int main() 
{
    cout<<"------------------------------PROGRAMA DIA DE LA SEMANA------------------------------"<<endl;
    
    int num;

    cout<<"Ingrese un número entre 1 y 7: ";
    cin>>num;

    if (num == 1) 
    {
        cout<<"Lunes" <<endl;
    } else if (num == 2) 
    {
        cout<<"Martes" <<endl;
    }else if (num == 3) 
    {
        cout<<"Miercoles"<<endl;
    } else if (num == 4) 
    {
        cout<<"Jueves" <<endl;
    } else if (num == 5) 
    {
        cout<<"Viernes" <<endl;
    } else if (num == 6) 
    {
        cout<<"Sabado" <<endl;
    } else if (num == 7) 
    {
        cout<<"Domingo" <<endl;
    } else
    {
        cout<<"El número ingresado es incorrecto. Debe ser entre 1 y 7: "<<endl;
    }
    return 0;
}