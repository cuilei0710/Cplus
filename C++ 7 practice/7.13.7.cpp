/*
 * @Author: 崔小葵
 * @Date: 2020-11-23 21:21:43
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-11-23 21:22:24
 */
#include <iostream>

using namespace std;

int Fill_array(double *begin, double *end);
void Show_array(const double *begin, const double *end);

int main()
{
    double cl_Array[10];
    int size = Fill_array(cl_Array, cl_Array + 10);
    Show_array(cl_Array, cl_Array + size);
    system("pause");
    return 0;
}

int Fill_array(double *begin, double *end)
{
    double *pt = nullptr;
    int Array_Len = 0;
    cout << "Enter double members (non-digital to quit): " << endl;
    for (pt = begin; pt != end; pt++)
    {
        if (cin >> (*pt))
        {
            Array_Len++;
        }
        else
        {
            break;
        }
    }
    return Array_Len;
}

void Show_array(const double *begin, const double *end)
{
    const double *pt = nullptr;
    int Array_Len = 0;
    for (pt = begin; pt != end; pt++)
    {
        Array_Len++;
    }
    cout << "The double array is : " << endl;
    int i = 0;
    for (pt = begin; pt != end; pt++, i++)
    {
        cout << (*pt) << " ";
        if ((i + 1) % 5 == 0)
        {
            cout << endl;
        }
    }
    if (Array_Len % 5 != 0)
    {
        cout << endl;
    }
}