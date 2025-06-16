#include <iostream>
using namespace std;

int main() 
{
    cout<<"------------PROGRAMA CALIFIACION DEL ESTUDIANTE-----------------"<<endl;
    double calificacion;

    cout << "Ingrese la calificacion del estudiante sobre 100: ";
    cin >> calificacion;

    if (calificacion >= 60)
    {
        cout << "El estudiante aprobo." << endl;
    } 
    else 
    {
        cout << "El estudiante reprobo." << endl;
    }

    return 0;
}