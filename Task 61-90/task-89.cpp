// Write a C++ program to sort an array of 10 integers in ascending order.

#include <iostream>
#include <algorithm> // Include the algorithm library for the sort function
using namespace std;

int main()
{
    int userInput[10] = {2, 10, 32, 3, 1, 4, 6, 7, 8, 9}; // Declare an array of 10 integers and initialize it

    // Sort the array in ascending order using the sort function from the algorithm library
    sort(userInput, userInput + 10);

    cout << "Sorted array: "; // Display the sorted array

    // Loop to print each element of the sorted array
    for (int i = 0; i < 10; i++)
    {
        cout << userInput[i] << " "; // Print each element followed by a space
    }

    cout << endl; // Move to the next line after printing the sorted array
    return 0;     // Return 0 to indicate successful execution
}
