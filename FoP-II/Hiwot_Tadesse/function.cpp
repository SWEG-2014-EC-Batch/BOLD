#include <iostream>
using namespace std;
//A program which demonstrate function declaeration,definition and calling
void name() {
    string username;
    cout << "enter your name: ";
    getline(cin, username);
    cout << "welcome to modular programming, "<<username<<".";
}

int main() {
    name();
    return 0;}
