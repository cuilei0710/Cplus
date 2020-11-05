#include <iostream>
#include <string> // string class
#include <cstring>

int main()
{
    using namespace std;
    string word = "?ate";
    for (char ch = 'a'; word != "mate"; ch++)
    {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "After loop ends, word is " << word << endl;
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-11-6