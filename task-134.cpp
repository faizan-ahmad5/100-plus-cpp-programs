// Write a C++ Program to store temperature of two different cities for a week and display it.
// Find the city  with hottest temperature.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    const int NUM_CITIES = 2;
    const int NUM_DAYS = 7;

    string cities[NUM_CITIES] = {"City A", "City B"};
    double temperature[NUM_CITIES][NUM_DAYS];

    // Take the temperature as input
    for (int i = 0; i < NUM_CITIES; i++)
    {
        cout << "Enter the temperature for " << cities[i] << " for 7 days:" << endl;
        for (int j = 0; j < NUM_DAYS; j++)
        {
            cout << "Day " << j + 1 << ": ";
            cin >> temperature[i][j];
        }
    }

    // Display the temperature
    cout << "Temperature for each city for 7 days:" << endl;
    for (int i = 0; i < NUM_CITIES; i++)
    {
        cout << cities[i] << ": ";
        for (int j = 0; j < NUM_DAYS; j++)
        {
            cout << temperature[i][j] << " ";
        }
        cout << endl;
    }

    // Find the city with the hottest temperature
    int hottestCity = 0;
    double hottestTemp = temperature[0][0];
    for (int i = 0; i < NUM_CITIES; i++)
    {
        for (int j = 0; j < NUM_DAYS; j++)
        {
            if (temperature[i][j] > hottestTemp)
            {
                hottestTemp = temperature[i][j];
                hottestCity = i;
            }
        }
    }

    cout << "The city with the hottest temperature is " << cities[hottestCity]
         << " with a temperature of " << hottestTemp << endl;

    return 0;
}
