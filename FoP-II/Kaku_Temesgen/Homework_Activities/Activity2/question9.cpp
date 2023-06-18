#include <iostream>
using namespace std;
//A program that takes 3 int arguments by reference and swaps them to display the largest, the second largest and smallest ones

// Function to swap two integer values
void swapValues(int& a, int& b);

// Function to modify values in arguments
void modifyValues(int& first, int& second, int& third);

int main() {
    int a, b, c;

    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter the third number: ";
    cin >> c;

    modifyValues(a, b, c);
    return 0;
}

// Function definition for swapValues
void swapValues(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function definition for modifyValues
void modifyValues(int& first, int& second, int& third) {

    // Print initial values
    cout << "Before swapping: first = " << first << ", second = " << second << ", third = " << third << endl;

    // Arrange the values in ascending order
    if (first < second)
        swapValues(first, second);
    if (second < third)
        swapValues(second, third);
    if (first < second)
        swapValues(first, second);

    // Print final values
    cout << "After swapping:  first = " << first << ", second = " << second << ", third = " << third << endl;
}
