// A C++ program to search for and output a team member's name based on their ID stored in a 2D array.
#include <iostream>
#include <string>

using namespace std;

int main() {
    string team[][2] = {{"ETS0839/14", "Kaku Temesgen"}, {"ETS0814/14", "Hiwot Tadesse"}, {"ETS0955/14", "Kumneger Bekele"},
                         {"ETS1020/14", "Medehanit Andualem"}, {"ETS1061/14", "Michael"}};

    const int team_size = 5;

    cout << "Enter an ID: ";
    string id;
    cin >> id;

    bool found = false;
    string fullName;

    for (int i = 0; i < team_size; i++) {
        if (team[i][0] == id) {
            found = true;
            fullName = team[i][1];
            break;
        }
    }

    if (found) {
        cout << "Member found: " << fullName << endl;
    } else {
        cout << "Member not found." << endl;
    }

    return 0;
}
