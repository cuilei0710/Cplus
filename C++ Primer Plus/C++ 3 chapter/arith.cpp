#include <iostream>

using namespace std;

int main()
{
    float hats, heads;

    cout.setf(ios_base::fixed, ios_base::floatfield); //fixed-point
    //ios_base::fixed是设置cout为定点输出格式
    //ios_base::floatfield是设置输出时按浮点格式，小数点后有6位
    cout << "Enter a number: ";
    cin >> hats;
    cout << "Enter another number: ";
    cin >> heads;

    cout << "hats = " << hats << "; heads = " << heads << endl;
    cout << "hats + heads = " << hats + heads << endl;
    cout << "hats - heads = " << hats - heads << endl;
    cout << "hats * heads = " << hats * heads << endl;
    cout << "hats / heads = " << hats / heads << endl;
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-10-18