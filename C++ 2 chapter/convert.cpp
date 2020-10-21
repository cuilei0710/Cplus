#include <iostream>
using namespace std;
int stonetolb(int);
int main()
{
    int stone;
    cout << "Enter the weight int stone: ";
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone << " stone = " << pounds << "pounds." << endl;
    system("pause");
    return 0;
}
int stonetolb(int sts)
{
    return 14 * sts;
}
// Author: 崔小葵
// Date: 2020-10-13
// 注解：一英石等于十四磅