#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        string sum = "";
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            sum += "*";
        }
        cout << sum << endl;
    }
    return 0;
}
