/*
 * @Author: 崔小葵
 * @Date: 2020-12-06 17:40:14
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-12-06 17:47:12
 */
#include <iostream>
#include <cstring>

using namespace std;

template <typename T>
T max_n(T an_array[], int array_len);
template <>
const char *max_n(const char *in_str[], int n);

int main()
{
    int int_array[6] = {1, 6, 9, 2, 4, 3};
    double double_array[4] = {12.5, 23.4, 75.1, 24.1};
    const char *str_array[5] = {"Hello lei!", "Hello world!", "Have a good day!", "Nice job!", "Try hard!"};
    int_array[0] = max_n<int>(int_array, 6);
    double_array[0] = max_n<double>(double_array, 4);
    str_array[0] = max_n(str_array, 5);
    cout << "Int array: Max = " << int_array[0] << "\n"
         << "Double array: Max = " << double_array[0] << "\n"
         << "Str array: Max = " << str_array[0] << endl;
    system("pause");
    return 0;
}

template <typename T>
T max_n(T an_array[], int array_len)
{
    T array_max = an_array[0];
    for (size_t i = 0; i < array_len; i++)
    {
        if (array_max < an_array[i])
        {
            array_max = an_array[i];
        }
    }
    return array_max;
}

template <>
const char *max_n(const char *in_str[], int n)
{
    const char *str = in_str[0];
    for (size_t i = 0; i < n; i++)
    {
        if (strlen(str) < strlen(in_str[i]))
        {
            str = in_str[i];
        }
    }
    return str;
}