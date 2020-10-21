#include <iostream>

using namespace std;

int main()
{
    double fuel_eu, fuel_us;
    cout << "Enter the fuel comsuption in Europ standard: ";
    cin >> fuel_eu;
    fuel_us = fuel_eu / 19 * 12.41;
    cout << "the fuel comsuption in US standard is ";
    cout << fuel_us << "/100KM" << endl;
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-10-19