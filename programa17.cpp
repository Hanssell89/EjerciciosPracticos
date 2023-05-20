#include <iostream>

using namespace std;

bool esNumeroPerfecto(int numero) {
    int sumaDivisores = 0;
    
    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            sumaDivisores += i;
        }
    }
    
    if (sumaDivisores == numero) {
        return true;
    }
    
    return false;
}

int main() {
    int numero;
    
    cout << "Ingrese un numero: ";
    cin >> numero;
    
    if (esNumeroPerfecto(numero)) {
        cout << "El numero es perfecto." << endl;
    } else {
        cout << "El numero no es perfecto." << endl;
    }
    
    return 0;
}
