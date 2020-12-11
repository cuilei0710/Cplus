#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char ch;
    int spaces = 0;
    int total = 0;
    cin.get(ch);
    while (ch != '.')
    {
        if (ch == ' ')
        {
            ++spaces;
        }
        ++total;
        cin.get(ch);
    }
    cout << spaces << " spaces, " << total;
    cout << " characters total in sentence\n";
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-11-10