// Write a C++ program that tells the user that the number entered is even or odd ?

#include <iostream>
using namespace std;

int main()
{
    int userNum;

    cout << "Enter a number: ";
    cin >> userNum;

    if (userNum % 2 == 0)
    {
        cout << "The given number " << userNum << " is even." << endl;
    }
    else
    {
        cout << "The given number " << userNum << " is odd." << endl;
    }

    return 0;
}
