// Take input 10 numbers from user, sort them in ascending and descending order.
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int userInput[10] = {2, 10, 32, 3, 1, 4, 6, 7, 8, 9};

    sort(userInput, userInput + 10);

    cout << "Array sorted in ascending order: ";

    for (int i = 0; i < 10; i++)
    {
        cout << userInput[i] << " ";
    }
    cout << endl;

    sort(userInput, userInput + 10, greater<int>());

    cout << "Array sorted in descending order: ";

    for (int i = 0; i < 10; i++)
    {
        cout << userInput[i] << " ";
    }
    cout << endl;

    return 0;
}
