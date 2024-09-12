// Write a C++ program that tells the user that the number entered is less than, greater than or equal to 10 ?

#include <iostream>
using namespace std;

int main()
{
    int userNum;

    cout << "Enter a number: ";
    cin >> userNum;

    if (userNum > 10)
    {
        cout << "The given number " << userNum << " is greater than 10." << endl;
    }
    else if (userNum < 10)
    {
        cout << "The given number " << userNum << " is less than 10." << endl;
    }
    else
    {
        cout << "The given number " << userNum << " is equal to 10." << endl;
    }

    return 0;
}
