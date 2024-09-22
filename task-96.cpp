// Write a program to compare following strings with each other and display which string is smaller.
// string str1 = "Hello";
// string str2 = "Hi";
// string str3 = "Air";
// string str4 = "Bill";
// string str5 = "Big";

#include <iostream>
using namespace std;

int main()
{
    string str1 = "Hello";
    string str2 = "Hi";
    string str3 = "Air";
    string str4 = "Bill";
    string str5 = "Big";

    if (str1.length() < str2.length() && str1.length() < str3.length() && str1.length() < str4.length() && str1.length() < str5.length())
    {
        cout << "First string is samller that is : " << str1;
    }
    else if (str2.length() < str1.length() && str2.length() < str3.length() && str2.length() < str4.length() && str2.length() < str5.length())
    {
        cout << "Second string is samller that is: " << str2;
    }
    else if (str3.length() < str1.length() && str3.length() < str2.length() && str3.length() < str4.length() && str3.length() < str5.length())
    {
        cout << "Third string is smaller that is : " << str3;
    }
    else if (str4.length() < str1.length() && str4.length() < str2.length() && str4.length() < str3.length() && str4.length() < str5.length())
    {
        cout << "Fourth string is smaller that is : " << str4;
    }
    else
    {
        cout << "Fifth string is smaller which is : " << str5;
    }

    return 0;
}
