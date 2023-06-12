//check perfect number
#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> num;

    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num) {
        cout <<"The number is a perfect number.";
    } else {
        cout <<"The number is not a perfect number.";
    }
    return 0;
    }
