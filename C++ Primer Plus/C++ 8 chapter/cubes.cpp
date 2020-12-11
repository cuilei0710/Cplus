/*
 * @Author: 崔小葵
 * @Date: 2020-11-27 23:52:14
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-11-27 23:58:20
 */
#include <iostream>

using namespace std;

double cube(double a);
double refcube(double &ra);

int main()
{
    double x = 3.0;

    cout << cube(x);
    cout << " = cube of " << x << endl;
    cout << refcube(x);
    cout << " = cube of " << x << endl;
    system("pause");
    return 0;
}

double cube(double a)
{
    a *= a * a;
    return a;
}

double refcube(double &ra)
{
    ra *= ra * ra;
    return ra;
}