#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter Dimension: ";
    cin >> x;
    for (int i = 10; i <= 49; i += x) {
        for (int j = i; j < i + x; ++j) {
            cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}