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
   cout << "\n";
    cout << "Welcome to the Hourglass pattern program!\n";
    cout << "This program will print the character hourglass pattern up to a maximum input of 14.\n";
    cout << "Enter the size of the pattern you want to print (at most 14): ";
    cin >> n;
    while (n > 14)
    { // Check if input is greater than 14
        cout << "Invalid input. Please enter a number at most 14: ";
        cin >> n;
    }
}

// Function to print upper half of pattern
void printUpperHalf(int n)
{
for (int i = n; i >= 1; i--)
    { // Iterate from n to 1
        for (int k = n; k >= i; k--)
        {                 // Iterate from n to i
            cout << "  "; // Print 2 spaces
        }
        for (int j = 1; j <= (2 * i) - 1; j++)
        { // Iterate from 1 to (2*i)-1
            if (j <= i)
            {
                cout << (char)('A' + j - 1) << " "; // Print letter
            }
            else
            {
                cout << (char)('A' + (2 * i) - j - 1) << " "; // Print letter
            }
        }
        cout << endl; // Move to next row
    }
}

// Function to print lower half of pattern
void printLowerHalf(int n)
{
    for (int i = 2; i <= n; i++)
    { // Iterate from 2 to n
        for (int k = n; k >= i; k--)
        {                 // Iterate from n to i
            cout << "  "; // Print 2 spaces
        }
 for (int j = 1; j <= (2 * i) - 1; j++)
        { // Iterate from 1 to (2*i)-1
            if (j <= i)
            {
                cout << (char)('A' + j - 1) << " "; // Print letter
            }
            else
            {
                cout << (char)('A' + (2 * i) - j - 1) << " "; // Print letter
            }
        }
        cout << endl; // Move to next row
    }
}
