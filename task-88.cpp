// Write a C++ program to reverse the elements of an array of 10 integers.Display the original and the reversed array.

#include <iostream>  // Include the iostream library for input and output operations
using namespace std; // Use the standard namespace to avoid prefixing std:: to standard library names

int main()
{
    // Initialize the array with specific values
    int userInput[10] = {5, 12, 7, 1, 19, 3, 8, 4, 15, 2}; // Example values

    cout << "Original array: "; // Display the original array

    // Loop to print each element of the original array
    for (int i : userInput) // Range-based for loop to iterate through each element in userInput
    {
        cout << i << " "; // Print each element followed by a space
    }

    cout << endl; // Move to the next line after printing the original array

    cout << "Reversed array: "; // Display the reversed array

    // Loop to print each element of the array in reverse order
    for (int i = 9; i >= 0; i--) // Start a loop that iterates from 9 to 0
    {
        cout << userInput[i] << " "; // Print each element in reverse order followed by a space
    }

    cout << endl; // Move to the next line after printing the reversed array

    return 0; // Return 0 to indicate successful execution
}
