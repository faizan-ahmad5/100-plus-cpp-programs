// Write a C++ program that takes the scores of three subjects from the user and determines
// if the student has passed.A student passes if all three scores are greater than or equal to 50.

#include <iostream>
using namespace std;

int main()
{

    int subj_1, subj_2, subj_3;

    cout << "Enter the marks of subject 1 :";
    cin >> subj_1;
    cout << "Enter the marks of subject 2 :";
    cin >> subj_2;
    cout << "Enter the marks of subject 3 :";
    cin >> subj_3;

    if (subj_1 >= 50 && subj_2 >= 50 && subj_3 >= 50)
    {
        cout << "Passed";
    }
    else
    {
        cout << "Failed";
    }

    return 0;
}