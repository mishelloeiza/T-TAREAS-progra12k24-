#include <iostream>
using namespace std;
//static_cast convierte un tipo de dato en otro
int main() {
    // Declaraci�n de la variable de tipo char
    char caracter;

    // Solicitar al usuario que introduzca un car�cter
    cout << "Introduzca un caracter: ";
    cin >> caracter;

    // Imprimir el equivalente entero del car�cter
    // static_cast<int>(caracter)  convierte en el tipo de dato declarado en valor dado
    cout << "El equivalente entero de '" << caracter << "' es " << static_cast<int>(caracter) << endl;

    return 0;
}
