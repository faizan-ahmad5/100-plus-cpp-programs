// Early Termination : Write a C++ program that reads integers from the user in a while loop and terminates the loop
// when the user enters a negative number.// Print the sum of all entered positive numbers before the user enters a negative number.

#include <iostream>  // Include the I/O library for input and output operations
using namespace std; // Use the standard namespace to avoid typing 'std::' before I/O operations

int main() // Main function where the program execution begins
{
    int faizanAhmad = 0; // Initialize a variable to store the sum of positive numbers

    while (true) // Infinite loop, will run until 'break' is encountered
    {
        int userNum;                // Declare a variable to store the user input
        cout << "Enter a number: "; // Prompt the user to enter a number
        cin >> userNum;             // Read the number from user input

        if (userNum < 0) // Check if the entered number is negative
        {
            break; // Exit the loop if the number is negative
        }

        faizanAhmad += userNum; // Add the positive number to the sum
    }

    cout << "The sum of all the positive numbers is = " << faizanAhmad << endl; // Output the sum of positive numbers

    return 0; // Return 0 to indicate successful completion
}
