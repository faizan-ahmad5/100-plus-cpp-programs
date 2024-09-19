// Sum of Matrix Elements : Write a C++ program using nested while loops to calculate the sum of all elements in a 3x3 matrix.

#include <iostream>  // Include the I/O library
using namespace std; // Use the standard namespace

int main() // Main function where the program execution begins
{
    int matrix[3][3] = {
        {1, 2, 3}, // Initialize a 3x3 matrix with sample values
        {4, 5, 6},
        {7, 8, 9}};

    int sum = 0;         // Variable to store the sum of matrix elements
    int faizanAhmad = 0; // Outer loop counter for rows

    while (faizanAhmad < 3)
    {              // Iterate over each row
        int j = 0; // Inner loop counter for columns
        while (j < 3)
        {                                  // Iterate over each column
            sum += matrix[faizanAhmad][j]; // Add the current element to the sum
            j++;                           // Move to the next column
        }

        faizanAhmad++; // Move to the next row
    }

    cout << "Sum of all matrix elements is: " << sum << endl; // Output the sum

    return 0;
}
