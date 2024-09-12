// Write a program that takes, as input from the user, the radius of a sphere, and outputs :
// • The diameter of the sphere
// • The surface area of the sphere
// // • The volume of the sphere

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float radius, diameter, area, volume;
    const float pi = 3.14159;
    cout << "Enter the value of radius :";
    cin >> radius;
    diameter = 2 * radius;
    area = 4 * pi * radius * radius;
    volume = 4 / 3.0 * pi * pow(radius, 3);
    cout << "The diameter of the sphere is :" << diameter << endl;
    cout << "The Surface Area of the sphere is: " << area << endl;
    cout << " The Volume of the sphere is: " << volume << endl;
    return 0;
}
