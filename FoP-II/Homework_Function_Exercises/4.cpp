#include <iostream>
using namespace std; 

//A program that multiplies an integer number and double to return a double product value

double getProduct(int num1, double num2);

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

double getProduct(int num1, double num2) {
    return num1 * num2;
}

