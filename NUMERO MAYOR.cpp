#include <iostream>

int numeroMayor(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int num1, num2;

    std::cout << "INGRESA EL PRIMER NUMERO: ";
    std::cin >> num1;

    std::cout << "INGRESA EL SEGUNDO NUMERO: ";
    std::cin >> num2;

    int mayor = numeroMayor(num1, num2);
    std::cout << "EL NUMERO MAYOR ES: " << mayor << std::endl;

    return 0;
}

