#include <iostream>
using namespace std;
int main() {
    int rows=5, cols=5;
    // alphabet in a rectangle
    for (int i = 1; i <= rows; ++i) {
        char letter = 'a';
        for (int j = 1; j <= cols; ++j) {
            cout << letter << " ";
            ++letter;
        }
        cout <<endl;
    }
    // alphabet in triangular form
    cout<<endl;
    for (char i = 'a'; i <= 'e'; ++i) {
        for (char j = 'a'; j <= i; ++j) {
            cout << j << " ";
        }
        cout << endl;
    }
    //alphabet from a to x in 6 column
    cout<<endl;
    char c = 'A';
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 6; ++j) {
            cout << c << " ";
            ++c;
        }
        cout <<endl;
    }
    return 0;
}
