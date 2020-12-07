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

void set(struct stringy &in_stringy, char *in_string)
{
    in_stringy.ct = strlen(in_string);
    in_stringy.str = new char[(in_stringy.ct) + 1];
    strcpy(in_stringy.str, in_string);
}

void show(const struct stringy &in_stringy, int print_times = 1)
{
    for (size_t i = 0; i < print_times; i++)
    {
        cout << "Member string of struct stringy: " << in_stringy.str << endl;
    }
}

void show(const char *str, int print_times = 1)
{
    for (size_t i = 0; i < print_times; i++)
    {
        cout << "Print char string: " << str << endl;
    }
}

// prototypes for set(), show(), and show() go here
int main()
{
    string bea_ny;
    char testing[] = "Reality isn't what is used to be.";

    set(bea_ny, testing);
    // first argument is a reference
    // allocates space to hold copy of testing,
    // set str member of benny to point to the
    // new block, copies testing to new block
    // and sets ct member of benny
    show(bea_ny);    // prints member string once
    show(bea_ny, 2); // prints member string twice
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);    // prints testing string once
    show(testing, 3); // prints testing string thrice
    show("Done!");
    system("pause");
    return 0;
}