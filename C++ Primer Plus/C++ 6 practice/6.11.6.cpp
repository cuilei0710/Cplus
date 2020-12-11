/*
 * @Author: 崔小葵
 * @Date: 2020-11-14 23:02:08
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-11-14 23:06:34
 */
#include <iostream>

using namespace std;

struct pat_info
{
    string name;
    double amount;
};

int main()
{
    unsigned int contributors = 0;
    unsigned int tmp = 0;

    cout << "Enter the number of contributors: ";
    (cin >> contributors).get();

    struct pat_info *p_contributors = new struct pat_info[contributors];

    for (size_t i = 0; i < contributors; i++)
    {
        cout << "Enter the name of " << i + 1 << "contributor: ";
        getline(cin, p_contributors[i].name);

        cout << "Enter the amount of donation: ";
        (cin >> p_contributors[i].amount).get();
    }
    cout << "Data input is completed!" << endl;
    system("cls");
    cout << "Grand Pators: " << endl;
    for (size_t i = 0; i < contributors; i++)
    {
        if (p_contributors[i].amount > 10000)
        {
            cout << "Contributor name: " << p_contributors[i].name << endl;
            cout << "Contributor amount: " << p_contributors[i].amount << endl;
            tmp++;
        }
    }
    if (tmp == 0)
    {
        cout << "none" << endl;
    }
    tmp = 0;
    cout << "Pators: " << endl;
    for (size_t i = 0; i < contributors; i++)
    {
        if (p_contributors[i].amount < 10000)
        {
            cout << "Contributor name: " << p_contributors[i].name << endl;
            cout << "Contributor amount: " << p_contributors[i].amount << endl;
            tmp++;
        }
    }
    if (tmp == 0)
    {
        cout << "none" << endl;
    }
    system("pause");
    return 0;
}