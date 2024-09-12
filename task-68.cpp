// Write a C++ program that prints the transpose of a 3x3 matrix entered by the user using nested for loops

#include <iostream>
using namespace std;

int main()
{

    // int matrix[3][3], transpose[3][3];

    // cout << "Enter the elements of the 3x3 matrix:" << endl;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cin >> matrix[i][j];
    //     }
    // }

    // // Find the transpose
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         transpose[i][j] = matrix[j][i];
    //     }
    // }

    // cout << "Transpose of the matrix:" << endl;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << transpose[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int matrix[3][3];

    cout << "Enter the values for 3x3 matrix :";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int transpose[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    cout << "Transponse is : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << transpose[i][j] << "\t";
        }
        cout << endl;
    }
}
