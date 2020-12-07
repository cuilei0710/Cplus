#include <iostream>

using namespace std;

class Time
{
public:
    int hour;
    int minute;
    int sec;
};

void set_time(Time &, int hour = 0, int minute = 0, int sec = 0);
void show_time(Time &);

int main()
{
    Time t1, t2;
    set_time(t1, 12, 23, 34);
    show_time(t1);
    set_time(t2, 13, 13, 13);
    show_time(t2);
    system("pause");
    return 0;
}

void set_time(Time &t, int hour, int minute, int sec)
{
    t.hour = hour;
    t.minute = minute;
    t.sec = sec;
}

void show_time(Time &t)
{
    cout << t.hour << " : " << t.minute << " : " << t.sec << endl;
}