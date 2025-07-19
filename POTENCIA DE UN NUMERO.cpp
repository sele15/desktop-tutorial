#include <iostream>

int potencia(int base, int exponente) {
    int resultado = 1;
    for (int i = 0; i < exponente; ++i) {
        resultado *= base;
    }
    return resultado;
}

int main() {
    int base, exponente;

    std::cout << "Ingresa la base: ";
    std::cin >> base;

    std::cout << "Ingresa el exponente (entero no negativo): ";
    std::cin >> exponente;

    if (exponente < 0) {
        std::cout << "Este programa solo admite exponentes no negativos." << std::endl;
    } else {
        int resultado = potencia(base, exponente);
        std::cout << base << "^" << exponente << " = " << resultado << std::endl;
    }

    return 0;
}

