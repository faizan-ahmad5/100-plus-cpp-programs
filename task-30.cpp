/* Write a C++ program that checks the age of Fahad and Khurram and displays the appropriate
message using if statements only*/

#include <iostream>
using namespace std;

int main()
{
    int fahadAge, KhurramAge;
    fahadAge = 15;
    KhurramAge = 21;

    if (fahadAge >= 18)
    {
        cout << "Fahad is an adult" << endl;
    }
    if (fahadAge < 18)
    {
        cout << "Fahad is not an adult" << endl;
    }

    if (KhurramAge >= 18)
    {
        cout << "Khurram is an adult" << endl;
    }
    if (KhurramAge < 18)
    {
        cout << "Khurram is not an adult" << endl;
    }

    return 0;
}
