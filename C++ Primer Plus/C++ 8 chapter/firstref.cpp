/*
 * @Author: 崔小葵
 * @Date: 2020-11-26 23:18:20
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-11-26 23:18:45
 */
#include <iostream>

using namespace std;

int main()
{
    int rats = 101;
    int &rodents = rats; // rodents is a reference;
    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;
    rodents++;
    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;

    // some implementations require type casting the following
    // addresses to type unsigned
    cout << "rate address = " << &rats;
    cout << ", rodents address = " << &rodents << endl;
    system("pause");
    return 0;
}