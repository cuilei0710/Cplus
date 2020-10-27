#include <iostream>

#define MAX 30

using namespace std;

struct inflatable
{
    char name[MAX];
    float volume;
    double price;
};

int main()
{
    inflatable guests[2] = //initializing an array of structs
        {
            {"Bambi", 0.5, 21.99},     // first structure in array
            {"Godzilla", 2000, 565.99} // next structure in array
        };

    cout << "The guests " << guests[0].name << " and " << guests[1].name
         << "\nhave a combined volume of "
         << guests[0].volume + guests[1].volume << " cubic feet.\n";
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-10-27