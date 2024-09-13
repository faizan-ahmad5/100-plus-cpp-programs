// Write a function that takes two parameters x and y as input and returns max of two input numbers
#include <iostream>
using namespace std;

int maxOfTwoNumbers(int x, int y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int main()
{
    int x, y;
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;

    int max = maxOfTwoNumbers(x, y);
    cout << "The maximum number is: " << max << endl;

    return 0;
}
