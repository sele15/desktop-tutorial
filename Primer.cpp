#include <iostream> // Librería para entrada y salida
#include <string>   // Para usar tipo de dato string

using namespace std;

int main() {
    string nombre;
    int edad;

    // Solicita nombre y edad
    cout << "Ingrese su nombre: ";
    getline(cin, nombre); // Captura el nombre completo (con espacios)

    cout << "Ingrese su edad: ";
    cin >> edad;

    // Muestra mensaje personalizado
    cout << "Hola, " << nombre << ". Tienes " << edad << " años." << endl;

    return 0;
}
