/*Write a C++ program that take an integer value and character from user and display the integer
and character on the console window*/

#include <iostream>
using namespace std;

int main()
{
    int num_1;
    char num_2;
    cout << "Enter the integer value :";
    cin >> num_1;
    cout << "Enter the character :";
    cin >> num_2;
    cout << "The integar and character is = " << num_1 << num_2;
    return 0;
}
