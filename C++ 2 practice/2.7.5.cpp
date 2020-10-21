#include <iostream>
using namespace std;
double convert(double);
int main()
{
    double degree;
    cout << "Please enter a Celsius value: ";
    cin >> degree;
    cout << degree << " degree Celsius is " << convert(degree) << " degree Fahrenheit." << endl;
    system("pause");
    return 0;
}
double convert(double n)
{
    return 1.8 * n + 20;
}
// Author: 崔小葵
// Date: 2020-10-13