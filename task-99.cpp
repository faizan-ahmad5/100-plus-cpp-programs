// According to your grading system mark the user entered numbers as Grade A, B, C, D, F ?

#include <iostream>
using namespace std;

int main()
{
    int userInput;

    cout << "Enter your percentage : ";
    cin >> userInput;

    if (userInput >= 90 && userInput <= 100)
    {
        cout << "A";
    }
    else if (userInput >= 80 && userInput <= 89)
    {
        cout << "B";
    }
    else if (userInput >= 70 && userInput <= 79)
    {
        cout << "C";
    }
    else if (userInput >= 60 && userInput <= 69)
    {
        cout << "D";
    }
    else
    {
        cout << "F";
    }

    return 0;
}