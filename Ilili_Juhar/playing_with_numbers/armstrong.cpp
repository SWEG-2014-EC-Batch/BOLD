//armstrong number
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int num, original_num, r, result = 0, n = 0;

    cout << "Enter a positive integer: ";
    cin >> num;

    original_num = num;

    // Count number of digits
    while (original_num != 0) {
        original_num /= 10;
        n++;
    }

    original_num = num;

    while (original_num != 0) {
        r = original_num % 10;
        result += pow(r, n);
        original_num /= 10;
    }

    // Check if number is Armstrong
    if (r == num)
        cout <<"The number is an Armstrong number.";
    else
        cout <<"The number is not an Armstrong number.";

    return 0;
}
