// Write a C++ program that prints a 5x5 matrix filled with numbers from 1 to 25 using nested for loops.

#include <iostream>
using namespace std;

int main()
{
    // int num = 1;

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         cout << num << "\t";
    //         num++;
    //     }

    //     cout << endl;
    // }

    int array[5][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}};
    int i = 0;
    while (i < 5)
    {
        int j = 0;
        while (j < 5)
        {
            cout << array[i][j] << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
