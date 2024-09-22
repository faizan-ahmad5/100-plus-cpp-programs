// Write a C++ program to declare an array of 10 integers, initialize it with values from 1 to 10, and print all the elements of the array.

#include <iostream>  // Include the iostream library for input and output operations
using namespace std; // Use the standard namespace to avoid prefixing std:: to standard library names

int main() // Main function where the execution of the program begins
{
    // Declare and initialize an array of 10 integers with values from 1 to 10
    int integers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    /////////////////////////// FIRST METHOD //////////////////////////

    //// Using range-based for loop to iterate through each element in the array
    for (int integer : integers) // For each integer in the array 'integers'
    {
        cout << integer << " "; // Print the current integer followed by a space
    }
    cout << endl; // Print a newline character after printing all elements

    /////////////////////////// SECOND METHOD //////////////////////////

    //// Using traditional for loop to iterate through each index of the array
    // Calculate the length of the array
    int lengthOfArray = sizeof(integers) / sizeof(integers[0]);

    for (int i = 0; i < lengthOfArray; i++) // For each index from 0 to lengthOfIntegers - 1
    {
        cout << integers[i] << " "; // Print the element at the current index followed by a space
    }

    return 0; // Return 0 to indicate successful execution
}
