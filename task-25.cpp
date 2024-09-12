// Write a program which asks for a number input from the keyboard. Add 34 to the number and
// then divide it by 2. Now, take modulus of that number with 4, then again add 4 to the number and
// then multiply the resultant value by 5. Display the result.

#include <iostream>
using namespace std;

int main()
{
    int num_1, add, divide, modulus, again_add, resultant_value;
    cout << "Enter a number :";
    cin >> num_1;
    add = num_1 + 34;
    divide = add / 2;
    modulus = divide % 4;
    again_add = modulus + 4;
    resultant_value = again_add * 5;
    cout << "The resultant value is = " << resultant_value;
    return 0;
}
