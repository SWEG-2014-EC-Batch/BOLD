#include <iostream>
#include <string>

using namespace std;

int main() {
    string testAns = "AABBCCAAAB"; // Test answer key
    string userAns; // User's answer

    cout << "Please enter your answers: ";
    cin >> userAns;

    int correctAnswers = 0;

    // Compare each answer with the corresponding answer in the key
    for (int i = 0; i < testAns.length(); i++) {
        if (testAns[i] == userAns[i]) {
            correctAnswers++;
        }
    }

    cout << endl << "Test Result:" << endl;
    cout << "Total questions: " << testAns.length() << endl;
    cout << "Correct answers: " << correctAnswers << endl;
    cout << "Incorrect answers: " << testAns.length() - correctAnswers << endl;

    return 0;
}
