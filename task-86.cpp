#include <iostream>
#include <limits> //for handling input validation(checking)
using namespace std;

float sum(float num1, float num2)
{
    return num1 + num2;
}

float subtract(float num1, float num2)
{
    return num1 - num2;
}

float multiply(float num1, float num2)
{
    return num1 * num2;
}

float divide(float num1, float num2)
{
    if (num2 != 0)
        return num1 / num2;
}

int main()
{
    int userWant;
    char userResponse;

    do
    {

        float userNum1, userNum2;

        while (true)
        {
            cout << "Select an option" << endl;
            cout << "1. Sum two numbers" << endl;
            cout << "2. Subtract two numbers" << endl;
            cout << "3. Multiply two numbers" << endl;
            cout << "4. Divide two numbers" << endl;

            cin >> userWant;
            // This could happen if the user enters non - numeric characters when a number is expected.
            if (cin.fail() || userWant < 1 || userWant > 4)
            {
                // Clear the error state
                cin.clear();
                // Ignores any characters left in the input buffer, which helps to prevent an infinite loop caused by
                // continuously processing invalid input.
                cin.ignore();
                cout << "Invalid input. Please enter a number from 1 to 4." << endl;
            }
            else
            {
                break;
            }
        }

        while (true)
        {
            cout << "Enter the first number: " << endl;
            cin >> userNum1;

            if (cin.fail())
            {
                cin.clear();
                cin.ignore();
                cout << "Invalid input. Please enter a valid number." << endl;
            }
            else
            {
                break;
            }
        }

        while (true)
        {
            cout << "Enter the second number: " << endl;
            cin >> userNum2;

            if (cin.fail())
            {
                cin.clear();
                cin.ignore();
                cout << "Invalid input. Please enter a valid number." << endl;
            }
            else
            {
                break;
            }
        }

        if (userWant == 1)
        {
            cout << "The sum of two numbers is = " << sum(userNum1, userNum2) << endl;
        }
        else if (userWant == 2)
        {
            cout << "The subtraction of two numbers is = " << subtract(userNum1, userNum2) << endl;
        }
        else if (userWant == 3)
        {
            cout << "The multiplication of two numbers is = " << multiply(userNum1, userNum2) << endl;
        }
        else if (userWant == 4)
        {
            if (userNum2 != 0)
            {
                cout << "The division of two numbers is = " << divide(userNum1, userNum2) << endl;
            }
            else
            {
                cout << "Error: Division by zero is not possible" << endl;
            }
        }

        cout << "Do you want to continue (y/n): ";
        cin >> userResponse;

    } while (userResponse == 'y' || userResponse == 'Y');

    return 0;
}
