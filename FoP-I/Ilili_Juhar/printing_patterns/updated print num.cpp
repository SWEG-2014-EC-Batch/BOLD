#include <iostream>
using namespace std;
int main() {
    int rows, cols;
    cout << "Enter the dimensions of the pattern in rows and column respectively: ";
    cin >> rows>> cols;

    int num = 10;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << num << " ";
            ++num;
        }
        cout <<endl;
    }

    return 0;
}
