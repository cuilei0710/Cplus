//Author: 崔小葵
//Date: 2020-12-19 01:19:03
//Last Modified by: 崔小葵
//Last Modified time: 2020-12-19 01:19:03
#include "person.h"
#include <cstring>
#include <iostream>
#include <string>

Person::Person(const string &ln, const char *fn)
{
    lname = ln;
    strncpy(fname, fn, LIMIT);
}

void Person::Show() const
{
    std::cout << fname << ", " << lname << std::endl;
}

void Person::FormaiShow() const
{
    std::cout << lname << ", " << fname << std::endl;
}