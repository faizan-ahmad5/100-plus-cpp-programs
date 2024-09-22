// Write a C++ program which takes a character and display its previous character using decrement operator.

#include <iostream>
using namespace std;

int main()
{
    char enteredChar, previousChar;
    cout << "Enter a alphabent in capital letters: ";
    cin >> enteredChar;
    previousChar = --enteredChar;
    cout << "The previous character is " << previousChar << endl;

    return 0;
}
