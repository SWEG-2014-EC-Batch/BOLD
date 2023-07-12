#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Student {
    string name;
    double exam1;
    double exam2;
    double homework;
    double finalExam;
    double finalGrade;
    char letterGrade;
};

const int MAX_STUDENTS = 20;

void readStudentInfo(Student students[], int& count);
void calculateFinalGrades(Student students[], int count);
char assignLetterGrade(double finalGrade);
void displayStudentInfo(const Student students[], int count);
void writeStudentInfoToFile(const Student students[], int count);

int main() {
    Student students[MAX_STUDENTS];
    int count = 0;

    readStudentInfo(students, count);
    calculateFinalGrades(students, count);
    displayStudentInfo(students, count);
    writeStudentInfoToFile(students, count);

    return 0;
}

void readStudentInfo(Student students[], int& count) {
    cout << "Enter student information (up to 20 students):" << endl;

    while (count < MAX_STUDENTS) {
        cout << "Student " << count + 1 << ":" << endl;

        cout << "Name: ";
        getline(cin, students[count].name);

        cout << "Exam 1: ";
        cin >> students[count].exam1;

        cout << "Exam 2: ";
        cin >> students[count].exam2;

        cout << "Homework: ";
        cin >> students[count].homework;

        cout << "Final Exam: ";
        cin >> students[count].finalExam;

        cin.ignore(); // Ignore the newline character

        count++;

        char choice;
        cout << "Enter another student? (Y/N): ";
        cin >> choice;

        cin.ignore(); // Ignore the newline character

        if (choice != 'Y' && choice != 'y') {
            break;
        }
    }
}

void calculateFinalGrades(Student students[], int count) {
    for (int i = 0; i < count; ++i) {
        double finalGrade = 0.20 * students[i].exam1 + 0.20 * students[i].exam2 +
                            0.35 * students[i].homework + 0.25 * students[i].finalExam;
        students[i].finalGrade = finalGrade;
        students[i].letterGrade = assignLetterGrade(finalGrade);
    }
}

char assignLetterGrade(double finalGrade) {
    if (finalGrade >= 90.0) {
        return 'A';
    } else if (finalGrade >= 80.0) {
        return 'B';
    } else if (finalGrade >= 70.0) {
        return 'C';
    } else if (finalGrade >= 60.0) {
        return 'D';
    } else {
        return 'F';
    }
}

void displayStudentInfo(const Student students[], int count) {
    cout << "Student Information:" << endl;
    cout << "-------------------" << endl;

    for (int i = 0; i < count; ++i) {
        cout << "Name: " << students[i].name << endl;
        cout << "Final Grade: " << students[i].finalGrade << endl;
        cout << "Letter Grade: " << students[i].letterGrade << endl;
        cout << "-------------------" << endl;
    }
}

void writeStudentInfoToFile(const Student students[], int count) {
    ofstream outputFile("student_records.txt");
    if (!outputFile) {
        cerr << "Error creating file: student_records.txt" << endl;
        return;
    }

    for (int i = 0; i < count; ++i) {
        outputFile << "Name: " << students[i].name << endl;
        outputFile << "Final Grade: " << students[i].finalGrade << endl;
        outputFile << "Letter Grade: " << students[i].letterGrade << endl;
        outputFile << "-------------------" << endl;
    }

    outputFile.close();

    cout << "Student information has been written to the file: student_records.txt" << endl;
}
