#include <iostream>
#include <string>

using namespace std;

int main() {
    string cadena;
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);

    int contadorVocales = 0;

    for (char caracter : cadena) {
        switch (tolower(caracter)) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                contadorVocales++;
                break;
            default:
                break;
        }
    }

    cout << "La cadena contiene " << contadorVocales << " vocales." << endl;

    return 0;
}
