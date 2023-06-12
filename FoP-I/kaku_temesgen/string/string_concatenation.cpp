// A c++ program to read and print user's information with string concatenation.
#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Read Full Name, Birth Date, and City from User
    string full_name, birth_date, city;
    cout << "Enter your full name: ";
    getline(cin, full_name);
    cout << "Enter your birth date: ";
    getline(cin, birth_date);
    cout << "Enter your city: ";
    getline(cin, city);

    // Print the input data in the specified format using string concatenation
    cout << full_name + ", " + birth_date + " @ " + city + "." << endl;

    return 0;
}
