//tis is a c++ program that find the product of even digits of the a given number.
#include <iostream>
using namespace std;

int main() {
    int num, prod=1, rem;
    cout << "Enter a number: ";
    cin >> num;

    while(num != 0) {
        rem = num % 10;
        if(rem % 2 == 0) {      // check if digit is even
            prod *= rem;
        }
        num /= 10;
    }

    cout << "Product of even digits: " << prod;
    return 0;
}
