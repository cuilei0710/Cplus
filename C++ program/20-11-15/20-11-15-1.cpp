#include <iostream>

using namespace std;

int main()
{
    int i = 0, sum = 0;
    do
    {
        sum += i;
        i++;
    } while (i <= 100);
    cout << "Sum = " << sum << endl;
    system("pause");
    return 0;
}