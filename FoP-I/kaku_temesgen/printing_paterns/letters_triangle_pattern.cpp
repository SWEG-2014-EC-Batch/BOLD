#include <iostream>
using namespace std;

int main() {
    char ch = 'a';
    for (int i = 1; i <= 5; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << ch << " ";
            ++ch;
        }
        cout << endl;
        ch = 'a';
    }
    return 0;
}
