/*
 * @Author: 崔小葵
 * @Date: 2020-11-16 10:45:22
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-11-16 11:14:17
 */
#include <iostream>

const int ArSize = 8;
int sum_arr(int arr[], int n);
// use std::instead of using direction

int main()
{
    int cookies[ArSize] = {1, 2, 4, 8, 16, 32, 64, 128};
    // some system require preceding int with static to
    // enable array initialization
    std::cout << cookies << " = array address, ";
    // some systems require a type cast: unsigned(cookies)

    std::cout << sizeof cookies << " = sizeof cookies\n";
    int sum = sum_arr(cookies, ArSize);
    std::cout << "Total cookies eaten: " << sum << std::endl;
    sum = sum_arr(cookies, 3); // a lie
    std::cout << "First three eaters ate " << sum << " cookies.\n";
    sum = sum_arr(cookies + 4, 4); // another lie
    std::cout << "Last four eaters ate " << sum << " cookies.\n";
    system("pause");
    return 0;
}
//return the sum of an interger array
int sum_arr(int arr[], int n)
{
    int total = 0;
    std::cout << arr << " = arr, ";
    // some systems require a type cast: unsigned (arr)

    std::cout << sizeof arr << " = sizeof arr\n";
    // ***An error will be reported here***,
    // because what we are measuring here is the size of the pointer,
    // and the length of the normal pointer is 4.
    for (int i = 0; i < n; i++)
    {
        total += arr[i];
    }
    return total;
}