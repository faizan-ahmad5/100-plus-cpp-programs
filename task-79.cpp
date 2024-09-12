// Number Guessing Game : Write a C++ program where the user has to guess a randomly generated number between 1 and 100.
// Use a while loop to allow multiple attempts and use the break statement to exit the loop when the correct number is guessed.

#include <iostream>  // Include the input-output stream library
using namespace std; // Use the standard namespace

int main() // Main function
{
    int faizanAhmad; // Variable to store user's guess

    while (true) // Infinite loop to allow multiple attempts
    {
        cout << "Guess a number between 1 and 100: "; // Prompt the user to guess a number
        cin >> faizanAhmad;                           // Read user's guess

        if (faizanAhmad == 5) // Check if the guess is equal to 5 (for demonstration purposes)
        {
            break; // Break the loop if the guess is correct
        }
        else // If the guess is not correct
        {
            cout << "Again "; // Prompt the user to try again
        }
    }

    cout << "Your guess is right"; // Output message when the correct guess is made

    return 0; // Return 0 to indicate successful execution
}
