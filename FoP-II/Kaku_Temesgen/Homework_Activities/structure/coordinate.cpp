// a program that read coordinate points and print it
#include <iostream>
using namespace std;

struct point {
    float x;
    float y;
};

point read() {
    point p;
    cout << "Enter x and y coordinates: ";
    cin >> p.x >> p.y;
    return p;
}

void print(point p) {
    cout << "The coordinates are: (" << p.x << ", " << p.y << ")" << endl;
}

int main() {
    point p = read();
    print(p);
    return 0;
}
