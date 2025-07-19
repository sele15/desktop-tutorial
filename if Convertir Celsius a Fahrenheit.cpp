#include <iostream>
using namespace std;

// Función que convierte Celsius a Fahrenheit
double convertirCelsiusAFahrenheit(double celsius) {
    if (celsius < -273.15) {
        cout << "Error: La temperatura no puede ser menor que el cero absoluto (-273.15 °C)." << endl;
        return 0;  // o podrías retornar un código de error como -999
    }

    double fahrenheit = (celsius * 9.0 / 5.0) + 32;
    return fahrenheit;
}

int main() {
    double gradosCelsius;

    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> gradosCelsius;

    double resultado = convertirCelsiusAFahrenheit(gradosCelsius);

    if (gradosCelsius >= -273.15) {
        cout << "La temperatura en Fahrenheit es: " << resultado << " °F" << endl;
    }

    return 0;
}

