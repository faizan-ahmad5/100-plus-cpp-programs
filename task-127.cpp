// Take array of 5 numbers from user, now print them in reverse order.
#include <iostream>
using namespace std;

int main()
{
    int userInput[5];

    cout << "Enter 5 numbers:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> userInput[i];
    }

    cout << "Numbers in reverse order:" << endl;
    for (int i = 4; i >= 0; i--)
    {
        cout << userInput[i] << " ";
    }
    cout << endl;

    return 0;
}
