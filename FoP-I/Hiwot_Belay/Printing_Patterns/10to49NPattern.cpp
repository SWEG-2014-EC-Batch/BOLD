#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter the dimension of the pattern: ";
  cin >> n;
  
  if (n < 1) {
    cout << "Invalid input, please enter a positive integer.\n";
    return 0;
  }

  int count = 10;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (count < 50) {
        cout << count << " ";
        count++;
      }
    }
    cout << endl;
  }
  
  return 0;
}
