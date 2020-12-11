/*
 * @Author: 崔小葵
 * @Date: 2020-12-06 09:06:48
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-12-06 09:21:05
 */
#include <iostream>

using namespace std;

template <typename T>
T Max_5(T an_array[]);

int main()
{
    int int_array[5] = {1, 2, 9, 5, 6};
    double double_array[5] = {10.5, 23.3, 89.2, 45.3, 12.2};

    cout << "int array\n";
    int_array[0] = Max_5<int>(int_array);
    cout << "Max num is " << int_array[0] << '\n' << "double array" << endl;
    double_array[0] = Max_5<double>(double_array);
    cout << "Max num is " << double_array[0] << endl;
    system("pause");
    return 0;
}

template <typename T>
T Max_5(T an_array[])
{
    T max = an_array[0];
    for (size_t i = 0; i < 5; i++)
    {
        if (an_array[i] > max)
        {
            max = an_array[i];
        }
    }
    return max;
}