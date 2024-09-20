//Crea una clase llmada Estudiante que tenga solo el nombre y la calificacion del estudiante. 
//El programa mostrara la información del estudiante y si ha aprobado.
#include <iostream>
#include <string>
using namespace std;

class Estudiante {
private:
    string nombre;
    int calificacion;

public:
    Estudiante(string nombre, float calificacion) {
        this->nombre = nombre;
        this->calificacion = calificacion;
    }

    void mostrarInformacion() {
        cout << "Nombre del estudiante - " << nombre << endl;
        cout << "Calificación del estudiante - " << calificacion << endl;

        if (calificacion >= 60) {
            cout << "Aprobado :D" << endl;
        } else {
            cout << "Desaprobado (:v)" << endl;
        }
    }
};

int main() {
    string nombre;
    int calificacion;

    cout << "Ingrese el nombre del estudiante: ";
    getline(cin, nombre);

    cout << "Ingrese la calificacion del estudiante: ";
    cin >> calificacion;

    Estudiante estudiante(nombre, calificacion);

    estudiante.mostrarInformacion();
}