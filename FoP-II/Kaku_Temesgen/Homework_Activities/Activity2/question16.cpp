// This program converts time from 24-hour notation to 12-hour notation
#include <iostream>
using namespace std;

// Function to take input from the user
void input(int &hour, int &minute);

// Function to convert time from 24-hour notation to 12-hour notation
void convert(int &hour, char &ampm);

// Function to display the converted time
void output(int hour, int minute, char ampm);

int main()
{
  int hour, minute;
  char ampm, repeat;
  do
  {
    // Take input from the user
    input(hour, minute);

    // Convert the time to 12-hour notation
    convert(hour, ampm);

    // Display the converted time
    output(hour, minute, ampm);

    cout << "Do you want to convert another time? (Y/N): ";
    cin >> repeat;
  } while (repeat == 'Y' || repeat == 'y');

  return 0;
}

// Function definition for input
void input(int &hour, int &minute)
{
  cout << "Enter the time in 24-hour notation: ";
  cin >> hour >> minute;
}

// Function definition for convert
void convert(int &hour, char &ampm)
{
  if (hour > 12)
  {
    hour -= 12;
    ampm = 'P';
  }
  else if (hour == 12)
  {
    ampm = 'P';
  }
  else if (hour == 0)
  {
    hour = 12;
    ampm = 'A';
  }
  else
  {
    ampm = 'A';
  }
}

// Function definition for output
void output(int hour, int minute, char ampm)
{
  cout << "The time in 12-hour notation is: " << hour << ":" << minute << " " << ampm << "M" << endl;
}
