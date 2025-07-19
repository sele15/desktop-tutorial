#include <iostream>
#include <string>
using namespace std;

void saludar(string nombre) {
    cout << "\n--------------------------------------------------\n";
    cout << "¡Hola, " << nombre << "!\n";
    cout << "Es un verdadero placer darte la bienvenida a este programa.\n";
    cout << "ESPEREMOS QUE TU EXPERIENCIA AQUI SE DIVERTIDA,\n";
    cout << "llena de aprendizaje y muchas satisfacciones para TI.\n";
    cout << "\nRecuerda que cada paso que das es una oportunidad para crecer,\n";
    cout << "y cada error es una enseñansa valiosa en tu camino al exito.\n";
    cout << "\nAsí que ponte cómodo/a, prepárate para explorar nuevas ideas,\n";
    cout << "y no dudes en equivocarte, experimentar y volver a intentarlo.\n";
    cout << "\n¡Comencemos esta aventura juntos, " << nombre << "! ????\n";
    cout << "--------------------------------------------------\n";
}

int main() {
    string nombreUsuario;

    cout << "Por favor, ingresa tu nombre: ";
    getline(cin, nombreUsuario);

    saludar(nombreUsuario);

    return 0;
}

