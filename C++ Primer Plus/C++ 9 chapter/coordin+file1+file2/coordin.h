/*
 * @Author: 崔小葵
 * @Date: 2020-12-08 18:29:29
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-12-08 18:35:34
 */
// coordin.h -- structure templates and function prototypes
// structure template
#ifndef COORDIN_H_
#define COORDIN_H_

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
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

#endif