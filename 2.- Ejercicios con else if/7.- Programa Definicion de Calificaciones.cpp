#include <iostream>
using namespace std;

int main() 
{
    cout<<"------------PROGRAMA CALIFICACION-----------------"<<endl;

    double calificacion;

    cout << "Ingrese la calificacion sobre 100: ";
    cin >> calificacion;

    if (calificacion >= 90) 
    {
        cout << "La calificacion es excelente." << endl;
    } 
    else if (calificacion >= 70 && calificacion <= 89) 
    {
        cout << "La calificacion es buena." << endl;
    } 
    else if (calificacion >= 50 && calificacion <= 69) 
    {
        cout << "La calificacion es regular." << endl;
    } 
    else 
    {
        cout << "La calificacion es mala." << endl;
    }

    return 0;
}