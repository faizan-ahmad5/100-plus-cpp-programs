// Write a C++ program that takes three float numbers as input and prints which number is the largest,
//  the second largest, and the smallest.

#include <iostream>
using namespace std;

int main()
{
    float num1, num2, num3;

    cout << "Enter first float number: ";
    cin >> num1;
    cout << "Enter the second float number: ";
    cin >> num2;
    cout << "Enter the third float number: ";
    cin >> num3;

    float largest, second_largest, smallest;

    if (num1 >= num2 && num1 >= num3)
    {
        largest = num1;
        if (num2 >= num3)
        {
            second_largest = num2;
            smallest = num3;
        }
        else
        {
            second_largest = num3;
            smallest = num2;
        }
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        largest = num2;
        if (num1 >= num3)
        {
            second_largest = num1;
            smallest = num3;
        }
        else
        {
            second_largest = num3;
            smallest = num1;
        }
    }
    else
    {
        largest = num3;
        if (num1 >= num2)
        {
            second_largest = num1;
            smallest = num2;
        }
        else
        {
            second_largest = num2;
            smallest = num1;
        }
    }

    cout << "The number " << largest << " is the largest number" << endl;
    cout << "The number " << second_largest << " is the second largest number" << endl;
    cout << "The number " << smallest << " is the smallest number";

    //     include<iostream>
    // #include <algorithm>
    //         using namespace std;

    //     int main()
    //     {
    //         float nums[3];
    //         cout << "Enter the first number :";
    //         cin >> nums[0];
    //         cout << "Enter hte seond number :";
    //         cin >> nums[1];
    //         cout << "Enter the third number :";
    //         cin >> nums[2];

    //         sort(nums, nums + 3);

    //         float smallest = nums[0];
    //         float second_largest = nums[1];
    //         float largest = nums[2];

    //         cout << "the largest is" << largest << endl;
    //         cout << "the second largest is" << second_largest << endl;
    //         cout << "the smallest " << smallest;
    return 0;
}
