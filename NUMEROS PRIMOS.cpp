#include <iostream>

bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i * i <= numero; ++i) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    std::cout << "INGRESA UN NUMERO ENTERO: ";
    std::cin >> num;

    if (esPrimo(num)) {
        std::cout << num << " ES UN NUMERO PRIMO." << std::endl;
    } else {
        std::cout << num << " NO  ES UN NUMERO PRIMO ." << std::endl;
    }

    return 0;
}

