// A function based c++ program that calculate the Windchill index.
#include <iostream>
#include <cmath>

using namespace std;

double wnd_spd, tempr, wnd_chl_indx = 0;
// Function to calculate the Windchill index
double metro_Report(double wnd_spd, double tempr, double wnd_chl_indx);

int main()
{
    // Prompt the user to enter the wind speed and temperature
    cout << " Provide Needed Data \n Wind Speed(m/sec): ";
    cin >> wnd_spd;
    cout << " Temperature(in celsius):";
    cin >> tempr;
    if (tempr > 10)
    {
        cout << "The Temperature must be less than or equal to 10" << endl;
    }
    else
        // Calculate the Windchill index by calling the meteorologistReport function
        wnd_chl_indx = metro_Report(wnd_spd, tempr, wnd_chl_indx);
    // Display the calculated windchill index to the user and WCI unit is kg.cal/m^2/h.
    cout << "\n** WindChill Index (WCI) is : " << wnd_chl_indx << "  kg.cal/m^2/h" << endl;
    return 0;
}

/*
        metro_Report= meteorologistReport
        wnd_spd= wind speed
        tempr=Temperature(t<=10 in degree celsius)
        wnd_chl_indx=Windchill index

        W = 13.12 + 0.6215 *t - 11.37*v^0.16 + 0.3965*t*v^0.016
*/
// Calculate the Windchill index using the provided formula
double metro_Report(double wnd_spd, double tempr, double wnd_chl_indx)
{
    return wnd_chl_indx = (13.12 + 0.6215 * tempr - 11.37 * pow(wnd_spd, 0.16) + 0.3965 * tempr * pow(wnd_spd, 0.016));
}
