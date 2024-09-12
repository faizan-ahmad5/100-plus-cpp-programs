// Write a C++ program that calculates and prints the sum of all odd numbers from 1 to 100 using a for loop.

#include <iostream>
using namespace std;

int main()
{

    int sum = 0;

    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
    }

    cout << "The sum of first 100 odd number is equal to = " << sum;

    return 0;
}
