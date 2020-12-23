//Author: 崔小葵
//Date: 2020-12-20 14:35:21
//Last Modified by: 崔小葵
//Last Modified time: 2020-12-20 14:35:21
#ifndef GOLF_H_
#define GOLF_H_

#include <cstring>
#include <iostream>
#include <string>

using namespace std;

class Golf
{
private:
    static const int LEN = 40;
    char fullname[LEN];
    int handicap;

public:
    Golf();
    Golf(const char *name, int hc);
    void sethandicap(int hc);
    void showgolf();
};

#endif