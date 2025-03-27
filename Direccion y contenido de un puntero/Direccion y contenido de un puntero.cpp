#include <iostream>  //Incluye la biblioteca estándar de entrada y salida, esto ya lo sabemos

using namespace std;  //Esto nos permite que en cada linea de codigo no estemos poniendo "std::" al final, esto lo hace automaticamente

int main() {
    int numero = 10;  //Declara una variable entera y le asigna un valor

    int* ptr = &numero;  //Sirve para declarar un puntero a entero y almacena la dirección de 'numero'