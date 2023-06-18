// This program converts time from 24-hour notation to 12-hour notation 
#include <iostream> 
using namespace std; 
 
void input(int& hour, int& minute) { 
    cout << "Enter the time in 24-hour notation: "; 
    cin >> hour >> minute; 
} 
 
void convert(int& hour, char& ampm) { 
    if (hour > 12) { 
        hour -= 12; 
        ampm = 'P'; 
    } else if (hour == 12) { 
        ampm = 'P'; 
    } else if (hour == 0) { 
        hour = 12; 
        ampm = 'A'; 
    } else {  ampm = 'A'; 
    } 
} 
 
void output(int hour, int minute, char ampm) { 
    cout << "The time in 12-hour notation is: " << hour << ":" << minute << " " << ampm << "M" << endl; 
} 
 
int main() { 
    int hour, minute; 
    char ampm, repeat; 
    do { 
        input(hour, minute); 
        convert(hour, ampm); 
        output(hour, minute, ampm); 
        cout << "Do you want to convert another time? (Y/N): "; 
        cin >> repeat; 
    } while (repeat == 'Y' || repeat == 'y'); 
    return 0; 
}
