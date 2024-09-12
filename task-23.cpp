// Write a C++ program to find quotient and remainder of two integers, by taking input from the user.

#include <iostream>
using namespace std;

int main()
{
    int num_1, num_2, quotient, remainder;
    cout << "Enter the first integer: ";
    cin >> num_1;
    cout << "Enter the second integer: ";
    cin >> num_2;
    quotient = num_1 / num_2;
    remainder = num_1 % num_2;
    cout << "The quotient of num_1 and num_2 is = " << quotient << endl;
    cout << "The remainder of num_1 and num_2 is = " << remainder;

    return 0;
}
