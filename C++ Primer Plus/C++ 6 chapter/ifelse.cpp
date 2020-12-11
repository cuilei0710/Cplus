#include <iostream>

int main()
{
    char ch;

    std::cout << "Type, and I shall repeat.\n";
    std::cin.get(ch);
    while (ch != '.')
    {
        if (ch == '\n')
        {
            std::cout << ch; // done if newline
        }
        else
        {
            std::cout << ++ch; // done otherwise
        }
        std::cin.get(ch);
    }
    // try ch++ 1 instead of ++ch for interesting effect
    std::cout << "\nPlease excuse the slight confusion.\n";
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-11-10
//注意这一题中如果将 ++ch 改为 ch+1, 会强制将ASCII码转化为int类型