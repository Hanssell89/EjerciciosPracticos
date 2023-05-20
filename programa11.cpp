#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool esPalindromo(const string& cadena) {
    string reverso = cadena;
    reverse(reverso.begin(), reverso.end());
    return cadena == reverso;
}

int main() {
    string cadena;
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);

    if (esPalindromo(cadena)) {
        cout << "La cadena es un palindromo." << endl;
    } else {
        cout << "La cadena no es un palindromo." << endl;
    }

    return 0;
}
