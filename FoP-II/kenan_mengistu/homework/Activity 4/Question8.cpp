#include <fstream>
using namespace std;

int main() {
    ifstream file("Sheet5Ex5.cpp");
    char character;
    int occurrences[26] = {0};

    while (file >> character) {
        if (character >= 'a' && character <= 'z') {
            occurrences[character - 'a']++;
        }
    }

    cout << "CHARACTER OCCURRENCES\n";
    for (int i = 0; i < 26; i++) {
        std::cout << static_cast<char>('a' + i) << "     " << occurrences[i] << "\n";
    }

    return 0;
}
