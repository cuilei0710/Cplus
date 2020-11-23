/*
 * @Author: 崔小葵
 * @Date: 2020-11-23 19:32:01
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-11-23 20:22:44
 */
#include <iostream>

using namespace std;

long long Recursive(int);

int main()
{
    unsigned int n;
    cout << "Please enter n: ";
    cin >> n;
    cout << n << "! = " << Recursive(n) << endl;
    system("pause");
    return 0;
}

long long Recursive(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * Recursive(n - 1);
    }
}
// No optimization is used here, regardless of code time and space efficiency.