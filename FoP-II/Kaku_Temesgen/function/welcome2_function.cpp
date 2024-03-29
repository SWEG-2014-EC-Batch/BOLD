/* A c++ program to demonstrate function declaration and definition. In this program we create a function
 declaration and definition separately.*/

#include <iostream>
using namespace std;
//This function has no return and parameter(s).
void welcome(); // Function declaration

int main() {
    welcome(); // call the welcome function
    return 0; // terminate the program
}

void welcome() { // Function definition
    string name;
    cout << "What is your name?\n"; // ask for user's name
    cin >> name; // read user's input into name variable
    cout << "Hello, " << name << endl; // print welcome message with user's name
    cout << "Welcome to Modular Programming" << endl; // print second line of welcome message
}
