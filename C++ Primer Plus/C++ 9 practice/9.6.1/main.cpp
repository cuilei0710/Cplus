//Author: 崔小葵
//Date: 2020-12-11 18:55:06
//Last Modified by:   崔小葵
//Last Modified time: 2020-12-11 18:55:06
#include "9.6.1.h"
#include <iostream>

using namespace std;

const int ArSize = 10;

int main()
{
    golf Golf_plyer[ArSize];
    int n = 0;
    cout << "Please enter the information of golf players:" << endl;
    while ((n < 10) && setgolf(Golf_plyer[n]))
    {
        n++;
        cout << "Please enter the next golf palyer:" << endl;
    }
    system("cls");
    for (size_t i = 0; i < n; i++)
    {
        showgolf(Golf_plyer[i]);
    }
    system("pause");
    return 0;
}