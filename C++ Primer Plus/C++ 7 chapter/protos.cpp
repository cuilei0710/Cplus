/*
 * @Author: 崔小葵
 * @Date: 2020-11-15 09:21:47
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-11-15 09:35:24
 */
#include <iostream>

using namespace std;

void cheers(int );    // prototype: no return value
double cube(double ); // prototype:returns a double

int main()
{
    cheers(5); // function call
    cout << "Give me a number: ";
    double side;
    cin >> side;
    double volume = cube(side); // function call
    cout << "A " << side << "-foot cube has a volume of ";
    cout << volume << " cubic feet.\n";
    cheers(cube(2)); // prototype protection at work
    system("pause");
    return 0;
}

void cheers(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Cheers! ";
    }
    cout << endl;
}

double cube(double x)
{
    return (x * x * x);
}