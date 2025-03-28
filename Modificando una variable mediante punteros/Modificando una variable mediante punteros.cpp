#include <iostream>

using namespace std;

int main() {
	int numero = 10;
	int* ptr = &numero;
	cout << "Valor original de numero :" << numero << endl;
	cout << "Direccion de numero :" << &numero << endl;

	*ptr = 20;
	cout << "Nuevo valor de numero :" << numero << endl;
	cout << "Valor accedido a traves del puntero :" << *ptr << endl;

	return 0
}
