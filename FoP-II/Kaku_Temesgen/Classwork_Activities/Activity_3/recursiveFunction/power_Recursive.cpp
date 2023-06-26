// A c++ program that calculate the power of number using recursive function.
#include <iostream>
using namespace std;

int power(int base, int exponent);

int main() {
    int base, exponent;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;
    cout << base << "^" << exponent << " = " << power(base, exponent) << endl;
    return 0;
}

int power(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    } else {
        return base * power(base, exponent - 1);
    }
}
