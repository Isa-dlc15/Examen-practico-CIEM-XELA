//Crea un programa que convierta un numero entero entre 0 y 9 en su representación en palabras.
// Por ejemplo, si el usuario ingresa 3, el programa debe imprimir en la consola "tres".
#include <iostream>
using namespace std;

int main(){
    int numero;

    cout << "Ingrese un numero entero entre 0 y 9: ";
    cin >> numero;

    switch (numero) {
        case 0:
            cout << "cero" << endl;
            break;
        case 1:
            cout << "uno" << endl;
            break;
        case 2:
            cout << "dos" << endl;
            break;
        case 3:
            cout << "tres" << endl;
            break;
        case 4:
            cout << "cuatro" << endl;
            break;
        case 5:
            cout << "cinco" << endl;
            break;
        case 6:
            cout << "seis" << endl;
            break;
        case 7:
            cout << "siete" << endl;
            break;
        case 8:
            cout << "ocho" << endl;
            break;
        case 9:
            cout << "nueve" << endl;
            break;
        default:
            cout << "Fuera del rango" << endl;
            break;
    }
}
