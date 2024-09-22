/*Write a C++ program that takes two complex number from user and add them. Print the resultant
complex number.*/

#include <iostream>
using namespace std;

int main()
{
    int real_num1, imag_num1, real_num2, imag_num2, result_real, result_imag;
    cout << "Enter the real part of complex number_1: ";
    cin >> real_num1;
    cout << "Enter the imaginary part of complex number_1: ";
    cin >> imag_num1;
    cout << "Enter the real part of complex number_2: ";
    cin >> real_num2;
    cout << "Enter the imaginary part of complex number_2: ";
    cin >> imag_num2;
    result_real = (real_num1 + real_num2);
    result_imag = (imag_num1 + imag_num2);
    cout << "The sum of the resultant complex numbers is: " << result_real << " + " << result_imag << "i" << endl;
    return 0;
}
