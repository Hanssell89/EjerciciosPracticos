#include <iostream>

using namespace std;

int pell(int n) {
    if (n <= 2) {
        return n;
    }
    
    int a = 0;
    int b = 1;
    
    for (int i = 3; i <= n; i++) {
        int temp = a + 2 * b;
        a = b;
        b = temp;
    }
    
    return b;
}

int main() {
    cout << "Secuencia de numeros de Pell (los primeros 20 terminos):" << endl;
    
    for (int i = 1; i <= 20; i++) {
        cout << pell(i) << " ";
    }
    
    cout << endl;
    
    return 0;
}
