// Take 10 numbers from user, now display most occurring element and also its number of occurrence.

#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int maxCount = 0;
    int mostOccurringElement = arr[0];
    bool multipleMax = false;

    // Take 10 numbers from the user
    cout << "Enter 10 numbers:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "Number " << (i + 1) << ": ";
        cin >> arr[i];
    }

    // Find the most occurring element
    for (int i = 0; i < 10; i++)
    {
        int count = 0;
        for (int j = 0; j < 10; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > maxCount)
        {
            maxCount = count;
            mostOccurringElement = arr[i];
            multipleMax = false;
        }
        else if (count == maxCount && arr[i] != mostOccurringElement)
        {
            multipleMax = true;
        }
    }

    if (multipleMax)
    {
        cout << "Multiple elements have the maximum occurrence of " << maxCount << "." << endl;
    }
    else
    {
        // Print the most occurring element and its count
        cout << "Most occurring element: " << mostOccurringElement << endl;
        cout << "Number of occurrences: " << maxCount << endl;
    }

    return 0;
}
