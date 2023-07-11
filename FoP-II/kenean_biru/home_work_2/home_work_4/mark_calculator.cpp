//use of struct in mark calculation
#include <iostream>
using namespace std;

struct Student {
    int id;
    string name;
    int testMark;
    int finalMark;
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student s[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter student id: ";
        cin >> s[i].id;
        cout << "Enter student name: ";
        cin.ignore();
        getline(cin, s[i].name);
        cout << "Enter test mark: ";
        cin >> s[i].testMark;
        cout << "Enter final mark: ";
        cin >> s[i].finalMark;

        int sum = s[i].testMark + s[i].finalMark;
        cout << "Sum of marks: " << sum << endl;

        cout << "Student record:" << endl;
        cout << "ID: " << s[i].id << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "Test mark: " << s[i].testMark << endl;
        cout << "Final mark: " << s[i].finalMark << endl;
    }

    return 0;
}