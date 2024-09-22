// Write a C++ program that reads 10 integers from the user into an array and calculates the sum of all the elements in the array.

#include <iostream>  // Include the iostream library for input and output operations
using namespace std; // Use the standard namespace to avoid prefixing std:: to standard library names

int main()
{
    int userInput[10]; // Declare an array of 10 integers
    int sum = 0;       // Initialize sum to 0

    cout << "Enter 10 numbers:" << endl; // Prompt the user to enter 10 numbers

    // Loop to read 10 integers from the user into the array
    for (int i = 0; i < 10; i++) // Start a loop that iterates from 0 to 9
    {
        cout << "Enter number " << i + 1 << ": "; // Prompt the user to enter the number at position i + 1
        cin >> userInput[i];                      // Read the user input and store it in the array at index i
        sum += userInput[i];                      // Add the current element to the sum
    }

    // Output the sum of all the elements in the array
    cout << "The sum of all the elements in the array is: " << sum << endl; // Display the sum of the elements

    return 0; // Return 0 to indicate successful execution
}
