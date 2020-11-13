/*
 * @Author: 崔小葵
 * @Date: 2020-11-13 18:45:02
 * @Last Modified by:   崔小葵
 * @Last Modified time: 2020-11-13 18:45:02
 */
#include <iostream>

using namespace std;

const int MAX = 5;

int main()
{
    // get data
    double fish[MAX];
    cout << "Please enter the weights of your fish.\n";
    cout << "You may enter up to " << MAX
         << " fish <q to terminate>.\n";
    cout << "fish #1: ";
    int i = 0;
    while (i < MAX && cin >> fish[i])
    {
        if (++i < MAX)
        {
            cout << "fish #" << i + 1 << ": ";
        }
    }
    // calculate average
    double total = 0.0;
    for (int j = 0; j < i; j++)
    {
        total += fish[j];
    }
    // report results
    if (i == 0)
    {
        cout << "No fish\n";
    }
    else
    {
        cout << total / i << " = average weight of "
             << i << " fish\n";
    }
    system("pause");
    return 0;
}