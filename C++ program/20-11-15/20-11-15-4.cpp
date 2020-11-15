#include <iostream>

using namespace std;

int main()
{
    int a[10];
    for (int i = 0; i <= 9; i++)
    {
        a[i] = i;
    }
    for (int i = 0; i <= 9; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}