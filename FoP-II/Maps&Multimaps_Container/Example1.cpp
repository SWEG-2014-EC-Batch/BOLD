/*the following code illustarates the use of maps with different functions and 
including the declaration ,defination and usage*/

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

    // Demonstrate different functions with the map container
    cout << "Using begin() and end() functions:" << endl;
    for (auto it = m.begin(); it != m.end(); ++it) {
        cout << it->first << " : " << it->second << endl;
    }

    cout << "Using size() function:" << endl;
    cout << "The size of the map is: " << m.size() << endl;

    cout << "Using max_size() function:" << endl;
    cout << "The maximum number of elements that the map can hold is: " << m.max_size() << endl;

    cout << "Using empty() function:" << endl;
    if (m.empty()) {
        cout << "The map is empty." << endl;
    } else {
        cout << "The map is not empty." << endl;
    }

    cout << "Using insert() function:" << endl;
    m.insert(pair<string, int>("pear", 400));
    for (auto it = m.begin(); it != m.end(); ++it) {
        cout << it->first << " : " << it->second << endl;
    }

    cout << "Using erase() function with an iterator:" << endl;
    auto it = m.find("banana");
    if (it != m.end()) {
        m.erase(it);
    }
    for (auto it = m.begin(); it != m.end(); ++it) {
        cout << it->first << " : " << it->second << endl;
    }

    cout << "Using erase() function with a key:" << endl;
    int num_erased = m.erase("cherry");
    cout << num_erased << " element(s) removed."<<endl;

     for (auto it = m.begin(); it != m.end(); ++it) {
        cout << it->first << " : " << it->second<<endl;
     }

     cout<<"Using clear() function:"<<endl;
     m.clear();
     if(m.empty()){
         cout<<"The map is empty now."<<endl;
     }

     return 0;
}
