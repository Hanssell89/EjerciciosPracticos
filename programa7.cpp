#include <iostream>

using namespace std;

int calcularMCD(int num1, int num2) {
    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    return num1;
}

int main() {
    int numero1, numero2;

    cout << "Ingrese el primer numero: ";
    cin >> numero1;

    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    int mcd = calcularMCD(numero1, numero2);

    cout << "El maximo comun divisor (MCD) de " << numero1 << " y " << numero2 << " es: " << mcd << endl;

    return 0;
}
