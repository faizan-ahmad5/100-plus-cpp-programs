// This program prompts the user to enter two strings, then displays the strings, their lengths, their concatenation, and specific characters from each string.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1, s2;
    cout << "Enter first string :" << s1;
    getline(cin, s1);
    cout << "Enter second string :" << s2;
    getline(cin, s2);
    cout << "The string s1 : " << s1 << endl;
    cout << "The string s2 : " << s2 << endl;
    cout << "The length of string s1 :" << s1.length() << endl;
    cout << "The length of string s2 :" << s2.length() << endl;
    cout << "s1 + s2 = " << s1 + " " + s2 << endl;
    cout << "Acess the index 2 in s1 = " << s1[2] << endl;
    cout << "Acess the index 6 in s2 = " << s2[6];
    return 0;
}