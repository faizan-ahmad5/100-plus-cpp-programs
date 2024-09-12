// Write a C++ program to remove a specific element from an array of 10 integers.
// The program should shift the remaining elements to fill the gap and reduce the size of the array by one.

#include <iostream>  // Include the iostream library for input and output operations
using namespace std; // Use the standard namespace to avoid prefixing std:: to standard library names

int main()
{
    // Initialize the array with specific values
    int userInput[10] = {51, 12, 7, 121, 19, 3, 80, 14, 15, 22};
    int size = 10;           // Initial size of the array
    int elementToRemove = 3; // Element to be removed

    // Find the index of the element to remove
    int indexToRemove = -1;        // Variable to store the index of the element to remove, initialized to -1 (not found)
    for (int i = 0; i < size; i++) // Loop through each index of the array
    {
        if (userInput[i] == elementToRemove) // Check if the current element matches the element to remove
        {
            indexToRemove = i; // Set indexToRemove to the current index
            break;             // Exit the loop as the element has been found
        }
    }

    // If the element is not found
    if (indexToRemove == -1) // Check if indexToRemove is still -1 (element not found)
    {
        cout << "Element " << elementToRemove << " not found in the array." << endl; // Print a message if the element was not found
        return 0;                                                                    // Exit the program
    }

    // Shift elements to the left to fill the gap
    for (int i = indexToRemove; i < size - 1; i++) // Start from the index of the element to remove and loop to the second-to-last index
    {
        userInput[i] = userInput[i + 1]; // Move the element at index i + 1 to index i
    }

    size--; // Reduce the size of the array by one as one element has been removed

    cout << "Array after removing " << elementToRemove << ": "; // Print a message before displaying the modified array

    // Loop to print each element of the modified array
    for (int i = 0; i < size; i++) // Loop through each index of the updated array
    {
        cout << userInput[i] << " "; // Print the element at the current index followed by a space
    }

    cout << endl; // Move to the next line after printing all elements

    return 0; // Return 0 to indicate successful execution
}
