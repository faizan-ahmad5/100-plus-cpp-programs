// Write a C++ program to find and print duplicate elements in an array of 10 integers.

#include <iostream>
using namespace std;

int main()
{
    // Initialize the array with specific values
    int userInput[10] = {1, 2, 8, 3, 4, 5, 6, 9, 8, 9};

    // Loop through each element of the array
    for (int i = 0; i < 10; i++)
    {
        // Check if the element at index i is a duplicate
        for (int j = i + 1; j < 10; j++)
        {
            // If the current element matches another element in the array
            if (userInput[i] == userInput[j])
            {
                // Print the duplicate element
                cout << "Duplicate element found: " << userInput[i] << endl;
                break; // Exit the inner loop to avoid printing the same duplicate element again
            }
        }
    }

    return 0; // Return 0 to indicate successful execution
}
