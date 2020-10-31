#include <iostream>
#include <array>

using namespace std;

#define num_max 3

int main()
{
    void run_test();
    run_test();
    while (cin.get())
        ;
    system("pause");
    return 0;
}

void run_test(void)
{
    array<double, num_max> time;
    double avg_time = 0.0;

    cout << "Enter three results time of runing 40 meters: " << "\n";
    cin >> time[0];
    cin >> time[1];
    cin >> time[2];

    avg_time = (time[0] + time[1] + time[2]) / 3;
    cout << "Result: " << time[0] << ", " << time[1] << ", " << time[2] << endl;
    cout << "Average result: " << avg_time;
}
// Author: 崔小葵
// Date: 2020-10-31