// Write a C++ Program to make a simple calculator to
// add, subtract, multiply or divide using switch case

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    char option;

    cout << "Enter an operator ( + , - , * , / ) : ";
    cin >> option;
    cout << "Enter first number : ";
    cin >> num1;
    cout << "Enter second number : ";
    cin >> num2;

    switch (option)
    {
    case '+':
        cout << "The sum of two number is = " << num1 + num2;
        break;
    case '-':
        cout << "The sum of two number is = " << num1 - num2;
        break;
    case '*':
        cout << "The sum of two number is = " << num1 * num2;
        break;
    case '/':
        cout << "The sum of two number is = " << num1 / num2;
        break;

    default:
        cout << "Invalid operator";
        break;
    }

    return 0;
}