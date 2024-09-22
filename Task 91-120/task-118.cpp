// Write a program to find frequency of each digit in a given integer.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int userNum;

    cout << "Enter a number: ";
    cin >> userNum;

    string intToString = to_string(userNum);

    int freq0 = 0, freq1 = 0, freq2 = 0, freq3 = 0, freq4 = 0;
    int freq5 = 0, freq6 = 0, freq7 = 0, freq8 = 0, freq9 = 0;

    for (int i = 0; i < intToString.length(); i++)
    {
        char digit = intToString[i];

        switch (digit)
        {
        case '0':
            freq0++;
            break;
        case '1':
            freq1++;
            break;
        case '2':
            freq2++;
            break;
        case '3':
            freq3++;
            break;
        case '4':
            freq4++;
            break;
        case '5':
            freq5++;
            break;
        case '6':
            freq6++;
            break;
        case '7':
            freq7++;
            break;
        case '8':
            freq8++;
            break;
        case '9':
            freq9++;
            break;
        }
    }

    if (freq0 > 0)
        cout << "Digit 0: " << freq0 << endl;
    if (freq1 > 0)
        cout << "Digit 1: " << freq1 << endl;
    if (freq2 > 0)
        cout << "Digit 2: " << freq2 << endl;
    if (freq3 > 0)
        cout << "Digit 3: " << freq3 << endl;
    if (freq4 > 0)
        cout << "Digit 4: " << freq4 << endl;
    if (freq5 > 0)
        cout << "Digit 5: " << freq5 << endl;
    if (freq6 > 0)
        cout << "Digit 6: " << freq6 << endl;
    if (freq7 > 0)
        cout << "Digit 7: " << freq7 << endl;
    if (freq8 > 0)
        cout << "Digit 8: " << freq8 << endl;
    if (freq9 > 0)
        cout << "Digit 9: " << freq9 << endl;

    return 0;
}
