//this is a c++ program that check if a number is Strong or not.
#include <iostream>
using namespace std;

int main() {
    int num, original, digit, fact, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    original = num;
    while(num != 0) {
        fact = 1;
        digit = num % 10;
        for(int i = 1; i <= digit; i++) {
            fact *= i;
        }
        sum += fact;
        num /= 10;
    }

    if(original == sum) {
        cout << original << " is a Strong number.";
    }
    else {
        cout << original << " is not a Strong number.";
    }

    return 0;
}
