// Prime Numbers Matrix : Write a C++ program using nested while loops to print a matrix of the first
// 5 prime numbers in each row.

#include <iostream>  // Includes the standard input-output stream library
using namespace std; // Uses the standard namespace

int main() // Main function where the program execution begins
{
    // Array containing the first 5 prime numbers
    int primeNums[5] = {2, 3, 5, 7, 11};

    // Variable to control the number of rows
    int numberOfRows = 3; // You can change this to print more or fewer rows

    int faizanAhmad = 0; // Initialize the outer loop counter
    while (faizanAhmad < numberOfRows)
    {              // Outer loop for each row
        int j = 0; // Initialize the inner loop counter
        while (j < 5)
        {                                // Inner loop to print each prime number
            cout << primeNums[j] << " "; // Print the j-th prime number followed by a space
            j++;                         // Increment the inner loop counter
        }
        cout << endl;  // After printing all prime numbers in a row, move to the next line
        faizanAhmad++; // Increment the outer loop counter
    }

    return 0;
}
