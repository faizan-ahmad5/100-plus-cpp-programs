// Write a program to implement all conditions and display results.
// bool found = true;
// bool flag = false;
// int num = 1;
// double x = 3.4;
// int a = 5, b = 8;
// char ch = 'Z';

#include <iostream>
using namespace std;

int main()
{
    bool found = true;
    bool flag = false;
    int num = 1;
    double x = 3.4;
    int a = 5, b = 8;
    char ch = 'Z';

    if (found)
    {
        cout << "Found is true" << endl;
    }
    else
    {
        cout << "Found is false" << endl;
    }

    if (flag)
    {
        cout << "Flag is true" << endl;
    }
    else
    {
        cout << "Flag is false" << endl;
    }

    cout << "Num is: " << num << endl;
    cout << "X is: " << x << endl;
    cout << "A is: " << a << " and B is: " << b << endl;
    cout << "Character is: " << ch << endl;

    return 0;
}
