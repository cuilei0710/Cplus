/*
 * @Author: 崔小葵
 * @Date: 2020-12-05 22:44:25
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-12-05 23:04:03
 */
#include <iostream>
#include <cstring> // for strlen(), strcpy()

using namespace std;

struct stringy
{
    char *str; // pointer to string
    int ct;    // length of string (not counting '\0')
};

// prototypes for set(), show(), and show() go here
int main()
{
    string benny;
    char testing[] = "Reality isn't what is used to be."

        set(benny, testing); // first argument is a reference
    // allocates space to hold copy of testing,
    // set str member of benny to point to the
    // new block, copies testing to new block
    // and sets ct member of benny
    show(benny);    // prints member string once
    show(benny, 2); // prints member string twice
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);    // prints testing string once
    show(testing, 3); // prints testing string thrice
    show("Done!");
    return 0;
}