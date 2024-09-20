#include <iostream>
using namespace std;

int main() {
    int opcion = 2;
    switch (opcion) {
        case 1:
            cout << "Opcion 1 seleccionada" << endl;
            break;
        case 2:
            cout << "Opcion 2 seleccionada" << endl;
            break;
        case 3:
            cout << "Opcion 3 seleccionada" << endl;
            break;
        default:
            cout << "Opcion no valida" << endl;
            break;
    }
}
