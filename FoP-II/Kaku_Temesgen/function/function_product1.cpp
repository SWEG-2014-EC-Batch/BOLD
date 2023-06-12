//A c++ program to demonstrate a function with parameter(s) and no return type.
#include <iostream>
using namespace std;

// Function declaration
void mult(float num1, float num2);

int main() {

  mult(2.7, 4.9);// Calling mult function with floating-point literals.
  float number;
  cout<<"Enter a floating-point number: ";
  cin>>number;
  mult(4.8,number); // calling mult function with floating-point literal and variable.

  float num1, num2;
  cout<<"Enter the first floating-point number: ";
  cin>>num1;
  cout<<"Enter the second floating-point number: ";
  cin>>num2;
  mult(num1, num2); // calling mult function with floating-point literal and variable.

  return 0;
}

// Function definition
void mult(float num1, float num2) {
  float result = num1 * num2;
  cout << "The result of multiplying " << num1 << " and " << num2<< " is: " << result <<endl;
}
