// Write a C++ program to move all negative elements of an array of integers to the end of
// the array without changing the order of positive element and negative element.

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    // Take the array elements as input
    cout << "Enter the array elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int j = 0;

    // Traverse the array
    for (int i = 0; i < n; i++)
    {
        // If the current element is positive
        if (arr[i] > 0)
        {
            // Swap the current element with the element at index j
            swap(arr[i], arr[j]);
            // Increment j
            j++;
        }
    }

    // Print the modified array
    cout << "Modified array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
