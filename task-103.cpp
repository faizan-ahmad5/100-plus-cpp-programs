// Write a program to input three numbers and find maximum between all.

#include <iostream>
using namespace std;

int main()
{
    int userNum1, userNum2, userNum3;

    cout << "Enter the first number: ";
    cin >> userNum1;

    cout << "Enter the second number: ";
    cin >> userNum2;

    cout << "Enter the third number: ";
    cin >> userNum3;

    if (userNum1 > userNum2 && userNum1 > userNum3)
    {
        cout << "The number " << userNum1 << " is maximum.";
    }
    else if (userNum2 > userNum1 && userNum2 > userNum3)
    {
        cout << "The number " << userNum2 << " is maximum.";
    }
    else
    {
        cout << "The number " << userNum3 << " is maximum.";
    }

    return 0;
}
