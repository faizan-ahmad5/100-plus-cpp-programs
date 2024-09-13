// Write a C++ program that prints a pyramid pattern of asterisks. The pattern should have 5 rows, with the number
// of asterisks in each row increasing by 2 for each subsequent row, starting with 1 asterisk in the first row.
// *
// ***
// *****
// *******
// *********

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        string sum = "";
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            sum += "*";
        }
        cout << sum << endl;
    }
    return 0;
}
