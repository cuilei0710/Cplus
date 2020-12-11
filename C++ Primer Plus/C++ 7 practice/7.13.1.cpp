/*
 * @Author: 崔小葵
 * @Date: 2020-11-22 08:40:51
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-11-22 08:51:51
 */
#include <iostream>

using namespace std;

double Harmonic_mean(double, double);

int main()
{
    double x, y;
    cout << "Please input two numbers(!0): ";
    cin >> x >> y;
    while (x != 0 && y != 0)
    {
        cout << x << " and " << y << " Harmonic mean is " << Harmonic_mean(x, y) << endl;
        cout << "Enter the next two numbers(!0): ";
        cin >> x >> y;
    }

    system("pause");
    return 0;
}

double Harmonic_mean(double x, double y)
{
    return 2.0 * x * y / (x + y);
}