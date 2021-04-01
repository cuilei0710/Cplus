//Author: 崔小葵
//Date: 2021-02-25 18:20:58
//Last Modified by: 崔小葵
//Last Modified time: 2021-02-25 18:20:58
// My Time -- implementingTime methods
#include <iostream>
#include "mytime.h"

Time::Time(){
    hours = mintues = 0;
}

Time::Time(int  h, int m){
    hours = h;
    minutes = m;
}

void Time::AddHour(int h){
    hours += h;
}

void Time::AddMin(int m){
    mintues += m;
    hours += mintues / 60;
    mintues %= 60;
}

void Time::Reset(){
    hours = h;
    minutes = m;
}

Time Time::Sum