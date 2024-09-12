// Write a function which calculates & returns area of the circle.Radius should be your
// function parameter.Take appropriate data types.

#include <iostream>
using namespace std;

float circleArea(float radius)
{

    float area = 3.14159 * radius * radius;
    return area;
}

int main()
{
    float radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    float area = circleArea(radius);

    cout << "The area of the circle with radius " << radius << " is: " << area << endl;

    return 0;
}
