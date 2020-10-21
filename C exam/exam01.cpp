#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int n, x, min;
    int s[10000];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> x >> s[i];
    sort(s, s + n);
    for (int i = 0; i < n; i++)
        min = min + abs(s[i] - s[n / 2]);
    cout << min << endl;
    system("pause");
    return 0;
}