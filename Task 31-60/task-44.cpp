//  (continue statement): Program to calculate the sum
// of numbers (10 numbers maximum) using for loop. If the
// user enters a negative number, it's not added to the result

#include <iostream>
using namespace std;

int main()
{

    int sum = 0;
    int userValue;

    for (int i = 1; i <= 10; i++)
    {
        cout << "Enter a number : ";
        cin >> userValue;

        if (userValue <= 0)
        {
            continue;
        }

        sum = sum + userValue;
    }

    cout << "The sum of all the numbers is = " << sum << endl;

    return 0;
}