//Author: 崔小葵
//Date: 2020-12-11 17:58:57
//Last Modified by:   崔小葵
//Last Modified time: 2020-12-11 17:58:57
// golf.h -- for pe9.1.cpp
const int Len = 40;
struct golf
{
    char fullname[Len];
    int handicap;
};

// non-interactive version:
// function sets golf structure to provided name, handicap
// using value passed as arguments to the function
void setgolf(golf &g, const char *name, int hc);

// interactive version:
// function solicits name and handicap from user
// and sets the members of g to the value entered
// return 1 if name is entered, 0 if name is empty string
int setgolf(golf &g);
// function resets handicap to new value
void handicap(golf &g, int hc);

// function displays contents of golf structure
void showgolf(const golf &g);