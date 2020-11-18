/*
 * @Author: 崔小葵
 * @Date: 2020-11-15 23:29:12
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-11-15 23:38:09
 */
#include <iostream>

using namespace std;

const int ArSize = 8;
int sum_arr(int arr[], int n); //prototype 可以用int * arr替换int arr[]

    int main()
{
    int cookies[ArSize] = {1, 2, 4, 8, 16, 32, 64, 128};
    // some system require preceding int with static to
    // enable array initialization

    int sum = sum_arr(cookies, ArSize);
    cout << "Total cookies eaten: " << sum << "\n";
    system("pause");
    return 0;
}

// return the sum of an integer array
int sum_arr(int arr[], int n)
{
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += arr[i];
    }
    return total;
}