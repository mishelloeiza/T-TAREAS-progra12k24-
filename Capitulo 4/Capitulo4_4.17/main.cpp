#include <iostream>


// Mishel Loeiza 9959-23-3457
// En cuentra el numero mas grande y muestra el numero de iteración 
int main()
{
    using namespace std;
    int contador;
    int num1;
    int masGrande;
    contador=0;
	num1=0;
	masGrande=0;
	while(contador<10){
        cout<<"Introdusca un numero: ";
        cin>>num1;
        if (num1>masGrande){
            masGrande=num1;
        }
        contador=contador+1;
        cout<<"El numero mas grande es "<<masGrande <<" la iteracion es: "<<contador<<endl;
	}

}
