/*Write a C++ program that prompts the user to input temperature in centigrade and display a
message according to temperature state below:
Temp < 0 then Freezing weather
Temp 0-12 then Very Cold weather
Temp 12-22 then Cold weather
Temp 22-32 then Normal in Temperature
Temp 32-42 then Its Hot
Temp >=42 then Its Very Hot
*/

#include <iostream>
using namespace std;

int main()
{
    int temp;
    cout << "Enter the value of temperature in centigrade: ";
    cin >> temp;

    if (temp < 0)
    {
        cout << "Freezing weather";
    }
    else if (temp >= 0 && temp <= 12)
    {
        cout << "Very Cold weather";
    }
    else if (temp > 12 && temp <= 22)
    {
        cout << "Cold weather";
    }
    else if (temp > 22 && temp <= 32)
    {
        cout << "Normal in Temperature";
    }
    else if (temp > 32 && temp <= 42)
    {
        cout << "It's Hot";
    }
    else
    {
        cout << "It's Very Hot";
    }

    return 0;
}
