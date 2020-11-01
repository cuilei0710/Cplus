#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c, x1, x2, m, n, e;
    cin >> a >> b >> c;
    m = -b / (2 * a);
    e = (b * b - 4 * a * c);
    if (e > 0) // b^2 - 4ac > 0
    {
        n = sqrt(e) / (2 * a);
        x1 = m + n;
        x2 = m - n;
        cout << "X1 = " << x1 << '\n'
             << "X2 = " << x2 << endl;
    }
    else // b^2 - 4ac < 0
    {
        e = -e;
        n = sqrt(e) / (2 * a);
        if (m == 0)
        {
            cout << "X1 = " << '+' << n << 'i' << "\n"
                 << "X2 = " << '-' << n << 'i' << endl;
        }
        else
        {
            cout << "X1 = " << m << '+' << n << 'i' << "\n"
                 << "X2 = " << m << '-' << n << 'i' << endl;
        }
    }
    system("pause");
    return 0;
}