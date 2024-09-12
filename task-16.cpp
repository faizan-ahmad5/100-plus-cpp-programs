/*Write a C++ program to prompt the user to input 3 integer values and print these values in
forward and reversed order.*/

#include <iostream>
using namespace std;

int main()
{
    int num_1, num_2, num_3;
    cout << "Enter three integer values :" << endl;
    cin >> num_1 >> num_2 >> num_3;
    cout << "Values in forward order is : " << num_1 << " " << num_2 << " " << num_3 << endl;
    cout << "Values in reversed order is : " << num_3 << " " << num_2 << " " << num_1;
    return 0;
}
