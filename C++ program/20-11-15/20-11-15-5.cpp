#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int f[20] = {1, 1};
    for (int i = 2; i < 20; i++)
    {
        f[i] = f[i - 2] + f[i - 1];
    }
    cout.setf(ios::right);
    for (int i = 0; i < 20; i++)
    {
        if (i % 5 == 0)
        {
            cout << endl;
        }
        cout << setw(8) << f[i];
    }
    cout << endl;
    system("pause");
    return 0;
}