/* Write a C++program to enter a string s1 and copy it to another string s2*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1, s2;
    cout << "Enter value of string(s1) :";
    getline(cin, s1);
    s2 = s1;
    cout << "The value of string(s2) is =" << s2;
    return 0;
}