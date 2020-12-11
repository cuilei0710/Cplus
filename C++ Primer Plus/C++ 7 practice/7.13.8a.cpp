/*
 * @Author: 崔小葵
 * @Date: 2020-11-24 15:14:34
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-11-24 16:57:32
 */
#include <iostream>

using namespace std;

const int Seasons = 4;
const char *Snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"};

void Fill(double *);
void Show(double *);

int main()
{
    cout << "Situation a: " << endl;
    double pa[Seasons] = {0};
    Fill(pa);
    Show(pa);
    system("pause");
    return 0;
}

void Fill(double *pa)
{
    for (size_t i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> pa[i];
    }
}

void Show(double *pa)
{
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (size_t i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << pa[i] << endl;
        total += pa[i];
    }
    cout << "Total Expenses: $" << total << endl;
}
