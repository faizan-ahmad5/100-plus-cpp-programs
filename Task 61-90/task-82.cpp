// Character Grid: Write a C++ program using nested while loops to print a grid of characters. Use a break statement in the inner loop to stop printing characters in a row after printing 'z':
// a b c ... z
// a b c ... z
// a b c ... z

#include <iostream>
using namespace std;

int main()
{
    int rows = 3;  // Number of rows in the grid
    int cols = 26; // Number of columns (a-z)

    char faizanAhmad = 'a'; // Starting character 'a'

    int row = 0;
    while (row < rows) // Outer while loop for rows
    {
        int col = 0;
        while (col < cols) // Inner while loop for columns (a-z)
        {
            char currentChar = faizanAhmad + col; // Calculate current character based on column index

            if (currentChar > 'z') // Check if current character exceeds 'z'
            {
                break; // Exit inner loop if current character exceeds 'z'
            }

            cout << currentChar << " "; // Print the current character followed by a space

            col++; // Move to the next column
        }

        cout << endl; // Move to the next line after printing characters for the current row
        row++;        // Move to the next row
    }

    return 0;
}
