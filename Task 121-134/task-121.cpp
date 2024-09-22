// Write a program to print Pascal triangles up to n rows.

#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the number of rows for Pascal's triangle: ";
    cin >> rows;

    for (int i = 0; i < rows; i++)
    {
        int num = 1;
        for (int j = 0; j <= i; j++)
        {
            cout << num << " ";
            // Update the number using the formula for Pascal's Triangle
            num = num * (i - j) / (j + 1);
        }
        cout << endl;
    }

    return 0;
}
