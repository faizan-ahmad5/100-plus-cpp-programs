// Write a C++ program that prints a 5x5 matrix filled with numbers from 1 to 25 using nested for loops.

#include <iostream>
using namespace std;

int main()
{
    int num = 1;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << num << "\t";
            num++;
        }

        cout << endl;
    }

    return 0;
}
