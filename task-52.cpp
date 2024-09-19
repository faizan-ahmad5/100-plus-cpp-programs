// Write a C++ program that takes an integer input from the user and checks if the number is even.If it is even,
// print "The number is even".

#include <iostream>
using namespace std;

int main()
{
    int userInput;

    cout << "Enter an integer input :";
    cin >> userInput;

    if (userInput % 2 == 0)
    {
        cout << "The number is even";
    }

    return 0;
}