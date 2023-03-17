#include <iostream>
using namespace std;
int main() {
    int rows=5, cols=5;
    //print in a rectangular form
     for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= cols; ++j) {
            cout << j << " ";
        }
        cout <<endl;
    }
    //print in a triangular way from left to right
    cout<<endl;
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << j << " ";
        }
            cout <<endl;
    }
    // print from right to left
    cout<<endl;
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <=rows - i; ++j) {
            std::cout << "  ";
        }
        for (int k = i; k >= 1; --k) {
            cout << k << " ";
        }
            cout <<endl;
    }

    return 0;
}
