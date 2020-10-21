#include <iostream>

using namespace std;

int main()
{
    float a = 2.34E+22f;
    float b = a + 1.0f;

    cout << "a = " << a << endl;
    cout << "b - a = " << b - a << endl;
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-10-18
// 该程序将数字加1，然后减去原来的数字。
// 注意这里的float类型只能表示数字中的前6位或者前7位