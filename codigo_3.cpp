//Escribe un programa que convierta una cantidad de segundos ingresada por el usuario en horas, minutos y segundos
#include <iostream>
using namespace std;

int main(){
    int segundos,minutos,horas;
    cout << "Ingrese una cantidad de segundos - ";
    cin >> segundos;
    minutos = segundos / 60;
    horas = minutos / 60;
    cout << "hay " << minutos << " minutos en los segundos ingresados " << endl;
    cout << "hay " << horas << " horas en los segundos ingresados " << endl;
}