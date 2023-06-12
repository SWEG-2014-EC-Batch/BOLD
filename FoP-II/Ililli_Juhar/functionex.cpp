//To demostrate function definition and declaration
#include <iostream>
using namespace std;
// declare function that accepts name displays Welocme message
void welcomeMessage();

int main() {
    //call the function
    welcomeMessage();
    return 0;
}
//define the function 
void welcomeMessage() {
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Hello, " << name <<endl<< " Welcome to M.P.";
}