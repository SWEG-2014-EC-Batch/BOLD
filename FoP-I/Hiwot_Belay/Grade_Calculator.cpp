#include <iostream>
using namespace std;

int main() {
    float test, quiz, project, assignment, final_exam, total_mark;

    cout << "Enter mark for Test (15%): ";
    cin >> test;
    cout << "Enter mark for Quiz (5%): ";
    cin >> quiz;
    cout << "Enter mark for Project (20%): ";
    cin >> project;
    cout << "Enter mark for Assignment (10%): ";
    cin >> assignment;
    cout << "Enter mark for Final exam (50%): ";
    cin >> final_exam;

    total_mark = (test * 0.15) + (quiz * 0.05) + (project * 0.2) + (assignment * 0.1) + (final_exam * 0.5);

    char letter_grade;
    if (total_mark >= 90) {
        letter_grade = 'A';
        if (total_mark >= 95) {
            letter_grade = 'A+';
        }
        else if (total_mark >= 90) {
            letter_grade = 'A';
        }
    }
    else if (total_mark >= 75) {
        letter_grade = 'B+';
    }
    else if (total_mark >= 60) {
        letter_grade = 'B';
    }
    else if (total_mark >= 55) {
        letter_grade = 'C+';
    }
    else if (total_mark >= 45) {
        letter_grade = 'C';
    }
    else if (total_mark >= 30) {
        letter_grade = 'D';
    }
    else {
        letter_grade = 'F';
    }

    cout << "Total mark: " << total_mark << endl;
    cout << "Letter grade: " << letter_grade << endl;

    return 0;
}
