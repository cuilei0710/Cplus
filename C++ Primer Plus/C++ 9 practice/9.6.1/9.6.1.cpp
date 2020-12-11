//Author: 崔小葵
//Date: 2020-12-11 17:59:09
//Last Modified by:   崔小葵
//Last Modified time: 2020-12-11 17:59:09
#include "9.6.1.h"
#include <cstring>
#include <iostream>

using namespace std;

void setgolf(golf &g, const char *name, int hc)
{
    strcpy(g.fullname, name);
    g.handicap = hc;
}
int setgolf(golf &g)
{
    cout << "Please enter the full name of golf player: ";
    cin.getline(g.fullname, Len);
    if (strcmp(g.fullname, "") == 0)
    {
        return 0;
    }
    cout << "Please enter the handicap of golf player: ";
    (cin >> g.handicap).get();
    return 1;
}
void handicap(golf &g, int hc)
{
    g.handicap = hc;
}
void showgolf(const golf &g)
{
    cout << "The fullname of golf player: " << g.fullname << endl;
    cout << "The handicap of golf player: " << g.handicap << endl;
}