#include <iostream>
using namespace std;

// Funci�n que recibe dos n�meros y devuelve el mayor
int mayor(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int num1, num2;

    cout << "Ingrese el primer n�mero: ";
    cin >> num1;

    cout << "Ingrese el segundo n�mero: ";
    cin >> num2;

    int resultado = mayor(num1, num2);

    cout << "El n�mero mayor es: " << resultado << endl;

    return 0;
}

