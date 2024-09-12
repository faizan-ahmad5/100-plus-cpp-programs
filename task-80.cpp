// Sum until Zero : Write a C++ program that continually asks the user to enter numbers and adds them together.
// Use a break statement to exit the loop and print the total sum when the user enters zero.

#include <iostream>  // Include the input-output stream library
using namespace std; // Use the standard namespace

int main() // Main function
{
    int userInput;       // Variable to store user input
    int faizanAhmad = 0; // Variable to accumulate the sum

    while (true) // Infinite loop to continually ask for numbers
    {
        cout << "Enter a number : ";
        cin >> userInput; // Read user input

        if (userInput == 0) // Check if user entered zero
        {
            break; // Exit the loop if zero is entered
        }

        faizanAhmad += userInput; // Add the number to the sum
    }

    cout << "Total sum of the numbers entered: " << faizanAhmad << endl; // Print the total sum

    return 0; // Return 0 to indicate successful execution
}
