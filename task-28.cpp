#include <iostream>
using namespace std;

int main()
{
    int numerator_1, denominator_1, numerator_2, denominator_2;
    cout << "Enter Numerator 1 :";
    cin >> numerator_1;
    cout << "Enter Denominator 1 :";
    cin >> denominator_1;
    cout << "Enter Numerator 2 :";
    cin >> numerator_2;
    cout << "Enter Denominator 2 :";
    cin >> denominator_2;
    cout << "Sum: " << (numerator_1 / denominator_1) + (numerator_2 / denominator_2) << endl;
    cout << "Difference: " << (numerator_1 / denominator_1) - (numerator_2 / denominator_2) << endl;
    cout << "Product: " << (numerator_1 / denominator_1) * (numerator_2 / denominator_2) << endl;
    cout << "Division: " << (numerator_1 / denominator_1) / (numerator_2 / denominator_2);
    return 0;
}
