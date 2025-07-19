#include <iostream>
using namespace std;

// Funci�n que calcula el �rea de un tri�ngulo
double calcularAreaTriangulo(double base, double altura) {
    if (base <= 0 || altura <= 0) {
        cout << "Error: La base y la altura deben ser mayores que cero." << endl;
        return 0;  // o podr�as retornar -1 como c�digo de error
    }

    double area = (base * altura) / 2;
    return area;
}

int main() {
    double base, altura;

    cout << "Ingrese la base del tri�ngulo: ";
    cin >> base;

    cout << "Ingrese la altura del tri�ngulo: ";
    cin >> altura;

    double area = calcularAreaTriangulo(base, altura);

    if (area > 0) {
        cout << "El �rea del tri�ngulo es: " << area << endl;
    }

    return 0;
}

