#include <iostream>
#include <cstring>

using namespace std;

struct CandyBar
{
    string name;
    double weight;
    int calories;
};

int main()
{
    CandyBar sum[3] = {
        {"Mocha Munch", 2.3, 250},
        {"apple", 3.0, 150},
        {"cake", 2.5, 256}};
    for (int i = 0; i < 3; i++)
    {
        cout << "The information of " << i + 1 << " candybar, name, weight, calories: "
            << " " << sum[i].name
            << " " << sum[i].weight
            << " " << sum[i].calories
            << endl;
    }
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-10-31