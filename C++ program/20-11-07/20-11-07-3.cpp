#include <iostream>

using namespace std;

int main()
{
    int i = 0, sum = 0;
    while (i <= 100)
    {
        sum += i;
        i++;
    }
    cout << "SUM = " << sum << endl; /*  */

    system("pause");
    return 0;
}