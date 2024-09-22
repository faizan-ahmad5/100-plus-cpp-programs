/* Make your CV that includes your Name, Father’s Name, CNIC, Qualification, Semester, CGPA
etc.? Print each line separately using “\n” and “endl”? Use comments also.*/

#include <iostream>
using namespace std;

int main()
{
    // A string variable contains a collection of characters surrounded by double quotes://
    string a, b, c, d, e, f;
    // int - stores integers(whole numbers), without decimals, such as 123 or -123 int g;//
    int g;
    a = "Faizan Ahmad Khan";
    b = "Saeed Ahmad Khan";
    c = "11112 - 335655 - 4";
    d = "Intermediate";
    e = "First Semester";
    g = 4;
    cout << "Name: "
         << a << endl
         << "Father's Name: "
         << b << endl
         << "CNIC: " << c
         << endl
         << "Qualification: " << d << endl
         << "Semester: " << e << endl
         << "GPA: " << g;

    return 0;
}