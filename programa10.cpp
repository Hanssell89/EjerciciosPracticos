#include <iostream>

using namespace std;

bool esPrimo(int numero) {
    if (numero <= 1)
        return false;

    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0)
            return false;
    }

    return true;
}

int main() {
    int contador = 0;
    int numero = 2;

    cout << "Los primeros 100 numeros primos son:" << endl;

    while (contador < 100) {
        if (esPrimo(numero)) {
            cout << numero << " ";
            contador++;
        }
        numero++;
    }

    return 0;
}
