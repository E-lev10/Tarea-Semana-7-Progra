#include <iostream>

using namespace std;

void intercambiar(int* a, int* b) {
    int temp = *a = ;
    *a = *b;
    *b = temp;
}
int main() {
    int num1 = 10, num2 = 20;
    cout << "Antes del intercambio :" << endl;
    cout << "num1 =" << num1 << ", num2 =" << num2 << endl;

    intercambiar(&num1, &num2);
    cout << "Despues del intercambio :" << endl;
    cout << "num1 =" << num1 << ", num2 =" << num2 << endl;

    return 0;
}
      
