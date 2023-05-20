#include <iostream>

using namespace std;

int main() {
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    cout << "Tabla de multiplicar para " << numero << ":" << endl;
    for (int i = 1; i <= 10; ++i) {
        int producto = numero * i;
        cout << numero << " x " << i << " = " << producto << endl;
    }

    return 0;
}
