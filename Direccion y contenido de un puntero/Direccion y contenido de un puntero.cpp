#include <iostream>  //Incluye la biblioteca est�ndar de entrada y salida, esto ya lo sabemos

using namespace std;  //Esto nos permite que en cada linea de codigo no estemos poniendo "std::" al final, esto lo hace automaticamente

int main() {
    int numero = 10;  //Declara una variable entera y le asigna un valor

    int* ptr = &numero;  //Sirve para declarar un puntero a entero y almacena la direcci�n de 'numero'

        cout << "Direccion de la variable numero: " << &numero << endl;  //Muestra la direcci�n de nuestro 'numero' directamente
        cout << "Direccion almacenada en el puntero ptr: " << ptr << endl;  //Muestra la direcci�n almacenada en nuestro puntero
        cout << "Valor de la variable numero usando el puntero: " << *ptr << endl;  //Muestra el valor de 'numero' que va subiendo mediante el puntero

        return 0;  //Esto nos quiere decir que el programa finaliz� retornando 0
    }