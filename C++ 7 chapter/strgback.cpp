/*
 * @Author: 崔小葵
 * @Date: 2020-11-18 20:10:19
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-11-18 20:22:49
 */
#include <iostream>

using namespace std;

char *buildstr(char c, int n); // prototype

int main()
{
    int times;
    char ch;

    cout << "Enter a character: ";
    cin >> ch;
    cout << "Enter an integer: ";
    cin >> times;
    char *ps = buildstr(ch, times);
    cout << ps << endl;
    delete[] ps;            // free memory
    ps = buildstr('+', 20); // reuse pointer
    cout << ps << "-DONE-" << ps << endl;
    delete[] ps; // free memory
    system("pause");
    return 0;
}

// builds string made of n c characters
char *buildstr(char c, int n)
{
    char *pstr = new char[n + 1];
    pstr[n] = '\0'; //terminate string
    while (n-- > 0)
    {
        pstr[n] = c; // fill rest of string
    }
    return pstr;
}