#include <iostream>
using namespace std;
// Convertir de decimal a binario
// Mishel loeiza 9959-23-3457
int main() {
    int binario, digito,decimal , base;
    decimal=0;
    base=1;

    cout << "Introduce un número en  binario: ";
    cin >> binario;

    while(binario > 0) {
            // Extraer el dijito a la derecha
        digito = binario % 10;
        decimal += digito * base;
        // Eliminar el dijito a la derecha
        binario /= 10;

        base *= 2;
    }

    cout << "El equivalente decimal es: " << decimal << endl;

    return 0;
}

