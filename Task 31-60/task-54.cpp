// Write a C++ program that takes an integer input from the user and checks if the number is divisible by 5.
//  If it is, print "The number is divisible by 5".

#include <iostream>
using namespace std;

int main()
{
    int userInput;
    cout << "Enter an integer: ";
    cin >> userInput;

    if (userInput % 5 == 0)
    {
        cout << "The number is divisible by 5." << endl;
    }

    return 0;
}
