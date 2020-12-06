#include <iostream>

using namespace std;

class Time
{
public:
    int hour;
    int minute;
    int sec;
};

int main(){
    Time t1;
    cout << "Please input hour, minute, second\n";
    cin >> t1.hour >> t1.minute >> t1.sec;
    cout << t1.hour << ": " << t1.minute << " : " << t1.sec << endl;
    system("pause");
    return 0;
}