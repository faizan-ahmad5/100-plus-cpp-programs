// Reverse Digits : Write a C++ program that reverses the digits of an integer using a while loop.

#include <iostream>  // Includes the standard input-output stream library
using namespace std; // Uses the standard namespace

int main() // Main function where the program execution begins
{
    int userNum; // Declare a variable to store the user's input

    cout << "Enter a number :"; // Prompt the user to enter a number
    cin >> userNum;             // Read the user's input and store it in userNum

    string userNumInString = to_string(userNum); // Convert the integer to a string and store it in userNumInString

    int i = userNumInString.length() - 1; // Initialize i to the index of the last character in the string

    string reverse = ""; // Initialize an empty string to store the reversed digits

    while (i >= 0) // While loop to iterate through the string from the end to the beginning
    {
        reverse = reverse + userNumInString[i]; // Append the current character to the reverse string
        i--;                                    // Decrement the loop counter
    }

    cout << "The digits of integer in reverse order is = " << reverse; // Output the reversed string

    return 0; // Return 0 to indicate that the program ended successfully
}
