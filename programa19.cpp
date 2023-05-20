#include <iostream>

using namespace std;

int main() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    int sumaDigitosPares = 0;
    int digito;

    while (numero > 0) {
        digito = numero % 10;
        if (digito % 2 == 0) {
            sumaDigitosPares += digito;
        }
        numero /= 10;
    }

    cout << "La suma de los digitos pares es: " << sumaDigitosPares << endl;

    return 0;
}
