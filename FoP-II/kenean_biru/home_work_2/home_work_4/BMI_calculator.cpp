//BMI calculator

#include <iostream> 
#include <string> 
 
using namespace std; 
 
struct Person { 
    string name; 
    char gender; 
    int age; 
    float height; 
    float weight; 
}; 
 
// Function declarations 
float calculateBMI(float weight, float height); 
void displayBMI(const Person& person); 
 
float calculateBMI(float weight, float height) { 
    float heightInMeters = height / 100.0; 
    return weight / (heightInMeters * heightInMeters); 
} 
 
void displayBMI(const Person& person) { 
    float bmi = calculateBMI(person.weight, person.height); 
 
   cout << "Name: " << person.name << endl; 
    cout << "Gender: " << person.gender << endl; 
    cout << "Age: " << person.age << " years" << endl; 
    cout << "Height: " << person.height << " cm" << endl; 
    cout << "Weight: " << person.weight << " kg" << endl; 
    cout << "BMI: " << bmi << endl; 
 
    if (bmi < 18.5) { 
        cout << "Underweight" << endl; 
    } else if (bmi >= 18.5 && bmi < 25.0) { 
        cout << "Normal weight" << endl; 
    } else if (bmi >= 25.0 && bmi < 30.0) { 
        cout << "Overweight" << endl; 
    } else { 
        cout << "Obese" << endl; 
    } 
} 
 
int main() { 
    int numPeople; 
    cout << "Enter the number of people: "; 
    cin >> numPeople; 
 
    // Clear the input buffer 
    cin.ignore(); 
 
    Person people[numPeople]; 
 
    for (int i = 0; i < numPeople; i++) { 
        cout << "Enter details for Person " << i + 1 << ":" << endl; 
 
        cout << "Enter name: "; 
        getline(cin, people[i].name); 
 
        cout << "Enter gender (M/F): "; 
        cin >> people[i].gender; 
 
        cout << "Enter age: "; 
        cin >> people[i].age; 
 
        cout << "Enter height (in cm): "; 
        cin >> people[i].height; 
 
        cout << "Enter weight (in kg): "; 
        cin >> people[i].weight; 
 
        // Clear the input buffer 
        cin.ignore(); 
        cout << endl; 
    } 
 
    cout << "BMI Results:" << endl; 
 
    for (int i = 0; i < numPeople; i++) { 
        cout << "Person " << i + 1 << ":" << endl; 
        displayBMI(people[i]); 
        cout << endl; 
    } 
 
    return 0; 
}
