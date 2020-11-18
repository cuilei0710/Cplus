/*
 * @Author: 崔小葵
 * @Date: 2020-11-18 20:44:51
 * @Last Modified by: 崔小葵
 * @Last Modified time: 2020-11-18 20:58:44
 */
#include <iostream>

using namespace std;

struct travel_time
{
    int hours;
    int mins;
};

const int Mins_per_hr = 60;

travel_time sum(travel_time t1, travel_time t2);
void show_time(travel_time t);

int main()
{
    travel_time day1 = {5, 45}; // 5 hrs, 45 min
    travel_time day2 = {4, 55}; // 4 hrs, 55 min

    travel_time trip = sum(day1, day2);
    cout << "Two-day total: ";
    show_time(trip);

    travel_time day3 = {4, 32};
    cout << "Three-day total: ";
    show_time(sum(trip, day3));

    system("pause");
    return 0;
}

void show_time(travel_time t)
{
    cout << t.hours << " hours, "
         << t.mins << " minutes\n";
}

travel_time sum(travel_time t1, travel_time t2)
{
    travel_time total;

    total.mins = (t1.mins + t2.mins) % Mins_per_hr;
    total.hours = t1.hours + t2.hours + (t1.mins + t2.mins) / Mins_per_hr;
    return total;
}