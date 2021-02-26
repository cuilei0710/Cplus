//Author: 崔小葵
//Date: 2021-02-25 18:11:15
//Last Modified by: 崔小葵
//Last Modified time: 2021-02-25 18:11:15
// My time -- Time class before operator overloading
#ifndef MYTIME0_H_
#define MYTIME0_H_
class Time
{
private:
    int hours;
    int mintues;

public:
    Time();
    Time(int h, int m = 0);
    void AddMin(int m);
    void AddHour(int h);
    void Reset(int h = 0, int m = 0);
    Time Sum(const Time &t) const;
    void Show() const;
};

#endif