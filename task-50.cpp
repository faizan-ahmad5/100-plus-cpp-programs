// Calculate the sum of odd natural numbers 1 + 3 + 5 + 7 +……………..+ n using while loop.Take n as input from user

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter the nth number: ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
        i++;
    }
    cout << "The sum of odd natural numbers is = " << sum;
    return 0;
}
