#include <iostream>
#include <algorithm>
using namespace std;

// An encryption/decryption program that allows the company to securely transmit four-digit data over the telephone
void encrypt(int *);
void decrypt(int *);
void displayResult(const int *);
void acceptNumber(int &, char &);

int main()
{
    int number;
    char choice;

    cout << "\n\nWelcome to the Data Encryption/Decryption Program!" << endl;
    cout << "This program allows you to securely transmit a four-digit integer over the telephone." << endl;

    do
    {
acceptNumber(number, choice);

        switch (choice)
        {
        case '1':
            encrypt(&number);
            displayResult(&number);
            break;
        case '2':
            decrypt(&number);
            displayResult(&number);
            break;
        default:
            cout << "Invalid choice. Please enter a valid choice (1 or 2)." << endl;
            break;
        }

        cout << "Do you want to perform another operation? (Y/N): ";
        cin >> choice;
 } while (choice == 'Y' || choice == 'y');

    cout << "Thank you for using the Data Encryption/Decryption Program!" << endl;
    return 0;
}

// Function to accept a four-digit number and the choice of operation
void acceptNumber(int &number, char &choice)
{
    int max_attempts = 4;
    int num_attempts = max_attempts;

    while (num_attempts > 0)
    {
        cout << "\nEnter a four-digit integer: ";
        cin >> number;

        if (number < 1000 || number > 9999)
        {
