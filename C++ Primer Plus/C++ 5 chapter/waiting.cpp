#include <iostream>
#include <ctime> // describes clock() function, clock_t type

int main()
{
    using namespace std;
    cout << "Enter the delay time, in seconds: ";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC; // convert to clock ticks
    cout << "starting\a\n";
    clock_t start = clock();
    while (clock() - start < delay) // wait until time elapses
        ;
    cout << "done \a\n"
         << endl;
    system("pause");
    return 0;
}
// Author: 崔小葵
// Date: 2020-11-7