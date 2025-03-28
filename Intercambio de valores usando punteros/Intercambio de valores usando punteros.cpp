#include <iostream> // Biblioteca est�ndar para entrada y salida

using namespace std;// Permite usar elementos del espacio de nombres est�ndar sin escribir std::

// Funci�n que intercambia dos valores enteros usando punteros.
// a Puntero al primer n�mero.
// b Puntero al segundo n�mero.


void intercambiar(int* a, int* b) {
    int temp = *a = ; // Guarda el valor de 'a' en una variable temporal
    *a = *b; // Asigna el valor de 'b' a 'a'
    *b = temp;  // Asigna el valor almacenado en 'temp' a 'b
}
int main() { 
    int num1 = 10, num2 = 20; // Se declaran dos variables enteras con valores iniciales
    cout << "Antes del intercambio :" << endl; // Muestra los valores originales antes del intercambio
    cout << "num1 =" << num1 << ", num2 =" << num2 << endl;

    intercambiar(&num1, &num2);  // Llama a la funci�n intercambiar pasando las direcciones de num1 y num2
    cout << "Despues del intercambio :" << endl;  // Muestra los valores despu�s del intercambio
    cout << "num1 =" << num1 << ", num2 =" << num2 << endl;

    return 0; // Indica que el programa finaliz� correctamente
}
      
