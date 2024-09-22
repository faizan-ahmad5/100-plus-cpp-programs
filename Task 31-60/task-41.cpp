/**
 * Prompts the user to enter a number repeatedly until a non-positive number is entered.
 *
 */
#include <iostream>
using namespace std;

int main()
{
    int x = 1;
    do
    {
        cout << "Enter a number :";
        cin >> x;
    } while (x > 0);

    return 0;
}