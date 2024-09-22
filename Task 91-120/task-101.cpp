// Write a C++ program to check whether a character is vowel or consonant.

#include <iostream>
#include <cctype> // for tolower function
using namespace std;

int main()
{
    char userInput;

    cout << "Enter an alphabet/character :";
    cin >> userInput;

    userInput = tolower(userInput);

    if (userInput == 'a' || userInput == 'e' || userInput == 'i' || userInput == 'o' || userInput == 'u')
    {
        cout << "The given charcter is vowel";
    }
    else
    {
        cout << "The given character is consonant";
    }

    return 0;
}