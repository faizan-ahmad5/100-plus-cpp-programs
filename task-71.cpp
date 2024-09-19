// Multiplication Table : Write a C++ program using nested while loops to print the multiplication table from 1 to 10.

#include <iostream>  // Include the Input/Output stream library
using namespace std; // Use the standard namespace

int main() // Main function where the program execution begins
{
    int faizanAhmad = 1;      // Initialize the outer loop counter 'i' to 1
    while (faizanAhmad <= 10) // Start of the outer loop that runs from 1 to 10
    {
        int j = 1;      // Initialize the inner loop counter 'j' to 1
        while (j <= 10) // Start of the inner loop that runs from 1 to 10
        {
            cout << faizanAhmad << " X " << j << " = " << faizanAhmad * j << endl; // Print the multiplication of 'i' and 'j'
            j++;                                                                   // Increment the inner loop counter
        }

        faizanAhmad++; // Increment the outer loop counter
    }

    return 0; // Return statement of the main function
}
