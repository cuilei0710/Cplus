/*
 * @Author: 崔小葵
 * @Date: 2020-12-09 23:03:27
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-12-09 23:09:09
 */
// twofile2.cpp -- variable with internal and external linkage
#include <iostream>

extern int tom;       // tom defined elsewhere
static int disk = 10; // overrides external disk
int harry = 200;      // external variable definition
// no conflict with twofile1 harry

void remote_access()
{
    using namespace std;
    cout << "remote_access() reports the following addresses:\n";
    cout << &tom << " = &tom, " << &disk << " = &disk, ";
    cout << &harry << " = &harry\n";
}