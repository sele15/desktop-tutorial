#include <iostream>
#include <cmath> // Para usar log10

int contarDigitos(int numero) {
    if (numero == 0) {
        return 1;
    }

    // Si el número es negativo, lo convertimos a positivo
    numero = std::abs(numero);

    return static_cast<int>(log10(numero)) + 1;
}

int main() {
    int num;
    std::cout << "INGRESE UN NUMERO ENTERO: ";
    std::cin >> num;

    int cantidad = contarDigitos(num);
    std::cout << "EL NUMERO TIENE " << cantidad << " dígito(s)." << std::endl;

    return 0;
}

