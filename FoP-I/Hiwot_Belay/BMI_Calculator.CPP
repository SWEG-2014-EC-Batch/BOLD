#include <iostream>
using namespace std;

int main() {
    int n;
    double height, weight, bmi;
    char gender;

    cout << "Enter the number of people: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Person " << i << endl;
        cout << "Please enter your gender (M/F): ";
        cin >> gender;

        if (gender == 'M' || gender == 'm') {
            cout << "Please enter your height in meters: ";
            cin >> height;
            cout << "Please enter your weight in kilograms: ";
            cin >> weight;
            bmi = weight / (height * height);

            cout << "Your BMI is " << bmi << endl;
            if (bmi < 18.5) {
                cout << "You are underweight." << endl;
            } else if (bmi < 25) {
                cout << "You are of normal weight." << endl;
            } else if (bmi < 30) {
                cout << "You are overweight." << endl;
            } else {
                cout << "You are obese." << endl;
            }
        } else if (gender == 'F' || gender == 'f') {
            cout << "Please enter your height in meters: ";
            cin >> height;
            cout << "Please enter your weight in kilograms: ";
            cin >> weight;
            bmi = weight / (height * height);

            cout << "Your BMI is " << bmi << endl;
            if (bmi < 18.5) {
                cout << "You are underweight." << endl;
            } else if (bmi < 25) {
                cout << "You are of normal weight." << endl;
            } else if (bmi < 30) {
                cout << "You are overweight." << endl;
            } else {
                cout << "You are obese." << endl;
            }
        } else {
            cout << "Invalid gender entered." << endl;
        }
        cout << endl;
    }

    return 0;
}
