#include <iostream>
// Agregear libreria string (Para usar operadores que manipulan cadena == y !=) ademas de usar string
#include <string>
// Mishel Loeiza //9959-23-3457
int main() {
    using namespace std;
    string respuesta;
// Inicar el loops con true  para ingresar a la calculadora
    while (true) {
        break;
        }
// Mishel Loeiza //9959-23-3457
       float litros,kilometros,resultado;
       litros=0;
       kilometros=0;
       resultado =0;
        cout << "Introdusca los kilometros recorridos: ";
        cin >> kilometros;
         cout << "Introduzca los litros usados: ";
        cin >> litros;
        resultado=kilometros/litros;
        cout<<"El total de kilompetros por litros es: "<<resultado<<endl;
          cout << "¿Deseas hacer otra operacion? (s/n): ";
        cin >> respuesta;
         cout << "¿Deseas iniciar la calculadora? (s/n): ";
        cin >> respuesta;

        if (respuesta == "n" || respuesta == "n") {

    }
    cout<<"Gracias por preferir nuestro servicio"<<endl;
    return 0;
}
