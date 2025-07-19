#include <iostream>

int sumar(int a, int b) {
    return a + b ;
}

int main() {
    int num1, num2;
    
    std::cout << "INGRESE EL PRIMER NUMERO: ";
    std::cin >> num1;
    
    std::cout << "INGRESE EL SEGUNDO NUMERO: ";
    std::cin >> num2;
   

    int resultado = sumar(num1, num2);
    std::cout << "La suma es: " << resultado << std::endl;

    return 0;
}

