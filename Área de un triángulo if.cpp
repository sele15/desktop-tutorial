#include <iostream>
using namespace std;

// Función que calcula el área de un triángulo
double calcularAreaTriangulo(double base, double altura) {
    if (base <= 0 || altura <= 0) {
        cout << "Error: La base y la altura deben ser mayores que cero." << endl;
        return 0;  // o podrías retornar -1 como código de error
    }

    double area = (base * altura) / 2;
    return area;
}

int main() {
    double base, altura;

    cout << "Ingrese la base del triángulo: ";
    cin >> base;

    cout << "Ingrese la altura del triángulo: ";
    cin >> altura;

    double area = calcularAreaTriangulo(base, altura);

    if (area > 0) {
        cout << "El área del triángulo es: " << area << endl;
    }

    return 0;
}

