#include <iostream>
using namespace std;

int main() {
    char letter = 'A';
    for(int row = 0; row < 4; row++) {
        for(int i = 0; i < 6; i++) {
            cout << (char)(letter + i) << " ";
        }
        letter += 6;
        cout << endl;
    }
    return 0;
}