#include <iostream>
using namespace std;
int main() {
    for (int i = 10; i <= 49; i++) {
        cout << i << " ";
        if (i % 10 == 9) {
            cout << endl;
        }
    }
    return 0;
}
