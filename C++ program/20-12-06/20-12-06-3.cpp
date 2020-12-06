#include <iostream>

using namespace std;

struct Time
{
    int hour;
    int minute;
    int sec;
};

int main()
{
    Time t1, t2;
    cout << "Please input t1 hour, minute, second\n";
    cin >> t1.hour >> t1.minute >> t1.sec;
    cout << t1.hour << " : " << t1.minute << " : " << t1.sec << endl;
    cout << "Please input t2 hour, minute, second\n";
    cin >> t2.hour >> t2.minute >> t2.sec;
    cout << t2.hour << " : " << t2.minute << " : " << t2.sec << endl;
    system("pause");
    return 0;
}