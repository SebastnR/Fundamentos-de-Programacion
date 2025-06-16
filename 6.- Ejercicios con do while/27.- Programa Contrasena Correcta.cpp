#include <iostream>
#include <string>

using namespace std;

int main()  
{
    cout<<"--------------ACCESO A CAJA FUERTE--------------------"<<endl;
    
    string contrasenaCorrecta = "1234567890";
    string contrasenaIngresada;
    do 
    {
        cout << "Ingrese la contraseña: ";
        cin >> contrasenaIngresada;
        if (contrasenaIngresada != contrasenaCorrecta) {
            cout << "Contrasena incorrecta. Intente de nuevo." << endl;
        }
    } 
    while (contrasenaIngresada != contrasenaCorrecta);
    cout << "Contrasena correcta. Acceso concedido." << endl;

    return 0;
}