/*
 * @Author: 崔小葵
 * @Date: 2020-11-18 19:41:05
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-11-18 20:04:59
 */
#include <iostream>

using namespace std;

unsigned int c_int_str(const char *str, char ch);

int main()
{
    char mmm[15] = "minmum"; // string in an array
    // some systems require preceding char with static to
    // enable array initialization

    const char * wail = "ululate"; // wail points to string

    unsigned int ms = c_int_str(mmm, 'm');
    unsigned int us = c_int_str(wail, 'u');
    cout << ms << " m characters in " << mmm << endl;
    cout << us << " u characters in " << wail << endl;
    system("pause");
    return 0;
}

// this function counts the numbers of ch characters
// in the string str
unsigned int c_int_str(const char *str, char ch)
{
    unsigned int count = 0;
    while (*str)
    {
        if (*str == ch)
        {
            count++;
        }
        str++; // move pointer to next char
    }
    return count;
}