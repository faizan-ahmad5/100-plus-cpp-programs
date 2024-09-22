/*Write a C++ code that takes two numbers and displays the addition, subtraction, division,
multiplication, and square of given numbers, on the console window.*/

#include <iostream>
using namespace std;

int main()
{
    float num_1, num_2;
    cout << "Enter two numbers: \n ";
    cin >> num_1 >> num_2;
    cout << "The addition of num_1 and num_2 is = " << num_1 + num_2 << endl;
    cout << "The subtraction of num_1 and num_2 is = " << num_1 - num_2 << endl;
    cout << "The multiplication of num_1 and num_2 is = " << num_1 * num_2 << endl;
    cout << "The division of num_1 and num_2 is = " << num_1 / num_2 << endl;
    cout << "The square of num_1 is = " << num_1 * num_1 << endl;
    cout << "The square of num_2 is = " << num_2 * num_2;
    return 0;
}
