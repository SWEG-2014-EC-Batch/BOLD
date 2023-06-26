// A C++ program that uses a recursive function to calculate the sum of digits of a given number.
#include <iostream>
using namespace std;

int sumOfDigits(int n);

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    int result=sumOfDigits(n);
    cout << "Sum of digits = " << result<< endl;
    return 0;
}

int sumOfDigits(int n) {
    if (n == 0) {
        return 0;
    } else {
        return (n % 10) + sumOfDigits(n / 10);
    }
}
