//this is a c++ program that prints the first and the last digit of the number and find their sum.
#include <iostream>
using namespace std;

int main() {
    int num, first, last, sum;
    cout << "Enter a number: ";
    cin >> num;

    last = num % 10;
    while(num >= 10) {
        num /= 10;
    }
    first = num;

    sum = first + last;

    cout << "First digit: " << first << endl;
    cout << "Last digit: " << last << endl;
    cout << "Sum of first and last digit: " << sum;

    return 0;
}
