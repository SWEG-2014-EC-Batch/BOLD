#include <iostream>
using namespace std;

void mult(float num1, float num2);

int main()
{
    float number1, number2;

    cout << "Enter the first number: ";
    cin >> number1;

    cout << "Enter the second number: ";
    cin >> number2;

    mult(number1, number2);

    return 0;
}

void mult(float num1, float num2)
{
    float result = num1 * num2;
    cout << "The product of " << num1 << " and " << num2 << " is: " << result << endl;
}
