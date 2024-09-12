// Write a C++ program that takes a character input from the user and checks if it is a vowel or consonant.
// Print "Vowel" if it is a vowel, otherwise print "Consonant".

#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char alphabet;

    cout << "Enter an alphabet: ";
    cin >> alphabet;

    // Convert the character to lowercase
    alphabet = tolower(alphabet);

    // Check if the character is a vowel
    if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u')
    {
        cout << "Vowel" << endl;
    }
    else
    {
        cout << "Consonant" << endl;
    }

    return 0;
}
