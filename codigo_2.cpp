//Escribe un programa que invierta los dígitos de un numero entero positivo.
// Por ejemplo, si el usuario ingresa 123, el programa debe imprimir en la consola 321.
#include <iostream>
using namespace std;

int main(){
    int numero, invertido = 0;

    cout << "Ingrese un numero positivo - ";
    cin >> numero;

    if (numero <= 0) {
        cout << "Por favor, ingrese un numero positivo" << endl;
    } else {
        while (numero > 0) {
            int digito = numero % 10;
            invertido = invertido * 10 + digito;
            numero /= 10;
        }
        cout << "Numero invertido - " << invertido << endl;
    }
}