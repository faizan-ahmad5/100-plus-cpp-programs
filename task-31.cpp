/*Write a C++ program that checks the age of Fahad and Khurram and displays the appropriate
message using nested if statements only*/

#include <iostream>
using namespace std;

int main()
{
    int fahadAge, KhurramAge;
    fahadAge = 15;
    KhurramAge = 21;

    if (fahadAge > KhurramAge)
    {
        cout << "Fahad is older than Khurram." << endl;
        if (fahadAge >= 18)
        {
            cout << "Fahad is an adult." << endl;
        }
        if (fahadAge < 18)
        {
            cout << "Fahad is not an adult." << endl;
        }
    }

    if (KhurramAge > fahadAge)
    {
        cout << "Khurram is older than Fahad." << endl;
        if (KhurramAge >= 18)
        {
            cout << "Khurram is an adult." << endl;
        }
        if (KhurramAge < 18)
        {
            cout << "Khurram is not an adult." << endl;
        }
    }

    if (fahadAge == KhurramAge)
    {
        cout << "Fahad and Khurram are of the same age." << endl;
        if (fahadAge >= 18)
        {
            cout << "Both are adults." << endl;
        }
        if (fahadAge < 18)
        {
            cout << "Both are not adults." << endl;
        }
    }

    return 0;
}
