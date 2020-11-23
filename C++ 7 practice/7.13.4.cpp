/*
 * @Author: 崔小葵
 * @Date: 2020-11-22 23:23:43
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-11-22 23:24:36
 */
#include <iostream>

using namespace std;

long double probability(unsigned, unsigned);

int main()
{
    cout << "You have on chance in ";
    cout << probability(47, 5) * probability(21, 1);
    cout << "of warning.\n"
         << endl;
    system("pause");
    return 0;
}

long double probability(unsigned number, unsigned picks)
{
    long double result = 1.0;
    long double n = 0;
    unsigned p;
    for (n = number, p = picks; p > 0; n--, p--)
    {
        result = result * n / p;
    }
    return result;
}