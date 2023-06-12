//this is a c++ program that check if a number is Armstrong or not.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, original, digit, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    original = num;
    while(num != 0) {
        digit = num % 10;
        sum += pow(digit, 3);
        num /= 10;
    }

    if(original == sum) {
        cout << original << " is an Armstrong number.";
    }
    else {
        cout << original << " is not an Armstrong number.";
    }

    return 0;
}
