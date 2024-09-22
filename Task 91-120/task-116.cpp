// Write a program to find first and last digit of a number

#include <iostream>
using namespace std;

int main()
{
    int userInput;

    cout << "Enter a number: ";
    cin >> userInput;

    string intToString = to_string(userInput);

    char firstDigit = intToString[0];
    char lastDigit = intToString[intToString.length() - 1];

    cout << "First digit: " << firstDigit << endl;
    cout << "Last digit: " << lastDigit << endl;

    return 0;
}
