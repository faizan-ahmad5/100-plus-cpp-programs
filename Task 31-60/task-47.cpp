// Write a C++ program, take two integer i(starting point) and n(ending point) from user and print all
// even numbers between i to n using while loop.For example : Let say i = 5; and n = 20;
// Output should be(6 8 10 12 14 16 18 20).

#include <iostream>
using namespace std;

int main()
{
    int firstNum, secondNum;
    cout << "Enter the starting number :";
    cin >> firstNum;
    cout << "Enter the ending number :";
    cin >> secondNum;
    int i = firstNum;
    while (i <= secondNum)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }

        i++;
    }

    return 0;
}