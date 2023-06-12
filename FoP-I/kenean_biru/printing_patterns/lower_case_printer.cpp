#include <iostream>
using namespace std;

int main() {
    char c = 'a';
    for(int i=1; i<=5; i++) {
        for(int j=1; j<=5; j++) {
            cout << c++ << " ";
        }
        cout << endl;
    }
    return 0;
}