// Write a program to calculate product of digits of a number.

#include <iostream>
using namespace std;

int main()
{
    int userNum;

    cout << "Enter a number: ";
    cin >> userNum;

    string intToString = to_string(userNum);

    int product = 1;

    for (int i = 0; i < intToString.length(); i++)
    {
        product = product * (intToString[i] - '0');
    }

    cout << "The product of digits of the number is = " << product << endl;

    return 0;
}
