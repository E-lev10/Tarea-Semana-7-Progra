#include <iostream> // Biblioteca estándar para entrada y salida

using namespace std; // Permite usar elementos del espacio de nombres estándar sin escribir std::


int main() { 
	int numero = 10; // Declara una variable entera y le asigna el valor 10
	int* ptr = &numero; // Declara un puntero a entero y almacena la dirección de 'numero'

	// Muestra el valor y la dirección de la variable antes de modificarla
	cout << "Valor original de numero :" << numero << endl;
	cout << "Direccion de numero :" << &numero << endl;

	// Modifica el valor de la variable usando el puntero
	*ptr = 20;  // Modifica el valor de la variable usando el puntero

	// Muestra el nuevo valor de la variable después de modificarla a través del puntero
	cout << "Nuevo valor de numero :" << numero << endl;
	cout << "Valor accedido a traves del puntero :" << *ptr << endl;

	return 0 // Indica que el programa finalizó correctamente
}
