/*Write a program that asks the user to enter a value for x and then displays value of following
polynomial 2x5 + 3x4 - x3 - 2x2 + 7x - 6.
To calculate x5 you will have to use pow (x, 5).
Note: include math.h library for pow.*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x;
    cout << "Enter value of x : ";
    cin >> x;
    cout << "The answer of the polynomial is = " << 2 * pow(x, 5) + 3 * pow(x, 4) - pow(x, 3) - 2 * pow(x, 2) + 7 * x - 6;
    return 0;
}