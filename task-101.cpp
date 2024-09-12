// Write a C++ program to check whether a character is alphabet or not .

#include <iostream>
using namespace std;

int main()
{
    char userInput;

    cout << "Enter a character: ";
    cin >> userInput;

    // ASCII codes range from 97('a')to 122('z')    // ASCII codes range from 65('A')to 90('Z')
    if ((userInput >= 'a' && userInput <= 'z') || (userInput >= 'A' && userInput <= 'Z'))
    {
        cout << "The character is an alphabet." << endl;
        cout << static_cast<int>(userInput);
    }
    else
    {
        cout << "The character is not an alphabet." << endl;
    }

    return 0;
}
