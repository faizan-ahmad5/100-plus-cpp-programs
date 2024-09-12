/*Take two integers as input from user apply athematic assignment operations on them and print
them on screen*/

#include <iostream>
using namespace std;

int main()
{
    int num_1, num_2;
    cout << "Enter First Numbers :";
    cin >> num_1;
    cout << "Enter Second Numbers :";
    cin >> num_2;
    num_1 = num_2;
    cout << "\"=\" operator , value of num_1 is = " << num_1 << endl;
    num_1 += num_2;
    cout << "\"+=\" operator ,value of num_1 is = " << num_1 << endl;
    num_1 -= num_2;
    cout << "\"-=\" operator , value of num_1 is = " << num_1 << endl;
    num_1 *= num_2;
    cout << "\"*=\" operator , value of num_1 is = " << num_1 << endl;
    num_1 /= num_2;
    cout << "\"/=\" operator , value of num_1 is = " << num_1 << endl;
    num_1 %= num_2;
    cout << "\"%=\" operator , value of num_1 is = " << num_1;
    return 0;
}
