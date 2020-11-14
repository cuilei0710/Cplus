/*
 * @Author: 崔小葵
 * @Date: 2020-11-14 16:40:11
 * @Last Modified by:   崔小葵
 * @Last Modified time: 2020-11-14 16:40:11
 */
#include <iostream>
#include <array>

using namespace std;

int main()
{
    const unsigned int SIZE = 10;
    array<double, SIZE> donation;
    unsigned int enter = 0;
    double total_value = 0.0;
    unsigned int large_avg = 0;
    double avg = 0.0;

    while (enter < 10 && (cin >> donation[enter]))
    {
        total_value += donation[enter];
        enter++;
    }
    avg = total_value / enter;
    for (unsigned i = 0; i < enter; i++)
    {
        if (donation[i] > avg)
        {
            large_avg++;
        }
    }
    cout << "The average value is " << avg << ", "
         << "and There are " << large_avg
         << " double value large than agerage value!" << endl;
    system("pause");
    return 0;
}