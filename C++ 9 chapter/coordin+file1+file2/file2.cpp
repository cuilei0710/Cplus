/*
 * @Author: 崔小葵
 * @Date: 2020-12-08 19:05:14
 * @Last Modified by:   崔小葵
 * @Last Modified time: 2020-12-08 19:05:14
 */
// file2.cpp -- contains functions called in file1.cpp
#include <iostream>
#include <cmath>
#include "coordin.h" // structure templates, function prototypes

// convert rectangular to polar coordinates
polar rect_to_polar(rect xypos){
    using namespace std;
    polar answer;

    answer.distance =
        sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
        answer.angle = atan2(xypos.y, xypos.x);
        return answer; // return a polar structure
}

// show polar coordinates, converting angle to degrees
void show_polar(polar dapos){
    using namespace std;
    const double Rad_to_deg = 57.29577951;

    cout << "Distance = " << dapos.distance;
    cout << ", angle = " << dapos.angle * Rad_to_deg;
    cout << " degrees\n";
}