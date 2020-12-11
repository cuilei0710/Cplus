//Author: 崔小葵
//Date: 2020-12-11 20:36:50
//Last Modified by:   崔小葵
//Last Modified time: 2020-12-11 20:36:50
#include <cstring>
#include <iostream>
#include <string>
using namespace std;

void strcount(const string str);

int main()
{
    string input;

    cout << "Enter a line:\n";
    getline(cin, input);
    while (cin)
    {
        strcount(input);
        cout << "Enter next line (empty line to quit):\n";
        getline(cin, input);
        if (input == "")
        {
            break;
        }
    }
    cout << "Bye\n";
    system("pause");
    return 0;
}

void strcount(const string str)
{
    static int total = 0;
    int count = 0;
    cout << "\"" << str.c_str() << "\" contains ";
    while (str[count])
    {
        count++;
    }
    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";
}