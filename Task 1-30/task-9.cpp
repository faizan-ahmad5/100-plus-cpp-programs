/*Write a code in C++ that takes radius of a circle as input from user and outputs the circumference
and area. The output should be clear and readable. Add proper comments to the code. You can set
the value of π up to 3 decimal places.
*/

#include <iostream> // Include the iostream library for cout and cin S
using namespace std;

int main()
{
    float rad, circumference, area; // variable declaration
    const float pi = 3.141;         // variable decalaration and initilization
    cout << "Enter the value of radius : " << endl;
    cin >> rad;
    circumference = 2 * pi * rad; // Formula for the circumference of circle
    area = pi * rad * rad;        // Formula for the area of circle
    cout << "The circumference of circle is = " << circumference << endl;
    cout << "The area of circle is = " << area;
    return 0;
}