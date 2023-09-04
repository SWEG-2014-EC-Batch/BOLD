/*this code instead of maps it uses multimaps*/

#include <iostream>
#include <map>
using namespace std;
int main() {
  // Create a multimap of strings to integers
  multimap <string, int> m;
 // Insert some key-value pairs into the map
  m.insert({"apple", 100});
  m.insert({"banana", 200});
  m.insert({"cherry", 300});
// Find the value of the key "apple"
  int value = m.find("apple")->second;
 // Print the value
  cout << "The value of the key 'apple' is " << value << endl;
  return 0;}
