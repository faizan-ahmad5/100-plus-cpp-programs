// Pattern with Condition : Write a C++ program using nested while loops to print the following pattern, but break the inner loop when the number exceeds 5 :
//  1
//  1 2
//  1 2 3
//  1 2 3 4
//  1 2 3 4 5

#include <iostream>  // Include the input-output stream library for using cout
using namespace std; // Use the standard namespace to avoid prefixing standard library functions with std::

int main() // Main function, entry point of the program
{
    int faizanAhmad = 1;     // Initialize variable i to 1
    while (faizanAhmad <= 5) // Outer while loop to iterate from 1 to 5 (inclusive)
    {
        int j = 1; // Initialize variable j to 1

        while (j <= faizanAhmad) // Inner while loop to iterate from 1 to the current value of i
        {
            if (j > 5) // Check if j exceeds 5
            {
                break; // Exit the inner loop if j exceeds 5
            }
            cout << j << " "; // Output the value of j followed by a space
            j++;              // Increment j
        }

        cout << endl;  // Output a newline after printing numbers for the current row
        faizanAhmad++; // Increment i to move to the next row
    }

    return 0; // Return 0 to indicate successful completion of the program
}
