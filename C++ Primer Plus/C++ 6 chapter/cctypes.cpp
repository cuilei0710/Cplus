/*
 * @Author: 崔小葵
 * @Date: 2020-11-12 13:03:55
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-11-12 13:13:51
 */
#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    cout << "Enter text for analysis, and type @"
            "to terminate input.\n";
    char ch;
    int whitespace = 0;
    int digits = 0;
    int chars = 0;
    int punct = 0;
    int others = 0;

    cin.get(ch); // get first character
    while (ch != '@')
    {
        if (isalpha(ch)) // is it an alphabetic character?
        {
            chars++;
        }
        else if (isspace(ch))
        {
            whitespace++;
        }
        else if (isdigit(ch))
        {
            digits++;
        }
        else if (ispunct(ch))
        {
            punct++;
        }
        else
        {
            others++;
        }
        cin.get(ch);
    }
    cout << chars << " Letters, "
         << whitespace << " Whitespace, "
         << digits << " Digits, "
         << punct << " Punctuation, "
         << others << " Others." << endl;
    system("pause");
    return 0;
}