// Write a program to check whether a number is Armstrong number or not .

#include <iostream>
using namespace std;

int main()
{
    int userNum;

    cout << "Enter a number: ";
    cin >> userNum;

    string intToString = to_string(userNum);
    int totalNumberOfDigits = intToString.length();

    int sum = 0;

    for (int i = 0; i < totalNumberOfDigits; i++)
    {
        int singleDigit = intToString[i] - '0';

        int power = 1; // Reset power for each digit

        for (int j = 0; j < totalNumberOfDigits; j++)
        {
            power *= singleDigit;
        }

        sum += power;
    }

    if (sum == userNum)
    {
        cout << "It's an Armstrong number." << endl;
    }
    else
    {
        cout << "It's not an Armstrong number." << endl;
    }

    return 0;
}
