// Write a C++ program to input an upper bound and separate even & odd from that limit ?

#include <iostream>
using namespace std;

int main()
{

    int userInput;

    cout << "Enter a number :";
    cin >> userInput;

    for (int i = 0; i <= userInput; i++)
    {
        if (i % 2 == 0)
        {
            cout << "The " << i << " is even " << endl;
        }
        else
        {
            cout << "The " << i << " is odd " << endl;
        }
    }

    return 0;
}