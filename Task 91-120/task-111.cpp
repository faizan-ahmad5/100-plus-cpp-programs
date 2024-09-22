// Write a C++ program that ask the user a number and prints the table of that number up to 10 ?

#include <iostream>
using namespace std;

int main()
{

    int userInput;

    cout << "Enter a number :";
    cin >> userInput;

    int table;

    for (int i = 1; i <= 10; i++)
    {
        table = userInput * i;

        cout << userInput << " X " << i << " = " << table << endl;
    }

    return 0;
}