// Write a C++ program that displays the product of all odd numbers from 1 to 10 using for loop?

#include <iostream>
using namespace std;

int main()
{
    int product = 1;

    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 != 0)
        {
            product *= i;
        }
    }

    cout << "Product of all odd numbers from 1 to 10 is: " << product << endl;

    return 0;
}
