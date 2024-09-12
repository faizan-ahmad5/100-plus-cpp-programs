// Write a C++ program to find the duplicate values in a 2d array.

#include <iostream>
using namespace std;

int main()
{
    const int rows = 3;
    const int cols = 3;
    int array[rows][cols];

    // Take input for the 2D array
    cout << "Enter the elements of the " << rows << "x" << cols << " matrix:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }

    bool foundDuplicate = false;

    // Find and print duplicate values
    cout << "Duplicate values in the array are:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            // Check for duplicates only if the element is not yet marked
            for (int k = i; k < rows; k++)
            {
                for (int l = (k == i ? j + 1 : 0); l < cols; l++)
                {
                    if (array[i][j] == array[k][l])
                    {
                        cout << array[i][j] << " found at positions [" << i << "][" << j << "] and [" << k << "][" << l << "]" << endl;
                        foundDuplicate = true;
                    }
                }
            }
        }
    }

    if (!foundDuplicate)
    {
        cout << "No duplicate values found." << endl;
    }

    return 0;
}
