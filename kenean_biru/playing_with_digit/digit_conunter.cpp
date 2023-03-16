#include <iostream>
using namespace std;

int main() {
  int num;
  int count = 0;
  
  cout << "Enter a number: ";
  cin >> num;
  
  // if input number is 0, it has only one digit
  if (num == 0) {
    count = 1;
  }
  
  // count the number of digits in the given number
  while (num > 0) {
    count++;
    num /= 10;
  }
  
  cout << "The number of digits in the given number is: " << count << endl;

  return 0;
}