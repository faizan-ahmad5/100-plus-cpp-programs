/*Calculate the average age of a class of five students. Prompt the user to enter the age of each
student.*/

#include <iostream>
using namespace std;

int main()
{
    int std_1, std_2, std_3, std_4, std_5, average;
    cout << "Enter the age of five  students : " << endl;
    cin >> std_1 >> std_2 >> std_3 >> std_4 >> std_5;
    average = (std_1 + std_2 + std_3 + std_4 + std_5) / 5;
    cout << "The average age of five students is = " << average;
    return 0;
}