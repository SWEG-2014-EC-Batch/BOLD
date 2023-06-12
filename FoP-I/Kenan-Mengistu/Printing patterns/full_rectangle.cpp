#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 40; i += 10) {
        for (int j = i; j < i + 10; ++j) {
            cout << "*" << " ";
        }
        cout << "\n";
    }
    return 0;
}