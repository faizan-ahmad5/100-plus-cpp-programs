// Write a C++ program that takes an integer input from the user and prints
// if the number is positive, negative, or zero using nested if statements.

#include <iostream>
using namespace std;

int main()
{
    int userInput;

    cout << "Enter an integer number :";
    cin >> userInput;

    if (userInput >= 0)
    {
        if (userInput > 0)
        {
            cout << "The numver is positive";
        }
        else
        {
            cout << "The number is zero";
        }
    }
    else
    {
        cout << " The number is negative ";
    }

    return 0;
}