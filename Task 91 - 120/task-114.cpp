// Write a C++ program counts the number of digits in the number entered by user ?

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int userInput;

    cout << "Enter a number: ";
    cin >> userInput;

    string intToString = to_string(userInput);

    int count = intToString.length();

    cout << "The number of digits in the entered number is: " << count << endl;

    return 0;
}
