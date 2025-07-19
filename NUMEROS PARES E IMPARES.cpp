#include <iostream>

void esParOImpar(int numero) {
    if (numero % 2 == 0) {
        std::cout << numero << " ES UN NUMERO PAR." << std::endl;
    } else {
        std::cout << numero << " ES UN NUMERO IMPAR." << std::endl;
    }
}

int main() {
    int num;
    std::cout << "INGRESA UN NUMERO: ";
    std::cin >> num;

    esParOImpar(num);

    return 0;
}

