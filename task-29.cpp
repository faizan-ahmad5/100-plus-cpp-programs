/* Write a C++ program to calculate the distance between the two points. Note: x1, y1, x2, y2 are
all double values.*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double distance, x1, x2, y1, y2;
    cout << "Enter the value of (x1) :";
    cin >> x1;
    cout << "Enter the value of (x2) :";
    cin >> x2;
    cout << "Enter the value of (y1) :";
    cin >> y1;
    cout << "Enter the value of (y2) :";
    cin >> y2;
    distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    cout << "The distance between two points are : " << distance;
    return 0;
}