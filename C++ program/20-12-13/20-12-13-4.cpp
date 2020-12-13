#include <iostream>

using namespace std;

class Time
{
private:
    int hour;
    int minute;
    int sec;

public:
    Time()
    {
        hour = 0;
        minute = 0;
        sec = 0;
    }
    void set_time();
    void show_time();
};

void Time::set_time()
{
    cout << "Please input hour, minute, second\n";
    cin >> hour >> minute >> sec;
}

void Time::show_time()
{
    cout << hour << " : " << minute << " : " << sec << endl;
}

int main()
{
    Time t1;
    t1.set_time();
    t1.show_time();
    Time t2;
    t2.set_time();
    t2.show_time();
    system("pause");
    return 0;
}