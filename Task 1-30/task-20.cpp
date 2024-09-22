// Write a C++ program to swap two variables values with and without using third variables.

#include <iostream>
using namespace std;

int main()
{
    int var_1 = 10, var_2 = 5;
    var_1 = var_1 + var_2;
    var_2 = var_1 - var_2;
    var_1 = var_1 - var_2;

    cout << "The anser of swapping of var_1 is  = " << var_1 << ", var_2 is = " << var_2 << endl;

    return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     int var_1 = 10, var_2 = 5, var_3;
//     var_3 = var_2;
//     var_2 = var_1;
//     var_1 = var_3;
//     cout << "The  swapping of var_1 is = " << var_1 << ", var_2 is = " << var_2 << endl;
//     return 0;
// }
