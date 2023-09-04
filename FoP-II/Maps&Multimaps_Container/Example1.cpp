/*The following  code demonstrates the usage of the `map` container in C++.
 This code creates a map with string keys and integer values, inserts key-value pairs
  into the map, and then prints out the contents of the map using a loop.*/

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
// Print the map
for (auto it = m.begin(); it != m.end(); it++) {
cout << it->first << " : " << it->second << endl;
}

return 0;
}
