// Write a C++ program that prompts the user to enter 10 float numbers.
// The program should then determine and display the second greatest number among the entered numbers.
// If there is no distinct second greatest number(i.e., all numbers are the same or there is only one unique number),
// the program should inform the user accordingly.

#include <iostream>
#include <limits>
using namespace std;

int main()
{
    float userInput[10];

    cout << "Enter 10 float numbers:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> userInput[i];
    }

    float greatest = numeric_limits<float>::lowest();
    float secondGreatest = numeric_limits<float>::lowest();

    for (int i = 0; i < 10; i++)
    {
        if (userInput[i] > greatest)
        {
            secondGreatest = greatest;
            greatest = userInput[i];
        }
        else if (userInput[i] > secondGreatest && userInput[i] < greatest)
        {
            secondGreatest = userInput[i];
        }
    }

    if (secondGreatest == numeric_limits<float>::lowest())
    {
        cout << "There is no distinct second greatest number in the array." << endl;
    }
    else
    {
        cout << "The second greatest number is: " << secondGreatest << endl;
    }

    return 0;
}
