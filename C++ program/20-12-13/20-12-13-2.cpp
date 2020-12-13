#include <iostream>

using namespace std;

class Time
{
private:
    int hour;
    int minute;
    int sec;

public:
    void set_time()
    {
        cout << "Please input hour, minute, second\n";
        cin >> hour >> minute >> sec;
    }
    void show_time()
    {
        cout << hour << " : " << minute << " : " << sec << endl;
    }
};

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
