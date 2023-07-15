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
 num_attempts--;
   cout << "The number entered is not a four-digit integer. Please enter another number with four digits." << endl;
   cout << "You have " << num_attempts << " attempts left." << endl;

            continue;
        }
        break;
    }

    if (num_attempts == 0)
    {
        cout << "Sorry, you have run out of attempts. Exiting program." << endl;
        exit(0);
    }

    do
    {
        cout << "Enter your choice:" << endl;
        cout << "1. Encrypt" << endl;
        cout << "2. Decrypt" << endl;
        cin >> choice;

        if (choice != '1' && choice != '2')
        {
            cout << "Invalid choice. Please enter a valid choice (1 or 2)." << endl;
        }
    } while (choice != '1' && choice != '2');
}

// Function to encrypt the array of digits
void encrypt(int *digits)
{
    // Add 7 to each digit and take the remainder when divided by 10
    for (int i = 0; i < 4; i++)
    {
        digits[i] = (digits[i] + 7) % 10;
    }

    // Swap the first and third digits, and then swap the second and fourth digits.
    swap(digits[0], digits[2]);
    swap(digits[1], digits[3]);
}

// Function to decrypt the array of digits
void decrypt(int *digits)
{
    // Add 3 to each digit and take the remainder when divided by 10
    for (int i = 0; i < 4; i++)
    {
        digits[i] = (digits[i] + 3) % 10;
    }

    // Swap the first and third digits, and then swap the second and fourth digits.
    swap(digits[0], digits[2]);
    swap(digits[1], digits[3]);
}

// Function to display the encrypted/decrypted result
void displayResult(const int *digits)
{
    cout << "Result: ";
    for (int i = 0; i < 4; i++)
    {
        cout << digits[i];
    }
    cout << endl;
}

