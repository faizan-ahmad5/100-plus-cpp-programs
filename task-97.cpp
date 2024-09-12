// Write a menu driven C++ program that ask the user to choose the type in which he wants the output?
// Either he wants to convert the entered Celsius temperature in to Fahrenheit or Kelvin ?

#include <iostream>
using namespace std;

int main()
{
    cout << "Choose the type in which you want the output? " << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Celsius to Kelvin" << endl;

    int userChoice;
    cout << "Enter a number: ";
    cin >> userChoice;

    float celsius;
    float result;

    if (userChoice == 1)
    {
        cout << "Enter temperature in Celsius to convert into Fahrenheit: ";
        cin >> celsius;
        result = (celsius * 9 / 5) + 32;
        cout << "The temperature in Fahrenheit is: " << result << "C" << endl;
    }

    else if (userChoice == 2)
    {
        cout << "Enter temperature in Celsius to convert into Kelvin: ";
        cin >> celsius;
        result = celsius + 273.15;
        cout << "The temperature in Kelvin is: " << result << "K" << endl;
    }

    else
    {
        cout << "Invalid choice." << endl;
    }

    return 0;
}
