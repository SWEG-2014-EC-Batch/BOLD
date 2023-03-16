//frequency of digit in table format
#include <iostream>
using namespace std;

int main() {
    int n, digit, count;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Frequency Table:" << endl << endl;
    cout << "Digit\t| Frequency\n";
    cout << "---------------------\n";

    for (int i = 0; i <= 9; i++) {
        count = 0;
        int temp = n;
        while (temp > 0) {
            digit = temp % 10;
            if (digit == i) {
                count++;
            }
            temp /= 10;
        }

        if (count > 0) { // print non-zero frequency
            cout << i << "\t| " << count << endl;
        }
    }

    return 0;
}
