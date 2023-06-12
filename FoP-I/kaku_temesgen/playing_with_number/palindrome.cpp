//this is a c++ program that check whether a number is palindrome or not.
#include <iostream>
using namespace std;

int main() {
    int num, temp, rev = 0;
    cout << "Enter a number: ";
    cin >> num;

    temp = num;
    while(temp != 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    if(num == rev) {
        cout << num << " is a palindrome number.";
    }
    else {
        cout << num << " is not a palindrome number.";
    }

    return 0;
}
