#include <iostream>
#include <new>

using namespace std;

typedef struct CandyBar
{
    string name;
    double weight;
    int calories;
} ST_CandyBar;

int main()
{
    ST_CandyBar *pd = new ST_CandyBar[3]{
        {"Mocha Munch", 2.3, 350},
        {"apple", 3.5, 400},
        {"cake", 3.0, 370}};

    for (int i = 0; i < 3; i++)
    {
        cout << "The information of CandyBar, Name, Weight, calories: " << pd[i].name << " / "
            << pd[i].weight << " / "
            << pd[i].calories
            << endl;
    }
    delete[] pd;
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-10-31
