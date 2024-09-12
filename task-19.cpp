/*Write a C++ program that take seconds from user and displays time in hours minutes and
seconds format. For example, if user enters 3700, output should be 1 hour 1 minute and 40 seconds.*/

#include <iostream>
using namespace std;

int main()
{
    int seconds, minutes, hours;
    cout << "Enter the value for seconds: ";
    cin >> seconds;
    hours = seconds / 3600;
    seconds = seconds % 3600;
    minutes = seconds / 60;
    seconds = seconds % 60;
    cout << "Your time is: " << hours << " hours, " << minutes << " minutes, and " << seconds << " seconds." << endl;
    return 0;
}
