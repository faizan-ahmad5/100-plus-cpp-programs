// Write a C++ program that prints the factorial of a given number using a for loop.

#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    int factorial = 1;

    for (int i = number; i > 0; i--)
    {
        factorial = factorial * i;
    }

    cout << "The factorial of " << number << " is " << factorial;

    return 0;
}
