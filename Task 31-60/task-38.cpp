/* Write a C++ program that take quiz marks, midterm marks and final term marks from user
and determine the student’s grade based on the following rules:
if the average mark is greater than and equal to 95, grade will be A+
if the average mark greater than and equal to 85 and less than 95, grade will be A
if the average mark greater than and equal to 75 and less than 85, grade will be B
if the average mark greater than and equal to 55 and less than 75, grade will be C
if the average mark less than 55, grade will be F */

#include <iostream>
using namespace std;

int main()
{
    int quizMarks, midMarks, finalMarks;

    cout << "Enter your quiz marks : ";
    cin >> quizMarks;
    cout << "Enter your midterm marks : ";
    cin >> midMarks;
    cout << "Enter your finalterm marks : ";
    cin >> finalMarks;
    int averageMarks = (quizMarks + midMarks + finalMarks) / 3;

    if (averageMarks >= 95)
    {
        cout << "Grade is A+";
    }
    else if (averageMarks >= 85 && averageMarks < 95)
    {
        cout << "Grade is A";
    }
    else if (averageMarks >= 75 && averageMarks < 85)
    {
        cout << "Grade is B";
    }
    else if (averageMarks >= 55 && averageMarks < 75)
    {
        cout << "Grade is C";
    }
    else
    {
        cout << "Grade is F";
    }

    return 0;
}
