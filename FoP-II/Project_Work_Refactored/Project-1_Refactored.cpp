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
