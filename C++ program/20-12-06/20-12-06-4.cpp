#include <iostream>

using namespace std;

class Time
{
public:
    int hour;
    int minute;
    int sec;
};

void set_time(Time &);
void show_time(Time &);

int main()
{
    Time t1;
    set_time(t1);
    show_time(t1);
    Time t2;
    set_time(t2);
    show_time(t2);
    system("pause");
}

void set_time(Time &t)
{
    cout << "Please input hour, minute, second:\n";
    cin >> t.hour >> t.minute >> t.sec;
}

void show_time(Time &t)
{
    cout << t.hour << " : " << t.minute << " : " << t.sec << endl;
}