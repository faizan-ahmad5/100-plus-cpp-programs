// Write a C++ code to find the minimum and maximum distance between two numbers of an array.

#include <iostream>
#include <climits>
#include <cstdlib>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int num1 = 2;
    int num2 = 3;

    int minDistance = INT_MAX;
    int maxDistance = INT_MIN;
    int lastIndex1 = -1;
    int lastIndex2 = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num1)
        {
            lastIndex1 = i;
            if (lastIndex2 != -1)
            {
                int distance = abs(lastIndex1 - lastIndex2);
                if (distance < minDistance)
                {
                    minDistance = distance;
                }
                if (distance > maxDistance)
                {
                    maxDistance = distance;
                }
            }
        }
        if (arr[i] == num2)
        {
            lastIndex2 = i;
            if (lastIndex1 != -1)
            {
                int distance = abs(lastIndex2 - lastIndex1);
                if (distance < minDistance)
                {
                    minDistance = distance;
                }
                if (distance > maxDistance)
                {
                    maxDistance = distance;
                }
            }
        }
    }

    if (minDistance == INT_MAX)
    {
        cout << "No pair of " << num1 << " and " << num2 << " found in the array." << endl;
    }
    else
    {
        cout << "Minimum distance between " << num1 << " and " << num2 << ": " << minDistance << endl;
        cout << "Maximum distance between " << num1 << " and " << num2 << ": " << maxDistance << endl;
    }

    return 0;
}
