/*
 * @Author: 崔小葵
 * @Date: 2020-11-23 19:54:12
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-11-23 21:02:33
 */
#include <iostream>

using namespace std;

unsigned int Fill_array(double cl_array[], unsigned int Array_Len);
void Show_array(double cl_array[], unsigned int Array_Len);
void Reverse_array(double cl_array[], unsigned int Array_Len);

int main()
{
    double cl_array[10];
    unsigned int cl_len;
    cl_len = Fill_array(cl_array, 10);
    Show_array(cl_array, cl_len);
    Reverse_array(cl_array, cl_len);
    Show_array(cl_array, cl_len);
    system("pause");
    return 0;
}

unsigned int Fill_array(double cl_array[], unsigned int Array_Len)
{
    unsigned int cl_length = 0;
    cout << "Enter double members (non-digital to quit): " << endl;
    for (int i = 0; i < Array_Len; i++)
    {
        if (cin >> cl_array[i])
        {
            cl_length++;
        }
        else
        {
            break;
        }
    }
    return cl_length;
}

void Show_array(double cl_array[], unsigned int Array_Len)
{
    cout << "The double array is : " << endl;
    for (size_t i = 0; i < Array_Len; i++)
    {
        cout << cl_array[i] << " ";
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

void Reverse_array(double cl_array[], unsigned int Array_Len)
{
    cout << "Revert the array" << endl;
    for (size_t i = 0; i < Array_Len / 2; i++)
    {
        double tmp = cl_array[i];
        cl_array[i] = cl_array[Array_Len - i - 1];
        cl_array[Array_Len - i - 1] = tmp;
    }
}