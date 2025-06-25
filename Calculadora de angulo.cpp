#include <iostream>
#include <cmath>  // Necesario para sin() y cos()

using namespace std;

int main() {
    double angulo;

    // Leer el ángulo en radianes
    cout << "Ingrese el angulo en radianes: ";
    cin >> angulo;

    // Calcular seno y coseno
    double seno = sin(angulo);
    double coseno = cos(angulo);

    // Imprimir resultados
    cout << "Seno: " << seno << endl;
    cout << "Coseno: " << coseno << endl;

    return 0;
}
