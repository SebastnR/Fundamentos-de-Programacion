#include <iostream>

using namespace std;

int main() 
{
    cout<<"------------PROGRAMA CLIMA SEGUN LA TEMPERATURA-----------------"<<endl;
    double temperatura;

    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> temperatura;

    if (temperatura < 10) 
    {
        cout << "El clima esta frio." << endl;
    } 
    else if (temperatura >= 10 && temperatura <= 20) 
    {
        cout << "El clima esta templado." << endl;
    } else 
    {
        cout << "El clima esta calido." << endl;
    }
    
    return 0;
}