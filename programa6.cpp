#include <iostream>

using namespace std;

int main() {
    int num1 = 0, num2 = 1, nextTerm = 0;

    cout << "Serie de Fibonacci hasta el numero 1000:" << endl;

    while (nextTerm <= 1000) {
        cout << nextTerm << " ";

        num1 = num2;
        num2 = nextTerm;
        nextTerm = num1 + num2;
    }

    return 0;
}
