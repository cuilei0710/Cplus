/*
 * @Author: 崔小葵
 * @Date: 2020-12-08 18:46:39
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-12-08 18:54:38
 */
// file1.cpp -- example of a three-file program
#include <iostream>
#include "coordin.h" // struct template, function prototypes

using namespace std;

int main()
{
    rect r_place;
    polar p_place;

    cout << "Enter the x and y values: ";
    while (cin >> r_place.x >> r_place.y)
    {
        p_place = rect_to_polar(r_place);
        show_polar(p_place);
        cout << "Next two numbers(q to quit): ";
    }
    cout << "Bye:\n";
    system("pause");
    return 0;
}