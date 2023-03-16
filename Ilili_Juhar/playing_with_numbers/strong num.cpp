#include <iostream>
using namespace std;

int main() {
    int num, temp, rem, sum = 0, fact;

    cout << "Enter a positive integer: ";
    cin >> num;

    temp = num;

    while (temp != 0) {
        rem = temp % 10;
        fact = 1;
        for (int i = 1; i <= rem; i++) { // calculate factorial of current digit
            fact *= i;
        }
        sum += fact; // add factorial of current digit to sum
        temp /= 10;
    }

    if (sum == num) {
        cout<<"The number is a strong number.";
    } else {
        cout <<"The number is not a strong number.";
    }

    return 0;
}
