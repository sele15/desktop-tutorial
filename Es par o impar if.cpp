#include <iostream>
using namespace std;

// Funci�n que determina si un n�mero es par o impar
void esParOImpar(int numero) {
    if (numero % 2 == 0) {
        cout << "EL NUMERO  " << numero << " ES  IMPAR ." << endl;
    } else {
        cout << "EL NUMERO  " << numero << " ES  PAR ." << endl;
    }
}

int main() {
    int numero;

    cout << "INGRESE  UN NUMERO ENTERO : ";
    cin >> numero;

    esParOImpar(numero);

    return 0;
}

