// Simple Menu : Write a C++ program that displays a menu to the user in a while loop.Allow the user to
// choose options and use the break statement to exit the menu when they select the option to quit

#include <iostream>  // Include the input-output stream library
using namespace std; // Use the standard namespace

int main() // Main function
{
    int faizanAhmad; // Variable to store user's menu choice

    while (true) // Infinite loop to keep showing the menu until the user chooses to quit
    {
        // Display the menu options
        cout << "Menu:" << endl;
        cout << "1. Option 1: View Balance" << endl;
        cout << "2. Option 2: Deposit Funds" << endl;
        cout << "3. Option 3: Withdraw Funds" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> faizanAhmad; // Read user's choice

        // Handle user input
        switch (faizanAhmad) // Switch statement to handle different choices
        {
        case 1: // If user chooses option 1
            cout << "You choose Option 1: View Balance." << endl;
            break; // Break the switch statement
        case 2:    // If user chooses option 2
            cout << "You choose Option 2: Deposit Funds." << endl;
            break; // Break the switch statement
        case 3:    // If user chooses option 3
            cout << "You choose Option 3: Withdraw Funds." << endl;
            break; // Break the switch statement
        case 4:    // If user chooses to quit
            cout << "Quitting the menu." << endl;
            break; // Break the switch statement
        default:   // If user enters an invalid choice
            cout << "Invalid choice. Please try again." << endl;
        }

        // Break the loop if the user chooses to quit
        if (faizanAhmad == 4) // Check if the choice is 4 (Quit)
        {
            break; // Break the infinite loop
        }

        cout << endl; // Print a newline for better readability
    }

    return 0; // Return 0 to indicate successful execution
}
