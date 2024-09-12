// Write a C++ program that takes a character input from the user and checks if it is an uppercase letter.
// If it is, print "The character is uppercase".

#include <iostream>
using namespace std;

int main()
{
    char userInput;

    cout << "Enter a character :";
    cin >> userInput;

    if (userInput >= 'A' && userInput <= 'Z')
    {
        cout << "The character is uppercase" << endl;
    }

    return 0;
}