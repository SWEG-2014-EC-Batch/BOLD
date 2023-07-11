/* A c++ program that creates a file named data.txt and writes data to it.
   The data is arranged in the file so that each group of numbers is preceded by the number of data items in the group.
   The program reads the data from the file and calculates the average of each group of numbers.*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Create a file named data.txt and write the data to it
    ofstream file("data.txt");
    file << "5 96 87 78 93 21\n 4 92 82 85 87\n 6 72 69 85 75 81 73";
    file.close();
    // Open the file for reading
    ifstream infile("data.txt");
    int n, num;
    double sum;
    while (infile >> n) {
        sum = 0;
        // Read the numbers and calculate the sum
        for (int i = 0; i < n; i++) {
            infile >> num;
            sum += num;
        }
        // Calculate and display the average of the group of numbers
        cout << "Average of group of " << n << " numbers is " << sum / n << endl;
    }
    return 0;
}