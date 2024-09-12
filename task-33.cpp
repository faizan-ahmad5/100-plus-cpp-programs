/* Write a C++ program, take an integer value from user and check if it’s greater than 10 and less
than or equal to 20. Print 1 if yes and print 0 if no */

#include <iostream>
using namespace std;

int main()
{
    int value;
    cout << "Enter an integer value :";
    cin >> value;

    if (value > 10 && value <= 20)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "0";
    }

    return 0;
}