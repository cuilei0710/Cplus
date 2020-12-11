#include <iostream>
using namespace std;
double convert(double);
int main()
{
    double dist;
    cout << "Enter the number of light years: ";
    cin >> dist;
    cout << dist << " light years = " << convert(dist) << " astronomical units." << endl;
    system("pause");
    return 0;
}
double convert(double n)
{
    return 63240 * n;
}
// Author: 崔小葵
// Date: 2020-10-13