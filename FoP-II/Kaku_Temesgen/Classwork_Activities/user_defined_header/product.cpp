// A c++ program to demonstrate a user-defined header file.
#include <iostream>
#include "calculator.h"

using namespace std;

int main() {
    int firstNum;
    double secondNum;

    cout << "Enter the first number (integer): ";
    cin >> firstNum;
    cout << "Enter the second number (double): ";
    cin >> secondNum;

    double product = getProduct(firstNum, secondNum);

    cout << "The Product is: " << product << endl;

    return 0;
}
