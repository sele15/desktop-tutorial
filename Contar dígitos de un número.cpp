#include <iostream>
#include <cmath>  // Para abs()
using namespace std;

// Función que cuenta cuántos dígitos tiene un número entero
int contarDigitos(int numero) {
    numero = abs(numero);  // Convertir a positivo si es negativo

    if (numero == 0)
        return 1;

    int contador = 0;
    while (numero > 0) {
        numero /= 10;  // Elimina el último dígito
        contador++;
    }
    return contador;
}

int main() {
    int numero;

    cout << "INGRESA UN NUMERO ENTERO : ";
    cin >> numero;

    int digitos = contarDigitos(numero);

    cout << "EL NUMERO TIENE " << digitos << " DIGITO(s)." << endl;

    return 0;
}

