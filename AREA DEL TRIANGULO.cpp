#include <iostream>

float calcularAreaTriangulo(float base, float altura) {
    return (base * altura) / 2;
}

int main() {
    float base, altura;

    std::cout << "INGRESA LA BASE DEL TRIANGULO: ";
    std::cin >> base;

    std::cout << "INGRESA LA ALTURA DEL TRIANGULO: ";
    std::cin >> altura;

    float area = calcularAreaTriangulo(base, altura);
    std::cout << "EL AREA DEL TRIANGULO ES: " << area << std::endl;

    return 0;
}

