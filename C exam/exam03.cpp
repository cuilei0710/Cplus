#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, i, m = 0, s, max = 0, t, *a;
    cin >> n;
    a = new int[n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    for (i = 0; i < n; i++)
    {
        if (m != a[i])
            s = 1;
        else
            s++;
        m = a[i];
        if (s > max)
        {
            t = m;
            max = s;
        }
    }
    cout << t << endl;
    cout << max << endl;
    system("pause");
    return 0;
}