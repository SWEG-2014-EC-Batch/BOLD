//this is a c++ program that find the sum of the digits of given number.
#include <iostream>
using namespace std;

int main() {
    int num, sum=0, rem;
    cout << "Enter a number: ";
    cin >> num;

    while(num != 0) {
        rem = num % 10;
        sum += rem;
        num /= 10;
    }

    cout << "Sum of digits: " << sum;
    return 0;
}
