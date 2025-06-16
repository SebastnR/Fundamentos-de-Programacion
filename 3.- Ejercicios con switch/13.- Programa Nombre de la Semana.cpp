#include <iostream>

using namespace std;

int main() {
    int dia;
    cout << "Ingrese un numero entre 1 y 3 para mostrar el nombre de un dia de la semana: ";
    cin >> dia;
    switch (dia) {
        case 1:
            cout << "Lunes" << endl;
            break;
        case 2:
            cout << "Martes" << endl;
            break;
        case 3:
            cout << "Miercoles" << endl;
            break;
        default:
            cout << "Numero fuera de rango." << endl;
            break;
    }
    return 0;
}