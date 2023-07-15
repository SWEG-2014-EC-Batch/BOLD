#include <iostream>
using namespace std;

// A program that prints a character Hourglass pattern
void getInput(int &n);
void printUpperHalf(int n);
void printLowerHalf(int n);

int main()
{
    char choice;
    do
    {
        int n;
        getInput(n); // Get input from user
