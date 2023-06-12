#include <iostream>
#include <algorithm>
using namespace std;

// Function prototypes
void readList(float myList[], unsigned& maxNo);
float findMax(const float myList[], unsigned maxNo);
float findMin(const float myList[], unsigned maxNo);
float findRange(const float myList[], unsigned maxNo);
float findMean(const float myList[], unsigned num);
void display(const float myList[], unsigned maxNo);

int main() {
    const int MAX_SIZE = 100;
    float myList[MAX_SIZE];
    unsigned maxNo;

    readList(myList, maxNo); // Read the list of marks

    // Calculate and display the maximum, minimum, range, mean, and median
    cout << "Maximum: " << findMax(myList, maxNo) << endl;
    cout << "Minimum: " << findMin(myList, maxNo) << endl;
    cout << "Range: " << findRange(myList, maxNo) << endl;
    cout << "Mean: " << findMean(myList, maxNo) << endl;
    display(myList, maxNo);

    return 0;
}

// Read the list of marks
void readList(float myList[], unsigned& maxNo) {
    cout << "Enter the number of marks: ";
    cin >> maxNo;

    for (unsigned i = 0; i < maxNo; ++i) {
        cout << "Enter mark " << i + 1 << ": ";
        cin >> myList[i];
    }
}

// Find the maximum value in the list of marks
float findMax(const float myList[], unsigned maxNo) {
    float max = myList[0];
    for (unsigned i = 1; i < maxNo; ++i) {
        if (myList[i] > max) {
            max = myList[i];
        }
    }
    return max;
}

// Find the minimum value in the list of marks
float findMin(const float myList[], unsigned maxNo) {
    float min = myList[0];
    for (unsigned i = 1; i < maxNo; ++i) {
        if (myList[i] < min) {
            min = myList[i];
        }
    }
    return min;
}

// Find the range of the list of marks (i.e., difference between maximum and minimum)
float findRange(const float myList[], unsigned maxNo) {
    return findMax(myList, maxNo) - findMin(myList, maxNo);
}

// Find the mean of the list of marks.
float findMean(const float myList[], unsigned num) {
    float sum = 0.0;
    for (unsigned i = 0; i < num; ++i) {
        sum += myList[i];
    }
    return sum / num;
}

// Display the list of marks
void display(const float myList[], unsigned maxNo) {
    cout << "List of marks: ";
    for (unsigned i = 0; i < maxNo; ++i) {
        cout << myList[i] << " ";
    }
    cout << endl;
}