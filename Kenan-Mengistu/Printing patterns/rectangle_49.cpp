#include <iostream>
using namespace std;

int main() {
    for (int i = 10; i <= 49; i += 10) {
        for (int j = i; j < i + 10; ++j) {
            cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}