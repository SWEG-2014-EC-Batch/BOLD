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
        cout << "Average of group of " << n << " numbers is " << sum / n << endl;
    }
    return 0;
}
