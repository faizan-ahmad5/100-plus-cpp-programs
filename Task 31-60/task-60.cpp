// Write a C++ program that takes a year as input from the user and checks
// if it is a leap year using nested if statements.

#include <iostream>
using namespace std;

int main()
{
    int year;

    cout << "Enter year :";
    cin >> year;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {

            if (year % 400 == 0)
            {
                cout << year << " is a leap year." << endl;
            }
            else
            {
                cout << year << " is not a leap year." << endl;
            }
        }
        else
        {
            cout << year << " is a leap year." << endl;
        }
    }
    else
    {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}