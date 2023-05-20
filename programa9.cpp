#include <iostream>

using namespace std;

bool esNumeroPerfecto(int numero) {
    int sumaDivisores = 0;
    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            sumaDivisores += i;
        }
    }
    return sumaDivisores == numero;
}

int main() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    if (esNumeroPerfecto(numero)) {
        cout << numero << " es un numero perfecto." << endl;
    } else {
        cout << numero << " no es un numero perfecto." << endl;
    }

    return 0;
}
