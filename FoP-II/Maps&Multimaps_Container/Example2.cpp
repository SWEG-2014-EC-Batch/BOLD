/*In this code, we create a map called `m` that holds strings 
as keys and integers as values.
We then insert some key-value pairs into the map. 
Next, we find the value associated with the key "apple" in the 
map and store it in a variable called `value`.
Finally, we print out the value of the key*/

#include <iostream>
#include <map>
using namespace std;
int main() {
  // Create a map of strings to integers
  map<string, int> m;

  // Insert some key-value pairs into the map
  m["apple"] = 100;
  m["banana"] = 200;
  m["cherry"] = 300;

// Find the value of the key "apple"
  int value = m["apple"];

// Print the value
  cout << "The value of the key 'apple' is " << value << endl;
return 0;
}
