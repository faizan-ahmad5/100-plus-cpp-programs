// Read the entries of an array of 10 integers from a user.Compute x as the average of the 10 entries and then
// compute the average and display those entries that are greater than or equal to x.Print this final average.

#include <iostream>
using namespace std;

int main()
{
    int userInput[10];
    cout << "Enter 10 numbers:" << endl;

    // Read user input
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> userInput[i];
    }

    // Compute the average of the 10 entries
    int sumOfElements = 0;
    for (int i = 0; i < 10; i++)
    {
        sumOfElements += userInput[i];
    }
    double average = static_cast<double>(sumOfElements) / 10;

    cout << "Average of all entries: " << average << endl;

    // Find and compute the average of entries greater than or equal to the overall average
    int sumGreater = 0;
    int countGreater = 0;
    for (int i = 0; i < 10; i++)
    {
        if (userInput[i] >= average)
        {
            sumGreater += userInput[i];
            countGreater++;
            cout << "Number greater than or equal to average: " << userInput[i] << endl;
        }
    }

    if (countGreater > 0)
    {
        double finalAverage = static_cast<double>(sumGreater) / countGreater;
        cout << "Average of numbers greater than or equal to the overall average: " << finalAverage << endl;
    }
    else
    {
        cout << "No numbers are greater than or equal to the overall average." << endl;
    }

    return 0;
}
