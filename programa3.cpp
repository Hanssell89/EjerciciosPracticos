#include <iostream>

using namespace std;

int main() {
    int numero;
    unsigned long factorial = 1;

    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero < 0) {
        cout << "No se puede calcular el factorial de un numero negativo." << endl;
        return 0;
    }

    for (int i = 1; i <= numero; ++i) {
        factorial *= i;
    }

    cout << "El factorial de " << numero << " es: " << factorial << endl;

    return 0;
}
