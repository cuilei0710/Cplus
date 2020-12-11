#include <iostream>
using namespace std;
int MAX(int x, int y)
{
    int z;
    if (x < y)
        z = y;
    else
        z = x;
    return (z);
}
int main()
{
    int a, b;
    cout << "Please input two numbers: ";
    cin >> a >> b;
    cout << "Max=" << MAX(a, b) << endl;
    system("pause");
    return 0;
}
// Author: 崔磊
// Data: 2020-10-11