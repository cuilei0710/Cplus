/*
 * @Author: 崔小葵
 * @Date: 2020-11-14 23:54:25
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-11-15 00:03:44
 */
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

struct pat_info
{
    string name;
    double amount;
};

int main(){
    unsigned int contributors = 0;
    unsigned int tmp = 0;
    string FileName;
    ifstream infile;

    cout << "Enter the file name: ";
    getline(cin, FileName);
    infile.open(FileName.c_str());
    infile >> contributors;
    infile.get();

    struct pat_info *p_contributors = new struct pat_info[contributors];

    for (size_t i = 0; i < contributors; i++)
    {
        // cout << "Enter the name of " << i + 1 << "contributor: ";
        getline(infile, p_contributors[i].name);

        // cout << "Enter the amount of donation: ";
        (infile >> p_contributors[i].amount).get();
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