#include <iostream>
using namespace std;

int main() {
    int suma = 0;  // Variable para acumular la suma de los números

    cout << "Imprimiendo los números del 1 al 10:\n" << endl;

    for (int i = 1; i <= 10; i++) {
        cout << "Número: " << i;

        // Verificar si el número es par o impar
        if (i % 2 == 0) {
            cout << " (Par)";
        } else {
            cout << " (Impar)";
        }

        cout << endl;

        // Acumular la suma
        suma += i;
    }

    cout << "\nLa suma total de los números del 1 al 10 es: " << suma << endl;

    return 0;
}

