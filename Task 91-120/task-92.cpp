// Write a C++ program to find the second largest element in an array of 10 integers.

#include <iostream>
#include <algorithm> // Include the algorithm library for sort function
using namespace std;

int main()
{
    // Initialize the array with specific values
    int userInput[10] = {1, 2, 0, 3, 4, 5, 6, 10, 8, 9};

    // Sort the array in ascending order
    sort(userInput, userInput + 10);

    // Variable to store the second largest element
    int secondLargest = -1; // Initialize to -1 or another value that can't be in the array

    // Traverse the sorted array from the end to find the second largest element
    for (int i = 8; i >= 0; i--) // Start from the second last element
    {
        if (userInput[i] != userInput[9]) // Check if the current element is not equal to the largest element
        {
            secondLargest = userInput[i]; // Update secondLargest to the current element
            break;                        // Exit the loop once the second largest is found
        }
    }

    // Check if secondLargest was updated
    if (secondLargest == -1)
    {
        cout << "There is no second largest element." << endl; // Print a message if there is no second largest element
    }
    else
    {
        cout << "The second largest element is: " << secondLargest << endl; // Print the second largest element
    }

    return 0; // Return 0 to indicate successful execution
}
