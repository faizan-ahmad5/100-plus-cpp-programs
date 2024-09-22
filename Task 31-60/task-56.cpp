// Write a C++ program that takes the age of a person as input and categorizes them into
//  "Child"(age < 13), "Teenager"(13 <= age < 20), "Adult"(20 <= age < 60), and"Senior"(age >= 60).

#include <iostream>
using namespace std;

int main()
{
    int userAge;

    cout << "Enter your age :";
    cin >> userAge;

    if (userAge < 13)
    {
        cout << "Child";
    }
    else if (userAge >= 13 && userAge < 20)
    {
        cout << "Teenager";
    }
    else if (userAge >= 20 && userAge < 60)
    {
        cout << "Adult";
    }
    else if (userAge >= 60)
    {
        cout << "Senior";
    }

    return 0;
}