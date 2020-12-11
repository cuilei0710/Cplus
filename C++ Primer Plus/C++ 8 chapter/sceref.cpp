/*
 * @Author: 崔小葵
 * @Date: 2020-11-27 23:23:59
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-11-27 23:32:08
 */
#include <iostream>

using namespace std;

int main()
{
    int rats = 101;
    int &rodents = rats; // rodents is a reference

    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;

    cout << "rats address = " << &rats;
    cout << ", rodents address = " << &rodents << endl;

    int bunnies = 50;
    rodents = bunnies; // can we change the reference?
    cout << "bunnies = " << bunnies;
    cout << ", rats = " << rats;
    cout << ", rodents = " << rodents << endl;

    cout << "bunnies address = " << &bunnies;
    cout << ", rodents address = " << &rodents << endl;

    system("pause");
    return 0;
}