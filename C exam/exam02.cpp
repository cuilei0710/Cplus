#include <iostream>
using namespace std;
int count(int);
int main()
{
    int n;
    cin >> n;
    cout << count(2 * n) / (count(n + 1) * count(n)) << endl;
    system("pause");
}
int count(int n)
{
    int f[100];
    f[0] = 1;
    for (int i = 1; i <= n; i++)
        f[i] = f[i - 1] * i;
    return f[n];
    return 0;
}
