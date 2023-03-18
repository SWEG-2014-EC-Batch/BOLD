#include <iostream>
using namespace std;

int main() {
    int num, first_digit, last_digit, new_num, divisor = 1;
  
    // Input the number
    cout << "Enter an integer: ";
    cin >> num;
  
    // Get the last digit
    last_digit = num % 10;
  
    // Get the number of digits by finding the highest power of 10 that divides the number
    while (num / divisor >= 10) {
        divisor *= 10;
    }
  
    // Get the first digit
    first_digit = num / divisor;
  
    // Swap the digits and rebuild the number
    new_num = last_digit * divisor + (num % divisor) / 10 * 10 + first_digit;
  
    // Output the result
    cout << "The new number is: " << new_num << endl;

    return 0;
}