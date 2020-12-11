#include <iostream>

using namespace std;

int main()
{
    cout << "\aOperation \"HyperHype\" is now activated!\n";
    cout << "Enter your agent code:________\b\b\b\b\b\b\b\b";
    long code;
    cin >> code;
    cout << "\aYou entered " << code << "...\n";
    cout << "\aCode verified! Proceed with Plan Z3!\n";
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-10-18
// "\a"这个字符表示振铃的意思,也可以用\007代换\a
// "\b"字符表示退格的意思