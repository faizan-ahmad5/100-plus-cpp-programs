// Sum of Diagonal Elements : Write a C++ program using nested while loops to calculate the sum of the diagonal elements of a 5x5 matrix.
// Use a break statement to exit the inner loop once the diagonal element is processed.

#include <iostream>
using namespace std;

int main()
{
    int matrix[5][5] = {// Define a 5x5 matrix
                        {1, 2, 3, 4, 5},
                        {6, 7, 8, 9, 10},
                        {11, 12, 13, 14, 15},
                        {16, 17, 18, 19, 20},
                        {21, 22, 23, 24, 25}};

    int sum = 0; // Variable to store the sum of diagonal elements

    int faizanAhmad = 0; // Row index
    int j = 0;           // Column index

    while (faizanAhmad < 5) // Outer while loop to iterate through each row
    {
        while (j < 5) // Inner while loop to iterate through each column
        {
            if (faizanAhmad == j) // Check if the current element is on the main diagonal
            {
                sum += matrix[faizanAhmad][j]; // Add the diagonal element to the sum
                break;                         // Exit the inner loop after processing the diagonal element
            }
            j++; // Move to the next column
        }
        faizanAhmad++; // Move to the next row
        j = 0;         // Reset column index to start from the beginning in the next row
    }

    cout << "Sum of diagonal elements: " << sum << endl; // Output the sum of diagonal elements

    return 0;
}
