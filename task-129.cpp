// Write a C++ program to generate the sum of left diagonal.

#include <iostream>
using namespace std;

int main()
{
    const int size = 3; // Define the size of the square matrix
    int matrix[size][size];
    int sum = 0;

    // Take matrix input from the user
    cout << "Enter the elements of the " << size << "x" << size << " matrix:" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    // Calculate the sum of the left diagonal (primary diagonal)
    for (int i = 0; i < size; i++)
    {
        sum += matrix[i][i];
    }

    // Print the result
    cout << "Sum of the left diagonal elements: " << sum << endl;

    return 0;
}
