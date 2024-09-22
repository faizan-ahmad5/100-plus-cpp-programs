// Write a menu driven C++ program for simple calculator using if-else.

#include <iostream>
using namespace std;

int main()
{
    int userNum1, userNum2;
    cout << "Enter first Number :" << endl;
    cin >> userNum1;

    cout << "Enter second Number :";
    cin >> userNum2;

    char oper;
    cout << "Choose an operator ( + , - , * , /)";
    cin >> oper;

    if (oper == '+')
    {
        cout << "The sum of two number is = " << userNum1 + userNum2;
    }
    else if (oper == '-')
    {
        cout << "The subtraction of two numbers is = " << userNum1 - userNum2;
    }
    else if (oper == '*')
    {
        cout << "The multiplication of two numbers is = " << userNum1 * userNum2;
    }
    else if (oper == '/')
    {
        cout << "The division of two numbers is = " << userNum1 / userNum2;
    }
    else
    {
        cout << "Error! Please choose from the given operators";
    }

    return 0;
}