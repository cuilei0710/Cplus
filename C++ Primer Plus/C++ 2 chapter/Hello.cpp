#include <iostream>
using namespace std;
int main()
{
    cout << "Hello! nice to meet you" << endl;
    cout << "nice to meet you too!" << endl;
    cout << "Hello! nice to meet you" << endl
         << "nice to meet you too!" << endl;
    cout << "Hello! nice to meet you\nnice to meet you too!" << endl;
    system("pause");
    return 0;
}
// Author: 崔磊
// data:2020-10-11
// 注解1：第一个是通过分成两行来完成的
// 注解2：是通过endl(end of line)
// 注解3：是通过换行符号\n实现的