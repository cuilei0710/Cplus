#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int s = 1;
    double n = 1, t = 1, pi = 0;
    while (fabs(t) > 1e-7)
    {
        pi += t;
        n += 2;
        s = -s;
        t = s / n;
    }
    pi = pi * 4;
    cout << "Pi = " << setiosflags(ios::fixed) << setprecision(6) << pi << endl;
    system("pause");
    return 0;
}