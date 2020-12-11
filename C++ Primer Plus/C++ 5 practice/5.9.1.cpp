#include <iostream>

using namespace std;

int main()
{
    int m, n, sum = 0, temp = 0;
    cout << "Please input two numbers: ";
    cin >> m >> n;
    if (m > n)
    {
        temp = m;
        m = n;
        n = temp;
    }
    for (int i = m; i <= n; i++)
    {
        sum += i;
    }
    cout << "SUM between two nums are: " << sum << endl;
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-11-8