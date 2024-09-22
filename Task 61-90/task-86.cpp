// Write a C++ program that reads 5 integers from the user into an array and finds the maximum element in the array.

#include <iostream>  // Include the iostream library for input and output operations
using namespace std; // Use the standard namespace to avoid prefixing std:: to standard library names

int main()
{
    int userInput[5]; // Declare an array of 5 integers

    cout << "Enter five numbers: " << endl; // Prompt the user to enter five numbers

    // Loop to read 5 integers from the user into the array

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter number " << i + 1 << ": "; // Prompt the user to enter the number at position i + 1
        cin >> userInput[i];                      // Read the user input and store it in the array at index i
    }

    int maximum = userInput[0]; // Assume the first element is the maximum

    // Loop to find the maximum element in the array
    for (int i = 1; i < 5; i++)
    {
        if (userInput[i] > maximum) // Check if the current element is greater than the current maximum
        {
            maximum = userInput[i]; // Update maximum if the current element is greater
        }
    }

    // Output the maximum element in the array
    cout << "The maximum number in the array is: " << maximum << endl;

    return 0; // Return 0 to indicate successful execution
}
