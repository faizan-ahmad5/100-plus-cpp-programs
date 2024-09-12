// Write a C++ program to input angles of a triangle and check whether triangle is valid or not .

#include <iostream>
using namespace std;

int main()
{
    float angle1, angle2, angle3;

    cout << "Enter the first angle of the triangle: ";
    cin >> angle1;
    cout << "Enter the second angle of the triangle: ";
    cin >> angle2;
    cout << "Enter the third angle of the triangle: ";
    cin >> angle3;

    if (angle1 + angle2 + angle3 == 180)
    {
        cout << "The triangle is valid." << endl;
    }
    else
    {
        cout << "The triangle is not valid." << endl;
    }

    return 0;
}
