// Write a C++ program to display 4 days of 2 weeks by using nested for loop

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 2; i++)
    {
        cout << "Week: " << i << endl;

        for (int j = 1; j <= 4; j++)
        {
            cout << "Day: " << j << endl;
        }
    }

    return 0;
}
