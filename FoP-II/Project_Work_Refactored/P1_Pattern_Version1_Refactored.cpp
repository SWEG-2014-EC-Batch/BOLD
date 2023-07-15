#include <iostream>
using namespace std;

// A program that prints a character Hourglass pattern
void getInput(int &n);
void printUpperHalf(int n);
void printLowerHalf(int n);

int main()
{
    char choice;
    do
    {
        int n;
        getInput(n); // Get input from user
cout << endl;
        printUpperHalf(n); // Print upper half of pattern
        printLowerHalf(n); // Print lower half of pattern

        cout << "\n";
        cout << "Do you want to print again? (Y/N): ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');

    return 0;
}

// Function to get input from user
void getInput(int &n)
{
