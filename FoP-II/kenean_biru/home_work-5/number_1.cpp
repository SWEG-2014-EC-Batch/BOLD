#include <iostream> 
#include <fstream> 
 
using namespace std; 
 
void readFile(const char* fileName, int array[], int& count); 
 
int main() { 
    const char* fileName = "input.txt"; 
    const int SIZE = 100; 
    int array[SIZE]; 
    int count = 0; 
 
    readFile(fileName, array, count); 
 
    cout << "Read " << count << " entries from the file." << endl; 
    cout << "Contents of the array: "; 
    for (int i = 0; i < count; i++) { 
        cout << array[i] << " "; 
    } 
    cout << endl; 
 
    return 0; 
} 
 
void readFile(const char* fileName, int array[], int& count) { 
    ifstream inputFile(fileName); 
 
    if (inputFile.is_open()) { 
        count = 0; 
 
        while (!inputFile.eof()) { 
            inputFile >> array[count]; 
            count++; 
        } 
 
        inputFile.close(); 
    } else { 
        cout << "Error opening file: " << fileName << endl; 
    } 
}