//Author: 崔小葵
//Date: 2020-12-23 23:38:28
//Last Modified by: 崔小葵
//Last Modified time: 2020-12-23 23:38:28
#include "golf.h"
#include <iostream>

Golf::Golf()
{
    char temp[LEN] = "";
    int hand = 0;
    cout << "Please enter the full name of golf palyer: ";
    cin.getline(temp, LEN);

    cout << "Please enter the handicap of golf player: ";
    cin >> hand;
    cin.get();

    *this = Golf(temp, hand);
}

Golf::Golf(const char *name, int hc)
{
    strncpy(fullname, name, LEN);
    handicap = hc;
}

void Golf::sethandicap(int hc)
{
    handicap = hc;
}

void Golf::showgolf()
{
    cout << "Golf full name: " << fullname << endl;
    cout << "Golf handicap: " << handicap << endl;
}
