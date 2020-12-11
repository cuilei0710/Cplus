#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    char word[5] = "?ate";
    for (char ch = 'a'; strcmp(word, "mate"); ch++) // strcmp判断两个字符串是否相等
    {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "After loop ends, word is " << word << endl;
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-11-5