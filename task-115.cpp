// Write a C++ program that finds the sum of squares of integer from 1 to n.
// Where n is a positive value entered by user(i.e.1 ^ 2 + 2 ^ 2 + 3 ^ 2………. + n ^ 2).

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter nth value: ";
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + (i * i);
    }

    cout << "The sum of squares from 1 to " << n << " is: " << sum << endl;
    return 0;
}
