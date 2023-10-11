#include<iostream> 
#include <algorithm>

using namespace std;

// Function template to accept a four-digit number and the choice of operation
template<class T>
void acceptNumber(T& number, char& choice) {
    int max_attempts = 4;
    int num_attempts = max_attempts;

    while (num_attempts > 0) {
        cout << "\nEnter a four-digit integer: ";
        cin >> number;

        if (number < 1000 || number > 9999) {
            num_attempts--;
            cout << "The number entered is not a four-digit integer. Please enter another number with four digits." << endl;
            cout << "You have " << num_attempts << " attempts left." << endl;
            continue;
        }
        break;
    }

    if (num_attempts == 0) {
        cout << "Sorry, you have run out of attempts. Exiting program." << endl;
        exit(0);
    }

    do {
        cout << "Enter your choice:" << endl;
        cout << "1. Encrypt" << endl;
        cout << "2. Decrypt" << endl;
        cin >> choice;

        if (choice != '1' && choice != '2') {
            cout << "Invalid choice. Please enter a valid choice (1 or 2)." << endl;
        }
    } while (choice != '1' && choice != '2');
}

// Function template to encrypt or decrypt the array of digits
template <class T>
void transformDigits(T* digits, T num) {
    // Add 7 or 3 to each digit and take the remainder when divided by 10
    for (int i = 0; i < 4; i++) {
        digits[i] = (digits[i] + num) % 10;
    }

    // Swap the first and third digits, and then swap the second and fourth digits.
    swap(digits[0], digits[2]);
    swap(digits[1], digits[3]);
}

// Function template to display the encrypted/decrypted result
template <class T>
void displayResult(const T* digits) {
    cout << "Result: ";
    for (int i = 0; i < 4; i++) {
        cout << digits[i];
    }
    cout << endl;
}

int main() {
    int number;
    char choice;

    cout << "\n\nWelcome to the Data Encryption/Decryption Program!" << endl;
    cout << "This program allows you to securely transmit a four-digit integer over the telephone." << endl;

    do {
        acceptNumber(number, choice);

        switch (choice) {
            case '1':
                transformDigits(&number, 7); // Encrypt
                displayResult(&number);
                break;
            case '2':
                transformDigits(&number, 3); // Decrypt
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




