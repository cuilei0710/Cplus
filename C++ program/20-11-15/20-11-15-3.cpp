#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    int k = 1;
    double i = 1, t = 1, sum = 0;
    while (fabs(1.0 * k / i) > 1e-7)
    {
        sum += 1.0 * k / (2 * i - 1);
        k = k * (-1);
        i = i + 1;
    }
    sum = sum * 4;
    cout << "Pi = " << setiosflags(ios::fixed) << setprecision(6) << sum << endl;
    system("pause");
    return 0;
}