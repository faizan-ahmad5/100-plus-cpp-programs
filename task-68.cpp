// Factorial Calculation : Write a C++ program that calculates the factorial of a given number using a while loop.

#include <iostream>  // Includes the standard input-output stream library
using namespace std; // Uses the standard namespace

int main() // Main function where the program execution begins
{
    int userInput;     // Declare a variable to store the user's input
    int factorial = 1; // Initialize factorial to 1, which will hold the factorial result

    cout << "Enter a number :"; // Prompt the user to enter a number
    cin >> userInput;           // Read the user's input and store it in userInput

    int faizanAhmad = userInput; // Copy the user's input to faizanAhmad for the calculation

    while (faizanAhmad > 0) // While loop to calculate the factorial
    {
        factorial = factorial * faizanAhmad; // Multiply the current factorial value by faizanAhmad
        faizanAhmad--;                       // Decrement faizanAhmad by 1
    }

    cout << "The factorial of the given number is = " << factorial; // Output the factorial result
    return 0;                                                       // Return 0 to indicate that the program ended successfully
}
