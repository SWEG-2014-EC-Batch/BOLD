//this is c++ program that generate numbers in reverse triangle form.
#include <iostream>
using namespace std;

int main() {
    for (int i = 5; i >= 1; --i) {
        for (int j = 1; j < i; ++j) {
            cout << "  ";
        }
        for (int k = i; k <= 5; ++k) {
            cout << k << " ";
        }
        cout << endl;
    }
    return 0;
}
