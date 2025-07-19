#include <iostream>
using namespace std;

// Funci�n que recibe dos n�meros y retorna su suma
double sumar(double a, double b) {
    return a + b;
}

int main() {
    double num1, num2;
    char opcion;

    do {
        cout << "\n==============================\n";
        cout << "      SUMADOR INTERACTIVO     \n";
        cout << "==============================\n";

        cout << "Ingrese el primer n�mero: ";
        cin >> num1;

        cout << "Ingrese el segundo n�mero: ";
        cin >> num2;

        // Llamar a la funci�n y mostrar resultado
        double resultado = sumar(num1, num2);
        cout << "\nResultado: " << num1 << " + " << num2 << " = " << resultado << endl;

        // Preguntar si desea continuar
        cout << "\n�Deseas realizar otra suma? (s/n): ";
        cin >> opcion;

    } while (opcion == 's' || opcion == 'S');

    cout << "\nGracias por usar el sumador. �Hasta luego!\n";

    return 0;
}

