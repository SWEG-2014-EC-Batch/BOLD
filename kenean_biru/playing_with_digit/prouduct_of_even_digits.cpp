#include <iostream>
using namespace std;

int main() {
  int num, digit, product = 1;
  
  cout << "Enter a number: ";
  cin >> num;
  
  
  while (num > 0) {
    digit = num % 10;
    if (digit % 2 == 0 && digit != 0) { 
      product *= digit;
    }
    num /= 10;
  }
  
  cout << "The product of the even digits in the number is: " << product << endl;

  return 0;
}