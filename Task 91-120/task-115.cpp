// Write a C++ program to reverse a number entered by user using loop.

#include <iostream>
using namespace std;

int main()
{
    int userInput;

    cout << "Enter a number :";
    cin >> userInput;

    for (int i = userInput; i >= 0; i--)
    {
        cout << i << " ";
    }

    return 0;
}