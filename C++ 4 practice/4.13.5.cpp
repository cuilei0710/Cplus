#include <iostream>

using namespace std;

typedef struct CandyBar
{
    string name;
    double weight;
    int calories;
} ST_CANDY;

int main()
{
    ST_CANDY candy = {"Mocha Munch", 2.3, 350};

    cout << "The information of candybar, name: " << candy.name << "\n"
         << "The information of candybar, weight: " << candy.weight << "\n"
         << "The information of candybar, calories: " << candy.calories << "\n"
         << endl;
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-10-31