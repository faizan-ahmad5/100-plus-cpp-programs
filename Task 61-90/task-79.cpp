// Matrix Search: Write a C++ program using nested while loops to search for a specific value in a 4x4 matrix.
// Use a break statement to exit the inner loop when the value is found, and print the position of the value.

#include <iostream>  // Include the input-output stream library for using cout and cin
using namespace std; // Use the standard namespace to avoid prefixing standard library functions with std::

int main() // Main function, entry point of the program
{
    int matrix[4][4] = {// Define a 4x4 matrix of integers
                        {1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}};

    int targetValue;                           // Declare a variable to store the value to search for
    cout << "Enter the value to search for: "; // Output message asking the user to enter the value
    cin >> targetValue;                        // Read the value entered by the user and store it in targetValue

    int row = 0;              // Initialize a variable to keep track of the current row index in the matrix
    int col = 0;              // Initialize a variable to keep track of the current column index in the matrix
    bool faizanAhmad = false; // Boolean variable to indicate whether the targetValue is found in the matrix

    while (row < 4 && !faizanAhmad) // Outer while loop iterating over each row of the matrix until targetValue is found or all rows are checked
    {
        col = 0;        // Reset col to 0 at the start of each row iteration
        while (col < 4) // Inner while loop iterating over each column of the current row
        {
            if (matrix[row][col] == targetValue) // Check if the current element equals targetValue
            {
                faizanAhmad = true; // Set found to true if targetValue is found
                break;              // Exit the inner loop early since targetValue is found
            }
            col++; // Move to the next column
        }
        row++; // Move to the next row
    }

    if (faizanAhmad) // If targetValue is found in the matrix
    {
        cout << "Value found at position (" << row - 1 << ", " << col << ")" << endl; // Output the position of the targetValue (adjust for zero-based index)
    }
    else // If targetValue is not found in the matrix
    {
        cout << "Value not found in the matrix." << endl; // Output a message indicating that the value is not found
    }

    return 0; // Return 0 to indicate successful completion of the program
}
