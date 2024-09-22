// Write a program to convert Binary to Decimal number system.

#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    string binaryString;

    cout << "Enter a binary number: ";
    cin >> binaryString;

    // Convert binary string to decimal using bitset
    unsigned long decimalNumber = bitset<64>(binaryString).to_ulong();

    cout << "Decimal equivalent: " << decimalNumber << endl;

    return 0;
}
