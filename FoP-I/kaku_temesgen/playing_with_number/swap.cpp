//this c++ program swaps the first and the last digit of a given number.
#include <iostream>
using namespace std;

int main() {
    int num, first_digit, last_digit, new_num, divisor = 1;

    cout << "Enter an integer: ";
    cin >> num;

    last_digit = num % 10;

    while (num / divisor >= 10) {
        divisor *= 10;
    }

    first_digit = num / divisor;

    new_num = last_digit * divisor + (num % divisor) / 10 * 10 + first_digit;

    cout << "The new number is: " << new_num << endl;

    return 0;
}

