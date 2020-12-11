#include <iostream>
#include <array>

const int ArSize = 100;

using namespace std;

int main()
{
    array<long double, ArSize + 1> factorials;
    factorials[0] = factorials[1] = 1.0;
    for (int i = 2; i <= ArSize; i++)
    {
        factorials[i] = i * factorials[i - 1];
    }
    for (int i = 0; i <= ArSize; i++)
    {
        cout << i << "! = " << factorials[i] << endl;
    }
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-11-8
//long double 相当于科学计数法，可以存储较大的数