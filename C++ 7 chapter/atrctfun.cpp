/*
 * @Author: 崔小葵
 * @Date: 2020-11-18 21:02:55
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-11-18 21:15:43
 */
#include <iostream>
#include <cmath>

using namespace std;

// structure declarations
struct polar
{
    double distance; // distance from origin
    double angle;    // direction from origin
};
struct rect
{
    double x; // horizontal distance from origin
    double y; // vertical distance from origin
};

// prototype
polar rect_to_polar(rect xy_pos);
void show_polar(polar da_pos);

int main()
{
    rect r_place;
    polar p_place;

    cout << "Enter the x and y values: ";
    while (cin >> r_place.x >> r_place.y) // slick use of cin
    {
        p_place = rect_to_polar(r_place);
        show_polar(p_place);
        cout << "Next two numbers (q to quits): ";
    }
    cout << "Done.\n";
    system("pause");
    return 0;
}

// convert rectangular to polar coordinates
polar rect_to_polar(rect xy_pos)
{
    polar answer;
    answer.distance =
        sqrt(xy_pos.x * xy_pos.x + xy_pos.y * xy_pos.y);
    answer.angle = atan2(xy_pos.y, xy_pos.x);
    return answer; // returns a polar structure
}

// show polar coordinates, converting angle to degrees
void show_polar(polar da_pos)
{
    const double Rad_to_deg = 57.29577951;
    cout << "distance = " << da_pos.distance;
    cout << ", angle = " << da_pos.angle * Rad_to_deg;
    cout << " degrees\n";
}