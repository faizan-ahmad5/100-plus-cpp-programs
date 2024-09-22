// Digit Count : Write a C++ program using a while loop to count the number of digits in a given integer.

#include <iostream>  // Includes the standard input-output stream library
#include <string>    // Includes the string library
using namespace std; // Uses the standard namespace

int main() // Main function where the program execution begins
{
    int userNum; // Declare a variable to store the user's input

    cout << "Enter a number :"; // Prompt the user to enter a number
    cin >> userNum;             // Read the user's input and store it in userNum

    string userNumInString = to_string(userNum); // Convert the integer to a string and store it in userNumInString

    int faizanAhmad = 0; // Initialize faizanAhmad to 0, which will be used as a loop counter
    int count = 0;       // Initialize count to 0, which will be used to count the digits

    while (faizanAhmad < userNumInString.length()) // While loop to iterate through each character in the string
    {
        count++;       // Increment count for each character in the string
        faizanAhmad++; // Increment the loop counter
    }

    cout << "The total digits in the given number is = " << count; // Output the total number of digits
    return 0;                                                      // Return 0 to indicate that the program ended successfully
}
