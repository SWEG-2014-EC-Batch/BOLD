#include <iostream>
#include <cmath>
using namespace std;

//A program that adds two numbers by cubing the first number and finding the square root of the second number 

double calculate(double num1, double num2);

int main() {
    double num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    
    double result = calculate(num1, num2);
    cout << "The result is: " << result << std::endl;
    return 0;
}

double calculate(double num1, double num2) {
double answer = pow(num1, 3) + sqrt(num2);
return answer;
}
