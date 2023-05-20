#include <iostream>
#include <cmath>

using namespace std;

int countDigits(int number) {
    int count = 0;
    while (number != 0) {
        number /= 10;
        count++;
    }
    return count;
}

bool isArmstrongNumber(int number) {
    int originalNumber = number;
    int numDigits = countDigits(number);
    int sum = 0;

    while (number != 0) {
        int digit = number % 10;
        sum += pow(digit, numDigits);
        number /= 10;
    }

    return sum == originalNumber;
}

int main() {
    int number;
    cout << "Ingrese un numero: ";
    cin >> number;

    if (isArmstrongNumber(number)) {
        cout << number << " es un numero Armstrong." << endl;
    } else {
        cout << number << " no es un numero Armstrong." << endl;
    }

    return 0;
}
