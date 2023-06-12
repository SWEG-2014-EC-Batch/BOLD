#include <iostream>
using namespace std;
int main() {
    int rows = 6;
    cout<<"Half pyramid"<<endl;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
            cout <<endl;
    }
    cout<<endl;
    // inverted half pyramid
    cout<<"Inverted half pyramid"<<endl;
    cout<<endl;
    for (int i = rows; i >= 1; i--) {

        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
            cout <<endl;
    }

    // hallow inverted half pyramid
    cout<<endl;
    cout<<"Hollow inverted half pyramid"<<endl;
    cout<<endl;
    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            if (i == rows || j == 1 || j == i) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
            cout <<endl;
    }

    //full pyramid
    cout<<endl;
    cout<<"Full pyramid"<<endl;
    cout<<endl;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2*i-1; j++) {
            cout << "*";
        }

            cout <<endl;
    }
    //inverted full pyramid
    cout<<endl;
    cout<<"Inverted full pyramid"<<endl;
    cout<<endl;
     for (int i = rows; i >= 1; --i) {
        for (int j = i; j < rows; ++j) {
            cout << " ";
        }
        for (int k = 0; k < 2 * i - 1; ++k) {
            cout << "*";
        }
            cout << endl;
    }

    //hollow full pyramid
    cout<<endl;
    cout<<"Hollow full pyramid"<<endl;
    cout<<endl;
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= rows-i; ++j) {
            cout << "  ";
        }
        for (int k = 1; k <= 2 * i - 1; ++k) {
            if (i == rows || k == 1 || k == 2 * i - 1)
            cout << "* ";
            else
            cout << "  ";
        }
        cout <<endl;
    }
    return 0;
}
