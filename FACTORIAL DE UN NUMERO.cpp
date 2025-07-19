#include <iostream>

unsigned long long factorial(int n) {
    unsigned long long resultado = 1;
    for (int i = 1; i <= n; ++i) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int numero;
    std::cout << "INGRESA UN NUMERO ENTERO POSITIVO: ";
    std::cin >> numero;

    if (numero < 0) {
        std::cout << "EL NUMERO DEBE SER POSITIVO." << std::endl;
    } else {
        unsigned long long resultado = factorial(numero);
        std::cout << "EL FACTORIAL DE " << numero << " ES: " << resultado << std::endl;
    }

    return 0;
}

