// Write a C++ program that prints a right-angled triangle pattern of stars with a height of 5 using nested for loops.

#include <iostream>
using namespace std;

int main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}