// User authentication c++program with case-insensitive username and 6-15 character case-sensitive password.
#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Stored Username and Password
    string stored_username = "user123";
    string stored_password = "password123";

    // Read Username and Password from User
    string username, password;
    cout << "Enter Username: ";
    cin >> username;
    cout << "Enter Password: ";
    cin >> password;

    // Validate Username
    for(int i=0; i<stored_username.length(); i++)
    {
        if(tolower(username[i]) != tolower(stored_username[i]))
        {
            cout << "Invalid Username!" << endl;
            return 0;
        }
    }

    // Validate Password
    if(password.length() >= 6 && password.length() <= 15)
    {
        if(password == stored_password)
        {
            cout << "Login Successful!" << endl;
        }
        else
        {
            cout << "Invalid Password!" << endl;
        }
    }
    else
    {
        cout << "Password must be between 6-15 characters long!" << endl;
    }

    return 0;
}
