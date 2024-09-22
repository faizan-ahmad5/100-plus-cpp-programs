/*Write a program to calculate simple interest for a given P=4000, T=2, R=5.5.
Formula for simple interest: I = P*T*R/100*/

#include <iostream>
using namespace std;

int main()
{
    int P = 4000, T = 2;
    float R = 5.5, I;
    I = P * T * R / 100;
    cout << "The simple interest is = " << I;
    return 0;
}
