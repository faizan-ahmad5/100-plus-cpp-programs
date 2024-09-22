#include <iostream>
#include <string>
using namespace std;

int main()
{
    string studentNames[30] = {
        "Ahmed", "Ali", "Omar", "Hassan", "Hussain", "Yusuf", "Ibrahim", "Bilal",
        "Rashid", "Jamal", "Ishaq", "Hadi", "Musa", "Aly", "Sami", "Rami",
        "Zaid", "Farhan", "Nabil", "Rami", "Osman", "Amin", "Mustafa", "Saad",
        "Tariq", "Khalid", "Hassan", "Ilyas", "Nazir", "Yasir"};

    for (int i = 0; i < 30; i++)
    {
        cout << "Student name is " << studentNames[i] << ", roll no is " << (i + 1) << endl;
    }

    return 0;
}
