/*
 * @Author: 崔小葵
 * @Date: 2020-11-14 16:12:08
 * @Last Modified by:   崔小葵
 * @Last Modified time: 2020-11-14 16:12:08
 */
#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    char ch = 0;
    while ((ch == cin.get()) != '@')
    {
        if (isdigit(ch))
        {
            continue;
        }
        else if (islower(ch))
        {
            cout << (char)toupper(ch);
        }
        else if (isupper(ch))
        {
            cout << (char)tolower(ch);
        }
    }
    cout << "Done!" << endl;
    system("pause");
    return 0;
}