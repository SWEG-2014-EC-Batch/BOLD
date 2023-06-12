//A c++ program that takes two floating-point numbers as input and returns their product.
#include <iostream>
using namespace std;

// Function declaration
void mult(float num1, float num2);

int main() {
    float num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    mult(num1, num2);
    return 0;
}

// Function definition
void mult(float num1, float num2) {
    float product = num1 * num2;
    cout << "Product of " << num1 << " and " << num2 << " is " << product;
}
