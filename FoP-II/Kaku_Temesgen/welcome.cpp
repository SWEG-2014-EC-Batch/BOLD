// A c++ program to demonstrate function declaration and definition.
#include <iostream>

using namespace std;
//Creating function declaration and definition together.
//This function has no return and parameter(s).

void welcome() {
    string name;
    cout << "What is your name?\n";
    cin >> name;
    cout << "Hello, " << name << endl;
    cout << "Welcome to Modular Programming" << endl;
}

int main() {
    welcome();  // call the welcome function
    return 0;  // terminate the program
}
