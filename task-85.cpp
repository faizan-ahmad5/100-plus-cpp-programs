
// 1
// 2   1
// 3   2   1
// 4   3   2   1
// 5   4   3   2   1
// 6   5   4   3   2   1

#include <iostream>
using namespace std;

int main()
{
    int userNum;
    cout << "Enter a number :";
    cin >> userNum;

    int i = 1;
    while (i <= userNum)
    {
        int j = i;
        while (j >= 1)
        {
            cout << j << " ";
            j--;
        }
        cout << endl;
        i++;
    }

    return 0;
}
