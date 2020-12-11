/*
 * @Author: 崔小葵
 * @Date: 2020-11-21 18:53:45
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-11-21 19:20:33
 */
#include <iostream>
#include <string>
#include <array>

using namespace std;

// constant data
const int Seasons = 4;
const array<string, Seasons> Snames =
    {"Spring", "Summer", "Fall", "Winter"};

// function to modify array  object
void fill(array<double, Seasons> *pa);
// function that uses array object without modifying it
void show(array<double, Seasons> da);

int main()
{
    array<double, Seasons> expenses;
    fill(&expenses);
    show(expenses);
    system("pause");
    return 0;
}

void fill(array<double, Seasons> *pa)
{
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> (*pa)[i];
    }
}

void show(array<double, Seasons> da)
{
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << da[i] << endl;
        total += da[i];
    }
    cout << "Total Expenses: $" << total << endl;
}