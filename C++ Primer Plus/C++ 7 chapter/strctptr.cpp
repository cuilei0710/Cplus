/*
 * @Author: 崔小葵
 * @Date: 2020-11-20 19:10:28
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-11-20 20:06:20
 */
#include <iostream>
#include <cmath>

using namespace std;

// structure templates
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
// prototypes
void rect_to_polar(const rect *pxy, polar *pda);
void show_polar(const polar *pda);

int main()
{
    rect r_place;
    polar p_place;
    cout << "Enter the x and y values: ";
    while (cin >> r_place.x >> r_place.y)
    {
        rect_to_polar(&r_place, &p_place); // pass addresses
        show_polar(&p_place);              // pass address
        cout << "Next two numbers (q to quit): ";
    }
    cout << "Done.\n";
    system("pause");
    return 0;
}

// show polar coordinates, converting angle to degrees
void show_polar(const polar *pda)
{
    const double Rad_to_deg = 57.29577951;

    cout << "distance = " << pda->distance;
    cout << ", angle = " << pda->angle * Rad_to_deg;
    cout << " degrees\n";
}

//convert rectangular to polar coordinates
void rect_to_polar(const rect *pxy, polar *pda)
{
    pda->distance =
        sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
    pda->angle = atan2(pxy->y, pxy->x);
}