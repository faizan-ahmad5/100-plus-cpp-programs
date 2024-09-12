// .Write a C++ program, take two strings as input from user and check
// if both strings are equal or not using ternary operator

#include <iostream>
using namespace std;

int main()
{
    string strFirst, strSecond;
    cout << "Enter first string :";
    getline(cin, strFirst);
    cout << "Enter second string :";
    getline(cin, strSecond);
    string equalStr = strFirst == strSecond ? "Both strings are equal" : "Both strings are not equal";
    cout << equalStr;
    return 0;
}