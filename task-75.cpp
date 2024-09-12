// Pattern Printing : Write a C++ program using nested while loops to print the following pattern :
// *
// **
// ***
// ****
// *****

#include <iostream>  // Include the I/O library
using namespace std; // Use the standard namespace

int main() // Main function where the program execution begins
{
    int faizanAhmad = 1;     // Initialize the outer loop counter
    while (faizanAhmad <= 5) // Outer loop: run 5 times for 5 lines
    {
        int j = 1;               // Initialize the inner loop counter
        while (j <= faizanAhmad) // Inner loop: run 'faizanAhmad' times
        {
            cout << "*"; // Print the asterisk
            j++;         // Increment the inner loop counter
        }

        cout << endl;  // Print a newline after each line of asterisks
        faizanAhmad++; // Increment the outer loop counter
    }

    return 0; // Return 0 to indicate successful completion
}
