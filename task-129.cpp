// Take array of 10 numbers, now find smallest number in array and make it the greatest number in array and then print new array.
#include <iostream>
#include <limits>

using namespace std;

int main()
{
    int arr[10];
    int minIndex = 0, maxIndex = 0;

    // Take 10 numbers from the user
    cout << "Enter 10 numbers:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "Number " << (i + 1) << ": ";
        cin >> arr[i];
    }

    // Find the indices of the smallest and largest numbers
    for (int i = 1; i < 10; i++)
    {
        if (arr[i] < arr[minIndex])
        {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex])
        {
            maxIndex = i;
        }
    }

    // Replace the smallest number with the largest number
    int maxNumber = arr[maxIndex];
    arr[minIndex] = maxNumber;

    // Print the new array
    cout << "Modified array:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
