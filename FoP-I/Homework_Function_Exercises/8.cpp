// A c++ program that checks whether an integer number entered by user is prime or not.
#include <iostream>
#include <cmath>
using namespace std;

// function declaration to check if input integer is prime
bool isPrime(int n);

int main() {
    int input;
    cout << "Enter an integer between 1 and 1000: ";
    cin >> input;

 // calls the isPrime() function to check if the input integer is prime or not
    if (isPrime(input)) {
        cout << input << " is a prime number." << endl;
    } else {
        cout << input << " is not a prime number." << endl;
    }

    return 0;
}

// function definition to check if a number is prime
bool isPrime(int n) {
    if (n <= 1 || n > 1000) return false;

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }

    return true;
}

