#include <iostream>
using namespace std;

int main() {
    int suma = 0;  // Variable para acumular la suma de los n�meros

    cout << "Imprimiendo los n�meros del 1 al 10:\n" << endl;

    for (int i = 1; i <= 10; i++) {
        cout << "N�mero: " << i;

        // Verificar si el n�mero es par o impar
        if (i % 2 == 0) {
            cout << " (Par)";
        } else {
            cout << " (Impar)";
        }

        cout << endl;

        // Acumular la suma
        suma += i;
    }

    cout << "\nLa suma total de los n�meros del 1 al 10 es: " << suma << endl;

    return 0;
}

