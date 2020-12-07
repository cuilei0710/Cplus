/*
 * @Author: 崔小葵
 * @Date: 2020-12-07 12:23:11
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-12-07 15:46:18
 */
#include <iostream>

using namespace std;

const int ArSize = 50;

template <typename T>
T SumArray(T *arr[], int);
template <typename T>
T SumArray(T[], int);

struct debts
{
    char name[ArSize];
    double amount;
};

int main()
{
    int sum_int = 0;
    double sum_double = 0;
    int thing[6] = {12, 13, 2, 5, 24};
    struct debts Debt_Arr[3] = {
        {"chu shi", 245.2},
        {"cui da da", 452.3},
        {"han pi", 75.3}};
    double *pi[3];
    for (size_t i = 0; i < 3; i++)
    {
        pi[i] = &Debt_Arr[i].amount;
    }
    sum_int = SumArray<int>(thing, 6);
    sum_double = SumArray<double>(pi, 3);
    cout << "Sum_int = " << sum_int << "\n"
         << "Sum_double = " << sum_double << endl;
    system("pause");
    return 0;
}

template <typename T>
T SumArray(T *arr[], int n)
{
    T sum = 0.0;
    for (size_t i = 0; i < n; i++)
    {
        sum += *arr[i];
    }
    return sum;
}

template <typename T>
T SumArray(T arr[], int n)
{
    T sum = 0;
    for (size_t i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}