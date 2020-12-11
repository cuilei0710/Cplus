/*
 * @Author: 崔小葵
 * @Date: 2020-11-25 21:29:02
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-11-25 22:25:13
 */
#include <iostream>

using namespace std;

double Add(double, double);
double Mul(double, double);
double Calculate(double, double, double (*)(double, double));

int main()
{
    double x = 0.0, y = 0.0;
    cout << "Enter two double number: ";
    while (cin >> x >> y)
    {
        cout << "Call add, the result of " << x << " and " << y << " is " << Calculate(x, y, Add) << endl;
        cout << "Call mul, the result of " << x << " and " << y << " is " << Calculate(x, y, Mul) << endl;
        cout << "Enter next two double number: ";
    }
    system("pause");
    return 0;
}

double Add(double x, double y)
{
    return x + y;
}

double Mul(double x, double y)
{
    return x * y;
}

double Calculate(double x, double y, double (*pstr)(double, double))
{
    return pstr(x, y);
}