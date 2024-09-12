// Write a C++ program to input an upper bound by user and print all numbers up to that limit ?

#include <iostream>
using namespace std;

int main()
{

    int userInput;

    cout << "Enter a number :";
    cin >> userInput;

    for (int i = 1; i <= userInput; i++)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}