/*
 * @Author: 崔小葵
 * @Date: 2020-12-09 22:57:08
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-12-09 23:09:14
 */
// twofile1.cpp -- variable with external and internal linkage
#include <iostream> // to be compiled with two file2.cpp

int tom = 3;            // external variable definition
int dick = 30;          // external variable defintion
static int harry = 300; // static, internal linkage

// function prototype
void remote_access();

int main()
{
    using namespace std;
    cout << "main(), reports the following addresses:\n";
    cout << &tom << " = &tom, " << &dick << " = &dick, ";
    cout << &harry << " = &harry\n";
    remote_access();
    system("pause");
    return 0;
}