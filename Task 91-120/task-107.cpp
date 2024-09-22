// According to your grading system mark the user entered percentage as Grade A, B, C, D, F ?
// Percentage >=90 A grade
// Percentage >=80 B grade
// Percentage >=70 C grade
// Percentage >=60 D grade
// Percentage >=40 E grade
// Percentage <40 F grade

#include <iostream>
using namespace std;

int main()
{
    int userInput;

    cout << "Enter your percentage: ";
    cin >> userInput;

    if (userInput >= 90 && userInput <= 100)
    {
        cout << "Grade: A" << endl;
    }
    else if (userInput >= 80 && userInput < 90)
    {
        cout << "Grade: B" << endl;
    }
    else if (userInput >= 70 && userInput < 80)
    {
        cout << "Grade: C" << endl;
    }
    else if (userInput >= 60 && userInput < 70)
    {
        cout << "Grade: D" << endl;
    }
    else if (userInput >= 40 && userInput < 60)
    {
        cout << "Grade: E" << endl;
    }
    else if (userInput < 40 && userInput >= 0)
    {
        cout << "Grade: F" << endl;
    }
    else
    {
        cout << "Invalid percentage entered." << endl;
    }

    return 0;
}
