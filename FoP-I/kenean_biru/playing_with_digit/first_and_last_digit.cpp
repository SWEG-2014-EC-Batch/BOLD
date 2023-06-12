#include <iostream>
using namespace std;

int main() {
    int num, first_digit, last_digit;

    cout << "Enter a number: ";
    cin >> num;

    
    last_digit = num % 10; 
    while (num > 0) {
        first_digit = num % 10;
        num /= 10;
    }

    
    cout << "First digit: " << first_digit << endl;
    cout << " Last digit: " << last_digit << endl;

  
    int sum = first_digit + last_digit;
    cout << "The sum of the first and last digits: " << sum << endl;

    return 0;
}