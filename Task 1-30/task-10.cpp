/* Write a C++ program that takes temperature in Fahrenheit from user and convert it to Celsius
and Kelvin using given formula.
C = (F – 32) / 1.8
K = C + 273*/

#include <iostream>
using namespace std;

int main()
{
    float fahrenheit, celsius, kelvin;
    cout << "Enter the value of Temperature in Fahrenheit :" << endl;
    cin >> fahrenheit;
    celsius = (fahrenheit - 32) / 1.8;
    kelvin = celsius + 273;
    cout << "Temperature in Celsius is = " << celsius << endl;
    cout << "Temperature in Kelvin is = " << kelvin;
    return 0;
}
