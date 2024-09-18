/*Write a C++ program, take two strings as input from user and check if both strings are equal
or not. */

#include <iostream>
using namespace std;

int main()
{
    string str_1, str_2;
    cout << "Enter the first string :";
    getline(cin, str_1);
    cout << "Enter the second string :";
    getline(cin, str_2);

    if (str_1 == str_2)
    {
        cout << "Both the strings are equal ";
    }
    else
    {
        cout << "Both the string are not equal";
    }

    return 0;
}
