/*
 * @Author: 崔小葵
 * @Date: 2020-11-30 19:45:24
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-11-30 19:49:57
 */
#include <iostream>

unsigned long left(unsigned long num, unsigned ct);
char *left(const char *str, int n = 1);

int main()
{
    using namespace std;
    char *trip = "iphone!! ";     // test value
    unsigned long n = 12345678; // test value
    int i;
    char *temp;

    for (i = 1; i < 10; i++)
    {
        cout << left(n, i) << endl;
        temp = left(trip, i);
        cout << temp << endl;
        delete[] temp; // point to temporary stronger
    }
    system("pause");
    return 0;
}

// This function returns the first ct digits of the number num.
unsigned long left(unsigned long num, unsigned ct)
{
    unsigned digits = 1;
    unsigned long n = num;

    if (ct == 0 || num == 0)
    {
        return 0; // return 0 if no digits
    }
    while (n /= 10)
    {
        digits++;
    }
    if (digits > ct)
    {
        ct = digits - ct;
        while (ct--)
        {
            num /= 10;
        }
        return num;
    }
    else // if ct >= number of digits
    {
        return num; // return the whole number
    }
}

// This function returns a pointer to a new string
// consisting of the first n character in thr str string
char *left(const char *str, int n)
{
    if (n < 0)
    {
        n = 0;
    }
    char *p = new char[n + 1];
    int i;
    for (i = 0; i < n && str[i]; i++)
    {
        p[i] = str[i]; // copy characters
    }
    while (i <= n)
    {
        p[i++] = '\0'; // set rest of string to '\0'
    }
    return p;
}