/*
 * @Author: 崔小葵
 * @Date: 2020-12-05 21:00:21
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-12-05 21:25:40
 */
#include <iostream>

using namespace std;

template <class T> // or template <typename T>
T lesser(T a, T b)
{
    return a < b ? a : b; // #1
}

int lesser(int a, int b)
{
    a = a < 0 ? -a : a;
    b = b > 0 ? b : -b;
    return a < b ? a : b;
}

int main()
{
    int m = 20;
    int n = -30;
    double x = 15.5;
    double y = 25.9;

    cout << lesser(m, n) << endl;      // use #2
    cout << lesser(x, y) << endl;      // use #1 with double
    cout << lesser<>(m, n) << endl;    // use #1 with int
    cout << lesser<>(x, y) << endl;
    cout << lesser<double>(m, n) << endl;
    cout << lesser<int>(x, y) << endl; // use #1 with int

    system("pause");
    return 0;
}