// Basic Summation : Write a C++ program using a while loop to calculate the sum of the first 20 positive integers.

#include <iostream>  // Includes the standard input-output stream library
using namespace std; // Uses the standard namespace

int main() // Main function where the program execution begins
{
    int sum = 0;         // Initialize sum to 0, which will hold the cumulative sum of integers
    int faizanAhmad = 1; // Initialize faizanAhmad to 1, which will be used as a counter

    while (faizanAhmad <= 20) // While loop to iterate from 1 to 20 inclusive
    {
        sum = sum + faizanAhmad; // Add the current value of faizanAhmad to sum
        faizanAhmad++;           // Increment faizanAhmad by 1
    }

    cout << "The sum of first 20 positive integers is = " << sum; // Output the sum

    return 0; // Return 0 to indicate that the program ended successfully
}
