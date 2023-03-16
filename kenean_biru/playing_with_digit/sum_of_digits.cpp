
#include <iostream>
using namespace std;

int main() {
  int num, digit, sum = 0;
  
  cout << "Enter a number: ";
  cin >> num;
  
  // find the sum of the digits in the number
  while (num > 0) {
    digit = num % 10;
    sum += digit;
    num /= 10;
  }
  
  cout << "The sum of the digits in the number is: " << sum << endl;

  return 0;
}