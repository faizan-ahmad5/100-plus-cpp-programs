/*Write a C++ program that prompts the user to input three integer values and find the greatest
value of the three values.
(Hint: Use logical operator) */

#include <iostream>
using namespace std;

int main()
{
    int num_1, num_2, num_3;
    cout << "Enter the first integer :";
    cin >> num_1;
    cout << "Enter the second integer :";
    cin >> num_2;
    cout << "Enter the third integer :";
    cin >> num_3;

    if (num_1 > num_2 && num_1 > num_3)
    {
        cout << "First number is the greatest";
    }
    else if (num_2 > num_1 && num_2 > num_3)
    {
        cout << "Second number is the greatest";
    }
    else
    {
        cout << "Third number is the greatest";
    }

    return 0;
}