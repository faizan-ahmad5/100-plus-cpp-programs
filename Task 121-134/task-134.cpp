// Write a C++ program that initializes an array with the names of 30 students.The program should then iterate through the array and print each student's name along with their corresponding roll number (starting from 1).
// The output should be in the format: "Student name is [Name], roll no is [Roll Number]

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
