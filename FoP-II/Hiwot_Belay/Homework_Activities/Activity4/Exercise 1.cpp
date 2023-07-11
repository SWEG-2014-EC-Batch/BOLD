#include <iostream>
using namespace std;

struct Student {
  int id;
  string name;
  double testMark;
  double finalMark;
  double sum;
};

void input(Student s[], int n);
void compute(Student s[], int n);
void print(Student s[], int n);

int main() {
  int n;

  cout << "Enter the number of students: ";
  cin >> n;

  Student students[n];

  input(students, n);
  compute(students, n);
  print(students, n);

  return 0;
}

void input(Student s[], int n) {
  for (int i = 0; i < n; i++) {
    cout << "Enter ID for student " << i + 1 << ": ";
    cin >> s[i].id;
    cout << "Enter name for student " << i + 1 << ": ";
    cin >> s[i].name;
    cout << "Enter test mark for student " << i + 1 << ": ";
    cin >> s[i].testMark;
    cout << "Enter final mark for student " << i + 1 << ": ";
    cin >> s[i].finalMark;
    // Calculate the sum of the marks for each student
    s[i].sum = s[i].testMark + s[i].finalMark;
    cout << endl;
  }
}

void compute(Student s[], int n) {
}

void print(Student s[], int n) {
  for (int i = 0; i < n; i++) {
    cout<<"Recordings of student "<<i+1<<" :"<<endl;
    cout << "ID: " << s[i].id << endl;
    cout << "Name: " << s[i].name << endl;
    cout << "Test Mark: " << s[i].testMark << endl;
    cout << "Final Mark: " << s[i].finalMark << endl;
    // Display the sum of the marks for each student
    cout << "Sum of Marks: " << s[i].sum << endl;
    cout<<"=================================="<<endl;
    cout << endl;
  }
}
