#include <iostream>
#include <bitset>

using namespace std;

int main() {
    int numero;
    
    cout << "Ingrese un numero: ";
    cin >> numero;
    
    bitset<32> binario(numero);
    
    cout << "La representacion en binario de " << numero << " es: " << binario << endl;
    
    return 0;
}
