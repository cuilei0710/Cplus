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
    inflatable bouquet =
        {
            "sunflowers",
            0.20,
            12.49};
    inflatable choice;
    cout << "bouquet: " << bouquet.name << " for $";
    cout << bouquet.price << endl;

    choice = bouquet; // assign one structure to another
    cout << "choice: " << choice.name << " for $";
    cout << choice.price << endl;
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-10-26