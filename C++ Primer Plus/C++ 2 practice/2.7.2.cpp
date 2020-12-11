#include <iostream>
using namespace std;
int tranfer(int);
int main()
{
    int longs;
    cout << "Enter the weight int long: ";
    cin >> longs;
    cout << longs << " long = " << tranfer(longs) << " pounds " << endl;
    system("pause");
    return 0;
}
int tranfer(int n)
{
    return n * 220;
}
// Author: 崔小葵
// Date: 2020-10-13