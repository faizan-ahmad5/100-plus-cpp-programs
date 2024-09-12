/*Write a code in C++ that takes values of a and b from the user and displays result of polynomial
𝑎2 + 2𝑎𝑏 + 𝑏2*/

#include <iostream>
using namespace std;

int main()
{
    float a, b, polynomial;
    cout << "Enter value of a :";
    cin >> a;
    cout << "Enter value of b :";
    cin >> b;
    polynomial = a * a + 2 * a * b + b * b;
    cout << "The answer of polynomial is = " << polynomial;
    return 0;
}
