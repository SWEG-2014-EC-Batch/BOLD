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
