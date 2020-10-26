#include <iostream>

#define MAX 30

using namespace std;

struct inflatable // structure declaraction
{
    char name[MAX];
    float volume;
    double price;
};

int main()
{
    inflatable guest =
        {
            "Glorious Gloria", // name value
            1.88,              // volume value
            29.99              // price value
        };                     // guest is a structure variable of type inflatable
    // It's initialized to the indicated values
    inflatable pal =
        {
            "Audacious Arthur",
            3.12,
            32.99
        }; // pal is a second variable of type inflatable
    //same as **inflatable pal = {"Audacious Arthur", 3.12, 32.99};**
    // NOTE: some implementions require using
    // static inflatable guest =

    cout << "Expand your guest list with " << guest.name;
    cout << " and " << pal.name << "!\n";
    // pal.name is the name member of the pal variable
    cout << "You can have both for $";
    cout << guest.price + pal.price << "!\n";
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-10-26