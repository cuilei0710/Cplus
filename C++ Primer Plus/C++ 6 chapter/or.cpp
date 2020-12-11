#include <iostream>

int main()
{
    using namespace std;
    cout << "The program may reformat your hard disk\n"
         << "and destory all your data.\n"
         << "Do you wish to continue? <y/n> ";
    char ch;
    cin >> ch;
    if (ch == 'y' || ch == 'Y')
    {
        cout << "You were warned!\a\a\n";
    }
    else if (ch == 'n' || ch == 'N')
    {
        cout << "A wise choice .. bye\n";
    }
    else
    {
        cout << "That wasn't a y or n! Apparently you "
                "can't follow\ninstructions. so"
                "I'll trash your disk anyway.\a\a\a\n";
    }
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-11-10