// Write a C++ program to generate transpose of 3˟3 matrix

#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 3;
    int matrix[SIZE][SIZE];
    int transpose[SIZE][SIZE];

    // Input the matrix
    cout << "Enter the elements of the 3x3 matrix:" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    // Compute the transpose
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Display the original matrix
    cout << "Original matrix:" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Display the transposed matrix
    cout << "Transposed matrix:" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
