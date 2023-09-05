/*using multimaps with some advanced functions*/

#include <iostream>
#include <map>

using namespace std;

int main() {
  // Create a multimap of student names and their grades.
  multimap<string, int> students;

  // Insert some student records.
  students.emplace("John Doe", 80); // using emplace() instead of insert()
  students.insert({"Jane Doe", 90});
  students.insert({"Peter Smith", 70});
  students.insert({"Mary Johnson", 100});

  // Print the multimap.
  for (const auto& student : students) {
    cout << student.first << ", " << student.second << endl;
  }

  // Check if a student exists.
  if (students.count("John Doe") > 0) { // using count() instead of find()
    cout << "John Doe exists in the multimap." << endl;
  }

  // Get the grade of a student.
  auto it = students.find("Jane Doe");
  if (it != students.end()) {
    int grade = it->second;
    cout << "Jane Doe's grade is " << grade << endl;
  }

  // Add a new student record.
  students.emplace("Susan Williams", 95); // using emplace() instead of insert()

  // Print the multimap again.
  for (const auto& student : students) {
    cout << student.first << ", " << student.second << endl;
  }

  // Remove a student record.
  students.erase("Peter Smith");

  // Print the multimap again.
  for (const auto& student : students) {
    cout << student.first << ", " << student.second << endl;
  }

  return 0;
}
