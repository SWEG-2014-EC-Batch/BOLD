#include <iostream>
#include <cmath>
using namespace std;

//A program that calculates power

const int SIZE = 5;

void getResistance(int resiatance[]);
void getCurrent(double current[]);
void calculatePower(const int resistance[], const double current[], double power[]);
void displayOutput(const int resistance[], const double current[], const double power[]);

int main()
{
    int resistance[SIZE];
    double current[SIZE];
    double power[SIZE];

    getResistance(resistance);
    getCurrent(current);
    calculatePower(resistance, current, power);
    displayOutput(resistance, current, power);

    return 0;
}

void getResistance(int resistance[])
{
    cout << "Enter five resistance values: ";
    for (int i = 0; i < SIZE; i++)
    {
        cin >> resistance[i];
    }
}

void getCurrent(double current[])
{
    cout << "Enter five current values: ";
    for (int i = 0; i < SIZE; i++)
    {
        cin >> current[i];
    }
}

void calculatePower(const int resistance[], const double current[], double power[])
{
    for (int i = 0; i < SIZE; i++)
    {
        power[i] = resistance[i] * pow(current[i], 2);
    }
}

void displayOutput(const int resistance[], const double current[], const double power[])
{
    double resistanceSum = 0.0;
    double currentSum = 0.0;
    double powerSum = 0.0;

    cout << "\nResistance\tCurrent\t\tPower\n";
    for (int i = 0; i < SIZE; i++)
    {
        cout << resistance[i] << "\t\t" << current[i] << "\t\t" << power[i] << endl;

        resistanceSum += resistance[i];
        currentSum += current[i];
        powerSum += power[i];
    }

    cout << "\nSum of Resistance: " << resistanceSum << endl;
    cout << "Sum of Current: " << currentSum << endl;
    cout << "Sum of Power: " << powerSum << endl;
}
