/*Write a C++ program to find the size of int, short int, float, double, bool and char. To find the
size of variable, sizeof operator is used*/

#include <iostream>
using namespace std;

int main()
{
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of short int: " << sizeof(short int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of bool: " << sizeof(bool) << " bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " bytes" << endl;
    return 0;
}